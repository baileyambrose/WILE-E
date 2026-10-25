from std_msgs.msg import String, UInt8
from wile_e_interfaces.msg import ActionCommand, RoboclawPowerBroadcast, TeensyData, RoboclawStateBroadcast
from wile_e_interfaces.srv import MotorSensorData
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from wile_e.my_roboclaw import Roboclaw
from rclpy.executors import MultiThreadedExecutor
import threading
import struct
import time
import numpy as np
from collections import deque

# Initialize serial communication
rc_shoulders = Roboclaw("/dev/roboclaw_shoulders",115200)#/dev/roboclaw_shoulders
rc_shoulders.Open()
rc_elbows = Roboclaw("/dev/roboclaw_elbows",115200)#/dev/roboclaw_elbows
rc_elbows.Open()
rc_wheels = Roboclaw("/dev/roboclaw_wheels",115200)#/dev/roboclaw_wheels
rc_wheels.Open()
address = 0x80

SHOULDER_ENCODER_PPR = 5281.1
ELBOW_ENCODER_PPR = 2*5281.1
WHEEL_ENCODER_PPR = 5281.1

left_shoulder_index = 0
right_shoulder_index = 1
left_elbow_index = 2
right_elbow_index = 3
left_wheel_index = 4
right_wheel_index = 5

POSITION_TARGET_THRESHOLD = 10

motor_limits = [[-367,1174],[-367,1174],[1320,3814],[1320,3814],[-4000,4000],[-4000,4000]] # elbow physically limited at [587,3814] but [1320,3814] prevents overextension
motor_default_offset = [np.deg2rad(-10),np.deg2rad(-10),np.deg2rad(50),np.deg2rad(-50)]

class RoboclawInterfaceNode(Node):
    def __init__(self):
        super().__init__('roboclaw_interface')
        low_qos_profile = QoSProfile(depth=10)
        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT,depth=10)
        action_qos_profile = QoSProfile(reliability=ReliabilityPolicy.RELIABLE,depth=1)
        self.action_subscription = self.create_subscription(
            ActionCommand,
            'action_command',
            self.action_callback,
            action_qos_profile)
        self.action_subscription
        self.teensy_subscription = self.create_subscription(
            TeensyData,
            'teensy_data',
            self.teensy_callback,
            qos_profile)
        self.teensy_subscription
        self.calibration_command_subscription = self.create_subscription(
            String,
            'calibration_command',
            self.calibration_command_callback,
            low_qos_profile)
        self.calibration_command_subscription
        self.roboclaw_command_subscription = self.create_subscription(
            String,
            'roboclaw_command',
            self.roboclaw_command_callback,
            low_qos_profile)
        self.roboclaw_command_subscription
        self.roboclaw_power_broadcast_publisher = self.create_publisher(RoboclawPowerBroadcast, 'roboclaw_power_broadcast', low_qos_profile)
        
        self.roboclaw_state_broadcast_publisher = self.create_publisher(RoboclawStateBroadcast, 'roboclaw_state_broadcast', action_qos_profile)
        
        self.teensy_beep_publisher = self.create_publisher(UInt8, 'teensy_beep', qos_profile)

        self.isCalibrating = False
        self.calibrated = False
        self.position_inititialized = False
        self.calibration_thread = None
        self.calibration_stop_event = threading.Event()
        self.serial_lock = threading.Lock()


        self.motor_positions = [0,0,0,0]#encoder counts: shoulder_left,shoulder_right,elbow_left,elbow_right
        self.motor_speeds = [0,0,0,0,0,0]#encoder counts/sec
        self.motor_ispeeds = [deque(maxlen=3) for _ in range(4)]#stores 3 speed readings for 4 motors
        self.sensor_motor_positions = [0,0,0,0]#encoder counts
        self.last_motor_positions_action = [0,0,0,0,0,0]
        
        self.initialized = False
        try:
            rc_shoulders.ResetEncoders(address)
            self.get_logger().info(f"shoulder position PID: {rc_shoulders.ReadM1PositionPID(address)}")
        except Exception as e:
            self.get_logger().error("failed to communicate with shoulders roboclaw via serial...") 
        #rc_shoulders.SetEncM1(address,1174)##zero is 80 degrees
        
        #self.get_logger().info(f"shoulder velocity PID: {rc_shoulders.ReadM1VelocityPID(address)}")
        #rc_shoulders.SpeedAccelDeccelPositionM1(address,2000,3000,2000,786,1)
        
        try:
            rc_elbows.ResetEncoders(address)
            self.get_logger().info(f"elbow position PID: {rc_elbows.ReadM1PositionPID(address)}")
        except Exception as e:
            self.get_logger().error("failed to communicate with elbows roboclaw via serial...")

        #rc_elbows.SpeedAccelDeccelPositionM2(address,2000,3000,2000,200,1)
        #rc_elbows.SetEncM1(address,0)##zero is 0 degrees
        
        #rc_elbows.SpeedAccelDeccelPositionM1(address,2000,3000,2000,628,1)

        try:
            rc_wheels.ResetEncoders(address)
        except Exception as e:
            self.get_logger().error("failed to communicate with wheels roboclaw via serial...")
            time.sleep(2)
            #rclpy.shutdown()
            self.destroy_node()


        self.get_logger().info(f"wheel velocity PID: {rc_wheels.ReadM1VelocityPID(address)}")
        
        self.get_logger().info('Roboclaw controllers initialized...')
        self.initialized = True

        self.motor_sensor_client = self.create_client(MotorSensorData, 'teensy_data/motor_sensor_data')
        while not self.motor_sensor_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('motor sensor data service not available, waiting to come online...')
        self.motor_sensor_report_request = MotorSensorData.Request()
        self.call_motor_sensor_report()

        self.power_broadcast_timer = self.create_timer(0.5, self.roboclaw_power_broadcast_callback)
        self.state_broadcast_timer = self.create_timer(0.2, self.roboclaw_state_broadcast_callback)

        self.beep_message = UInt8()
        self.beep_message.data = 1
        self.teensy_beep_publisher.publish(self.beep_message)

        self.command_index = 0

        self.is_standing = False

    def call_motor_sensor_report(self):
        self.future_motor_sensor_report = self.motor_sensor_client.call_async(self.motor_sensor_report_request)
        #rclpy.spin_until_future_complete(self, self.future_motor_sensor_report)
        self.future_motor_sensor_report.add_done_callback(self.compute_motor_sensor_report)

    def roboclaw_control_callback(self, msg):
        ##self.get_logger().info(f"I heard: {msg.left_elbow}")
        #rc_shoulders.SpeedAccelDeccelPositionM1(address,88000,8800,88000,msg.left_shoulder,1)
        #rc_elbows.SpeedAccelDeccelPositionM1(address,28000,2800,28000,msg.left_elbow,1)
        ##self.get_logger().info(f"motor 1: {rc_shoulders.ReadEncM1(address)}")
        if msg.left_shoulder == 786:
            self.get_logger().info("shoulder loop started")
    def action_callback(self,msg):
        left_shoulder = self.rad2enc(msg.left_shoulder,left_shoulder_index)
        right_shoulder = self.rad2enc(msg.right_shoulder,right_shoulder_index)
        left_elbow = self.rad2enc(msg.left_elbow,left_elbow_index)
        right_elbow = self.rad2enc(msg.right_elbow,right_elbow_index)
        #left_wheel = self.rad2enc(msg.left_shoulder,left_wheel_index)
        #right_wheel = self.rad2enc(msg.right_shoulder,right_wheel_index)
        self.command_index+=1
        #self.get_logger().info(f"{self.command_index}")

        if self.calibrated:
            with self.serial_lock:
                
                #rc_wheels.SpeedAccelM1M2(address,30000,right_wheel,left_wheel)
                rc_shoulders.PositionM1M2(address,left_shoulder,right_shoulder,1)
                rc_elbows.PositionM1M2(address,right_elbow,left_elbow,1)
                #rc_shoulders.ReadEncM1M2(address)
                #rc_elbows.ReadEncM1M2(address)
                #rc_wheels.SpeedAccelDeccelPositionM1M2(address,30000,12000,30000,right_wheel,30000,12000,30000,left_wheel,1)

                #if self.last_motor_positions_action[left_wheel_index] != left_wheel:
                #self.get_logger().warn("")
                #    self.last_motor_positions_action[left_wheel_index] = left_wheel
        self.roboclaw_state_broadcast_callback(self.command_index)

    def calibration_command_callback(self, msg):
        if msg.data == "start":
            if self.calibration_thread is None or not self.calibration_thread.is_alive():
                self.get_logger().info('Starting calibration...')
                self.isCalibrating = True
                self.calibration_stop_event.clear()
                self.calibration_thread = threading.Thread(target=self.calibration_sequence)
                self.calibration_thread.start()
            else:
                self.get_logger().info('Calibration already running.')
        elif msg.data == "stop":
            self.get_logger().info('Stopping calibration...')
            self.calibration_stop_event.set()
    def roboclaw_command_callback(self, msg):
        if msg.data == "Disarm":
            with self.serial_lock:
                rc_shoulders.DutyM1M2(address,0,0)
                rc_elbows.DutyM1M2(address,0,0)
                rc_wheels.DutyM1M2(address,0,0)
            self.get_logger().info("disarmed motors")
        elif msg.data == "Stand":
            self.stand_sequence()
    def calibration_sequence(self):
        shoulder_waypoints = [None,0,300,0]
        elbow_waypoints = [2100,2100,3200,2641]#2200
        shoulder_waypoint_error = {}
        
        if not self.position_inititialized:
            self.get_logger().warn("motors not initialized, cancelling calibration")
            return
        self.isCalibrating = True
        self.get_logger().info(f"left_shoulder start {self.motor_positions[left_shoulder_index]}")
        self.get_logger().info(f"left_elbow start {self.motor_positions[left_elbow_index]}")
        for waypoint, (shoulder_target, elbow_target) in enumerate(zip(shoulder_waypoints, elbow_waypoints)):
            with self.serial_lock:
                rc_elbows.SpeedAccelDeccelPositionM2(address,2000,3000,2000,elbow_target,1)
                if shoulder_target is not None:
                    rc_shoulders.SpeedAccelDeccelPositionM1(address,2000,3000,2000,shoulder_target,1)
            #while abs(self.motor_speeds[left_elbow_index]) > 0 or abs(self.motor_speeds[left_shoulder_index]) > 0:
            while self.moving_to_target(left_elbow_index,elbow_target) or self.moving_to_target(left_shoulder_index,shoulder_target):
                if self.calibration_stop_event.wait(timeout=0.1):
                    self.get_logger().info('Calibration interrupted.')
                    return
                #self.get_logger().info(f"{self.serial_lock}")
            time.sleep(0.1)
            self.call_motor_sensor_report()
            time.sleep(0.1)
            if shoulder_target is not None:
                shoulder_waypoint_error[waypoint] = self.motor_positions[left_shoulder_index]-self.sensor_motor_positions[left_shoulder_index]
                self.get_logger().info(f"Waypoint {waypoint} ({shoulder_target}): left_shoulder now at {self.motor_positions[left_shoulder_index]} with a sensor error of {shoulder_waypoint_error[waypoint]}")
                if shoulder_target == 0:
                    with self.serial_lock:
                        rc_shoulders.SetEncM1(address,self.sensor_motor_positions[left_shoulder_index])

            self.teensy_beep_publisher.publish(self.beep_message)

        elbow_error = self.motor_positions[left_elbow_index]-self.sensor_motor_positions[left_elbow_index]
        elbow_target = elbow_waypoints[-1]
        self.get_logger().info(f"Left elbow target: {elbow_target}: left_elbow now at {self.motor_positions[left_elbow_index]} with sensor reading {self.sensor_motor_positions[left_elbow_index]}")
        with self.serial_lock:
            rc_elbows.SpeedAccelDeccelPositionM2(address,2000,3000,2000,elbow_target+elbow_error,1)
        while self.moving_to_target(left_elbow_index,elbow_target+elbow_error):
            if self.calibration_stop_event.wait(timeout=0.1):
                self.get_logger().info('Calibration interrupted.')
                return
            #self.get_logger().info(f"{self.serial_lock}")
        time.sleep(0.3)
        with self.serial_lock:
            rc_elbows.SetEncM2(address,elbow_target)
        self.call_motor_sensor_report()
        time.sleep(0.3)
        elbow_error = self.motor_positions[left_elbow_index]-self.sensor_motor_positions[left_elbow_index]
        self.get_logger().info(f"Left_elbow now at {self.motor_positions[left_elbow_index]} with sensor reading {self.sensor_motor_positions[left_elbow_index]}")


        shoulder_waypoint_error = {}
        self.get_logger().info(f"right_shoulder start {self.motor_positions[right_shoulder_index]}")
        self.get_logger().info(f"right_elbow start {self.motor_positions[right_elbow_index]}")
        for waypoint, (shoulder_target, elbow_target) in enumerate(zip(shoulder_waypoints, elbow_waypoints)):
            with self.serial_lock:
                rc_elbows.SpeedAccelDeccelPositionM1(address,2000,3000,2000,elbow_target,1)
                if shoulder_target is not None:
                    rc_shoulders.SpeedAccelDeccelPositionM2(address,2000,3000,2000,shoulder_target,1)
            #while abs(self.motor_speeds[left_elbow_index]) > 0 or abs(self.motor_speeds[left_shoulder_index]) > 0:
            while self.moving_to_target(right_elbow_index,elbow_target) or self.moving_to_target(right_shoulder_index,shoulder_target):
                if self.calibration_stop_event.wait(timeout=0.1):
                    self.get_logger().info('Calibration interrupted.')
                    return
                #self.get_logger().info(f"{self.serial_lock}")
            time.sleep(0.1)
            self.call_motor_sensor_report()
            time.sleep(0.1)
            if shoulder_target is not None:
                shoulder_waypoint_error[waypoint] = self.motor_positions[right_shoulder_index]-self.sensor_motor_positions[right_shoulder_index]
                self.get_logger().info(f"Waypoint {waypoint} ({shoulder_target}): right_shoulder now at {self.motor_positions[right_shoulder_index]} with a sensor error of {shoulder_waypoint_error[waypoint]}")
                if shoulder_target == 0:
                    with self.serial_lock:
                        rc_shoulders.SetEncM2(address,self.sensor_motor_positions[right_shoulder_index])

            self.teensy_beep_publisher.publish(self.beep_message)

        elbow_error = self.motor_positions[right_elbow_index]-self.sensor_motor_positions[right_elbow_index]
        elbow_target = elbow_waypoints[-1]
        self.get_logger().info(f"Right elbow target: {elbow_target}: right_elbow now at {self.motor_positions[right_elbow_index]} with sensor reading {self.sensor_motor_positions[right_elbow_index]}")
        with self.serial_lock:
            rc_elbows.SpeedAccelDeccelPositionM1(address,2000,3000,2000,elbow_target-elbow_error,1)
        while self.moving_to_target(right_elbow_index,elbow_target-elbow_error):
            if self.calibration_stop_event.wait(timeout=0.1):
                self.get_logger().info('Calibration interrupted.')
                return
            #self.get_logger().info(f"{self.serial_lock}")
        time.sleep(0.3)
        with self.serial_lock:
            rc_elbows.SetEncM1(address,elbow_target)
        self.call_motor_sensor_report()
        time.sleep(0.3)
        elbow_error = self.motor_positions[right_elbow_index]-self.sensor_motor_positions[right_elbow_index]
        self.get_logger().info(f"Right_elbow now at {self.motor_positions[right_elbow_index]} with sensor reading {self.sensor_motor_positions[right_elbow_index]}")

        self.get_logger().info('Calibration complete.')
        self.isCalibrating = False
        self.calibrated = True
    def calibration_sequence1(self):
        shoulder_waypoints = [None,0,300,0]
        elbow_waypoints = [2200,2100,3200,2000]#2000
        shoulder_waypoint_error = {}
        elbow_waypoint_error = {}
        elbow_waypoint_error_sum = 0
        
        if not self.position_inititialized:
            self.get_logger().warn("motors not initialized, cancelling calibration")
            return
        self.isCalibrating = True
        self.get_logger().info(f"left_shoulder start {self.motor_positions[left_shoulder_index]}")
        self.get_logger().info(f"left_elbow start {self.motor_positions[left_elbow_index]}")
        for waypoint, (shoulder_target, elbow_target) in enumerate(zip(shoulder_waypoints, elbow_waypoints)):
            with self.serial_lock:
                rc_elbows.SpeedAccelDeccelPositionM2(address,2000,3000,2000,elbow_target,1)
                if shoulder_target is not None:
                    rc_shoulders.SpeedAccelDeccelPositionM1(address,2000,3000,2000,shoulder_target,1)
            #while abs(self.motor_speeds[left_elbow_index]) > 0 or abs(self.motor_speeds[left_shoulder_index]) > 0:
            while self.moving_to_target(left_elbow_index,elbow_target) or self.moving_to_target(left_shoulder_index,shoulder_target):
                if self.calibration_stop_event.wait(timeout=0.1):
                    self.get_logger().info('Calibration interrupted.')
                    return
                #self.get_logger().info(f"{self.serial_lock}")
            time.sleep(0.1)
            self.call_motor_sensor_report()
            time.sleep(0.1)
            if shoulder_target is not None:
                shoulder_waypoint_error[waypoint] = self.motor_positions[left_shoulder_index]-self.sensor_motor_positions[left_shoulder_index]
                self.get_logger().info(f"waypoint {waypoint} ({shoulder_target}): left_shoulder now at {self.motor_positions[left_shoulder_index]} with a sensor error of {shoulder_waypoint_error[waypoint]}")
                if shoulder_target == 0:
                    with self.serial_lock:
                        rc_shoulders.SetEncM1(address,self.sensor_motor_positions[left_shoulder_index])

            elbow_waypoint_error[waypoint] = self.motor_positions[left_elbow_index]-self.sensor_motor_positions[left_elbow_index]
            elbow_waypoint_error_sum += elbow_waypoint_error[waypoint]
            self.get_logger().info(f"waypoint {waypoint} ({elbow_target}): left_elbow now at {self.motor_positions[left_elbow_index]} with a sensor error of {elbow_waypoint_error[waypoint]}")

            self.teensy_beep_publisher.publish(self.beep_message)
            #self.get_logger().info(f"{beep_message.data}")

        left_elbow_offset = -int(elbow_waypoint_error_sum/len(elbow_waypoint_error))
        self.get_logger().info(f"Offsetting left_elbow's initiallly set position by {left_elbow_offset}")
        with self.serial_lock:
            rc_elbows.SetEncM2(address,self.motor_positions[left_elbow_index]+left_elbow_offset)
            self.get_logger().info(f"Now positioned at {self.motor_positions[left_elbow_index]+left_elbow_offset}")
            rc_elbows.SpeedAccelDeccelPositionM2(address,2000,3000,2000,elbow_waypoints[-1],1)
        if self.calibration_stop_event.wait(timeout=0.2):
            self.get_logger().info('Calibration interrupted.')
            return
        elbow_waypoint_error_sum = 0

        for waypoint, (shoulder_target, elbow_target) in enumerate(zip(shoulder_waypoints, elbow_waypoints)):
            with self.serial_lock:
                rc_elbows.SpeedAccelDeccelPositionM1(address,2000,3000,2000,elbow_target,1)
                if shoulder_target is not None:
                    rc_shoulders.SpeedAccelDeccelPositionM2(address,2000,3000,2000,shoulder_target,1)
            #while abs(self.motor_speeds[right_elbow_index]) > 0 or abs(self.motor_speeds[right_shoulder_index]) > 0:
            while self.moving_to_target(right_elbow_index,elbow_target) or self.moving_to_target(right_shoulder_index,shoulder_target):
                if self.calibration_stop_event.wait(timeout=0.1):
                    self.get_logger().info('Calibration interrupted.')
                    return
            time.sleep(0.1)
            self.call_motor_sensor_report()
            time.sleep(0.1)
            if shoulder_target is not None:
                shoulder_waypoint_error[waypoint] = self.motor_positions[right_shoulder_index]-self.sensor_motor_positions[right_shoulder_index]
                self.get_logger().info(f"waypoint {waypoint} ({shoulder_target}): right_shoulder now at {self.motor_positions[right_shoulder_index]} with a sensor error of {shoulder_waypoint_error[waypoint]}")
                if shoulder_target == 0:
                    with self.serial_lock:
                        rc_shoulders.SetEncM1(address,self.sensor_motor_positions[right_shoulder_index])

            elbow_waypoint_error[waypoint] = self.motor_positions[right_elbow_index]-self.sensor_motor_positions[right_elbow_index]
            elbow_waypoint_error_sum += elbow_waypoint_error[waypoint]
            self.get_logger().info(f"waypoint {waypoint} ({elbow_target}): right_elbow now at {self.motor_positions[right_elbow_index]} with a sensor error of {elbow_waypoint_error[waypoint]}")

            self.teensy_beep_publisher.publish(self.beep_message)
        
        right_elbow_offset = -int(elbow_waypoint_error_sum/len(elbow_waypoint_error))
        self.get_logger().info(f"Offsetting right_elbow's initiallly set position by {right_elbow_offset}")
        with self.serial_lock:
            rc_elbows.SetEncM1(address,self.motor_positions[right_elbow_index]+right_elbow_offset)
            self.get_logger().info(f"Now positioned at {self.motor_positions[right_elbow_index]+right_elbow_offset}")
            rc_elbows.SpeedAccelDeccelPositionM1(address,2000,3000,2000,elbow_waypoints[-1],1)

        self.get_logger().info('Calibration complete.')
        self.isCalibrating = False
        self.calibrated = True
    def stand_sequence(self):
        shoulder_waypoints = [None,500,500]
        elbow_waypoints = [2300,2600,1400]
        
        if not self.calibrated:
            self.get_logger().warn("motors not calibrated, cancelling stand command")
            return
        
        if not self.is_standing:
            self.get_logger().info("Stand process started...")
            with self.serial_lock:
                rc_wheels.PositionM1M2(address,0,0,1) # stop wheels
            for waypoint, (shoulder_target, elbow_target) in enumerate(zip(shoulder_waypoints, elbow_waypoints)):
                with self.serial_lock:
                    rc_elbows.SpeedAccelDeccelPositionM1M2(address,2000,3000,2000,elbow_target,2000,3000,2000,elbow_target,1)
                    if shoulder_target is not None:
                        rc_shoulders.SpeedAccelDeccelPositionM1M2(address,2000,3000,2000,shoulder_target,2000,3000,2000,shoulder_target,1)
                #while self.moving_to_target(left_elbow_index,elbow_target) or self.moving_to_target(right_elbow_index,elbow_target):
                    #self.sleep_step()
                time.sleep(0.5)
                self.get_logger().info(f"Stand process waypoint {waypoint}")

            self.get_logger().info("Stand process complete.")
            self.is_standing = True
        else:
            self.walk_sequence()
    def walk_sequence(self):
        shoulder_waypoints = [300,0,0,300]
        elbow_waypoints = [1500,1200,1800,2100]
        waypoint_speeds = [3000,5000,5000,5000]
        num_waypoints = len(shoulder_waypoints)
        left_index = 0
        right_index = 2
        while True:
            with self.serial_lock:
                rc_elbows.SpeedAccelDeccelPositionM1M2(address,2000,waypoint_speeds[right_index],2000,elbow_waypoints[right_index],2000,waypoint_speeds[left_index],2000,elbow_waypoints[left_index],1)
                rc_shoulders.SpeedAccelDeccelPositionM1M2(address,2000,waypoint_speeds[left_index],2000,shoulder_waypoints[left_index],2000,waypoint_speeds[right_index],2000,shoulder_waypoints[right_index],1)
            while self.moving_to_target(left_shoulder_index,shoulder_waypoints[left_index]) or self.moving_to_target(right_shoulder_index,shoulder_waypoints[right_index]):
                time.sleep(0.01)
            left_index+=1
            right_index+=1
            if left_index>=num_waypoints:
                left_index = 0
            if right_index>=num_waypoints:
                right_index = 0


    def sleep_step(self):
        self.get_clock().sleep_for(rclpy.duration.Duration(seconds=0.1))

    def moving_to_target(self,motor_index,motor_target):
        if motor_target == None:
            return False
        is_moving = abs(self.motor_speeds[motor_index]) > 5
        is_not_at_target = abs(self.motor_positions[motor_index] - motor_target) > POSITION_TARGET_THRESHOLD
        #self.get_logger().info(f"{motor_index}: speed:{abs(self.motor_speeds[motor_index])}, position error:{abs(self.motor_positions[motor_index] - motor_target)}")
        return is_moving + is_not_at_target
        
    def roboclaw_power_broadcast_callback(self):
        with self.serial_lock:
            voltage = rc_shoulders.ReadMainBatteryVoltage(address)
            current_shoulders = rc_shoulders.ReadCurrents(address)
            current_elbows = rc_shoulders.ReadCurrents(address)
            current_wheels = rc_wheels.ReadCurrents(address)
        current = current_shoulders[1] + current_shoulders[2] + current_elbows[1] + current_elbows[2] + current_wheels[1] + current_wheels[2]
        #self.get_logger().info(f"current: {current}")
        roboclaw_power_broadcast = RoboclawPowerBroadcast()
        roboclaw_power_broadcast.battery_voltage = voltage[1]
        try:
            roboclaw_power_broadcast.current_draw = abs(current)
        except Exception as e:
            self.get_logger().info(f"current: {current}")
        self.roboclaw_power_broadcast_publisher.publish(roboclaw_power_broadcast)

    def roboclaw_state_broadcast_callback(self,index=0):
        with self.serial_lock:
            #self.motor_positions[left_shoulder_index] = rc_shoulders.ReadEncM1(address)[1]
            #self.motor_positions[right_shoulder_index] = rc_shoulders.ReadEncM2(address)[1]
            self.motor_positions[left_shoulder_index], self.motor_positions[right_shoulder_index] = rc_shoulders.ReadEncM1M2(address)[1:]
            #self.motor_positions[left_elbow_index] = rc_elbows.ReadEncM2(address)[1]
            #self.motor_positions[right_elbow_index] = rc_elbows.ReadEncM1(address)[1]
            self.motor_positions[right_elbow_index], self.motor_positions[left_elbow_index] = rc_elbows.ReadEncM1M2(address)[1:]

            self.motor_speeds = self.read_motor_speeds()
            #self.motor_speeds[right_wheel_index], self.motor_speeds[left_wheel_index] = rc_wheels.ReadSpeedM1M2(address)[1:]

        roboclaw_state_broadcast = RoboclawStateBroadcast()
        roboclaw_state_broadcast.left_shoulder = self.enc2rad(self.motor_positions[left_shoulder_index],left_shoulder_index) - motor_default_offset[left_shoulder_index] #-2 * np.pi * float(self.motor_positions[left_shoulder_index])/SHOULDER_ENCODER_PPR
        roboclaw_state_broadcast.right_shoulder = self.enc2rad(self.motor_positions[right_shoulder_index],right_shoulder_index) - motor_default_offset[right_shoulder_index]
        roboclaw_state_broadcast.left_elbow = self.enc2rad(self.motor_positions[left_elbow_index],left_elbow_index) - motor_default_offset[left_elbow_index]
        roboclaw_state_broadcast.right_elbow = self.enc2rad(self.motor_positions[right_elbow_index],right_elbow_index) - motor_default_offset[right_elbow_index]

        roboclaw_state_broadcast.left_shoulder_speed = self.enc2rad(self.motor_speeds[left_shoulder_index],left_shoulder_index)
        roboclaw_state_broadcast.right_shoulder_speed = self.enc2rad(self.motor_speeds[right_shoulder_index],right_shoulder_index)
        roboclaw_state_broadcast.left_elbow_speed = self.enc2rad(self.motor_speeds[left_elbow_index],left_elbow_index)
        roboclaw_state_broadcast.right_elbow_speed = self.enc2rad(self.motor_speeds[right_elbow_index],right_elbow_index)
        #roboclaw_state_broadcast.left_wheel_speed = self.enc2rad(self.motor_speeds[left_wheel_index],left_wheel_index)
        #roboclaw_state_broadcast.right_wheel_speed = self.enc2rad(self.motor_speeds[right_wheel_index],right_wheel_index)

        self.roboclaw_state_broadcast_publisher.publish(roboclaw_state_broadcast)
        #if index:
            #self.get_logger().warn(f"{index}")
        #self.get_logger().info(f"{roboclaw_state_broadcast}")
        #self.get_logger().info(f"{self.motor_speeds}")
    def read_motor_speeds(self):
        s_left, s_right = rc_shoulders.ReadISpeedM1M2(address)[1:]
        e_right, e_left = rc_elbows.ReadISpeedM1M2(address)[1:]

        self.motor_ispeeds[left_shoulder_index].append(s_left)
        self.motor_ispeeds[right_shoulder_index].append(s_right)
        self.motor_ispeeds[left_elbow_index].append(e_left)
        self.motor_ispeeds[right_elbow_index].append(e_right)

        #self.get_logger().info(f"{s_left}")

        averages = [round(sum(buf) / len(buf)) for buf in self.motor_ispeeds]
        return averages

    def compute_motor_sensor_report(self, report):
        motor_sensor_report = report.result()
        if motor_sensor_report.left_shoulder == None:
            return
        self.sensor_motor_positions[left_shoulder_index] = int(SHOULDER_ENCODER_PPR*float(motor_sensor_report.left_shoulder)/65536)
        self.sensor_motor_positions[right_shoulder_index] = int(SHOULDER_ENCODER_PPR*float(motor_sensor_report.right_shoulder)/65536)
        self.sensor_motor_positions[left_elbow_index] = int(ELBOW_ENCODER_PPR*float(motor_sensor_report.left_elbow)/65536)
        self.sensor_motor_positions[right_elbow_index] = int(ELBOW_ENCODER_PPR*float(motor_sensor_report.right_elbow)/65536)
        if self.position_inititialized == False and self.initialized == True:
            self.get_logger().info(f"motor sensor initial calibration: {self.sensor_motor_positions}")
            with self.serial_lock:
                rc_shoulders.SetEncM1(address,self.sensor_motor_positions[left_shoulder_index])
                rc_shoulders.SetEncM2(address,self.sensor_motor_positions[right_shoulder_index])
                rc_elbows.SetEncM2(address,self.sensor_motor_positions[left_elbow_index])
                rc_elbows.SetEncM1(address,self.sensor_motor_positions[right_elbow_index])
            self.position_inititialized = True
    
    def teensy_callback(self, msg):
        self.sensor_motor_positions[left_shoulder_index] = int(SHOULDER_ENCODER_PPR*float(msg.left_shoulder)/65536)
        self.sensor_motor_positions[right_shoulder_index] = int(SHOULDER_ENCODER_PPR*float(msg.right_shoulder)/65536)
        self.sensor_motor_positions[left_elbow_index] = int(ELBOW_ENCODER_PPR*float(msg.left_elbow)/65536)
        self.sensor_motor_positions[right_elbow_index] = int(ELBOW_ENCODER_PPR*float(msg.right_elbow)/65536)
        if self.position_inititialized == False and self.initialized == True:
            self.get_logger().info(f"teensy initial calibration: {self.sensor_motor_positions}")
            with self.serial_lock:
                rc_shoulders.SetEncM1(address,self.sensor_motor_positions[left_shoulder_index])
                rc_shoulders.SetEncM2(address,self.sensor_motor_positions[right_shoulder_index])
                rc_elbows.SetEncM2(address,self.sensor_motor_positions[left_elbow_index])
                rc_elbows.SetEncM1(address,self.sensor_motor_positions[right_elbow_index])
            self.position_inititialized = True

    def rad2enc(self,radians,joint):
        if joint == left_shoulder_index:
            raw = int(SHOULDER_ENCODER_PPR * radians/(-2* np.pi))
        elif joint == right_shoulder_index:
            raw = int(SHOULDER_ENCODER_PPR * radians/(-2* np.pi))
        elif joint == left_elbow_index:
            raw = int(ELBOW_ENCODER_PPR * radians/(2* np.pi))
        elif joint == right_elbow_index:
            raw = int(ELBOW_ENCODER_PPR * radians/(-2* np.pi))
        elif joint == left_wheel_index:
            raw = int(WHEEL_ENCODER_PPR * radians/(-2* np.pi))
        elif joint == right_wheel_index:
            raw = int(WHEEL_ENCODER_PPR * radians/(2* np.pi))

        return min(max(raw,motor_limits[joint][0]),motor_limits[joint][1])

    def enc2rad(self,encoder,joint):
        if joint == left_shoulder_index:
            return -2 * np.pi * float(encoder)/SHOULDER_ENCODER_PPR
        elif joint == right_shoulder_index:
            return -2 * np.pi * float(encoder)/SHOULDER_ENCODER_PPR
        elif joint == left_elbow_index:
            return 2 * np.pi * float(encoder)/ELBOW_ENCODER_PPR
        elif joint == right_elbow_index:
            return -2 * np.pi * float(encoder)/ELBOW_ENCODER_PPR
        elif joint == left_wheel_index:
            return -2 * np.pi * float(encoder)/WHEEL_ENCODER_PPR
        elif joint == right_wheel_index:
            return 2 * np.pi * float(encoder)/WHEEL_ENCODER_PPR

def main(args=None):
    rclpy.init(args=args)

    roboclaw_interface_node = RoboclawInterfaceNode()

    #rclpy.spin(roboclaw_interface_node)
    executor = MultiThreadedExecutor()
    executor.add_node(roboclaw_interface_node)
    executor.spin()


    roboclaw_interface_node.destroy_node()
    rclpy.shutdown()
    ser.close()


if __name__ == '__main__':
    main()
