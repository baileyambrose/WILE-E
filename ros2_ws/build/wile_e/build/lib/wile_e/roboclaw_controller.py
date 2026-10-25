from wile_e_interfaces.msg import RoboclawCommand, RoboclawPowerBroadcast
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from wile_e.roboclaw import Roboclaw
import struct
import time

# Initialize serial communication
rc_shoulders = Roboclaw("/dev/ttyACM1",38400)#/dev/roboclaw_shoulders
rc_shoulders.Open()
rc_elbows = Roboclaw("/dev/ttyACM0",38400)#/dev/roboclaw_elbows
rc_elbows.Open()
address = 0x80

class RoboclawControllerNode(Node):

    def __init__(self):
        super().__init__('roboclaw_controller')
        qos_profile = QoSProfile(depth=10)
        self.roboclaw_command_subscription = self.create_subscription(
            RoboclawCommand,
            'roboclaw_commands',
            self.roboclaw_control_callback,
            qos_profile)
        self.roboclaw_command_subscription
        self.roboclaw_power_broadcast_publisher = self.create_publisher(RoboclawPowerBroadcast, 'roboclaw_power_broadcast', qos_profile)
        self.power_broadcast_timer = self.create_timer(0.5, self.roboclaw_power_broadcast_callback)
        
        try:
            rc_shoulders.ResetEncoders(address)
            rc_shoulders.SetEncM1(address,1174)##zero is 80 degrees
        except Exception as e:
            time.sleep(5.0)
        
        self.get_logger().info(f"PID: {rc_shoulders.ReadM1PositionPID(address)}")
        #rc_shoulders.SpeedAccelDeccelPositionM1(address,2000,3000,2000,786,1)
        
        rc_elbows.ResetEncoders(address)
        rc_elbows.SetEncM1(address,0)##zero is 0 degrees
        self.get_logger().info(f"PID: {rc_elbows.ReadM1PositionPID(address)}")
        #rc_elbows.SpeedAccelDeccelPositionM1(address,2000,3000,2000,628,1)
        
        self.get_logger().info('Roboclaw controller awaiting commands...')

    def roboclaw_control_callback(self, msg):
        ##self.get_logger().info(f"I heard: {msg.left_elbow}")
        #rc_shoulders.SpeedAccelDeccelPositionM1(address,88000,8800,88000,msg.left_shoulder,1)
        #rc_elbows.SpeedAccelDeccelPositionM1(address,28000,2800,28000,msg.left_elbow,1)
        ##self.get_logger().info(f"motor 1: {rc_shoulders.ReadEncM1(address)}")
        if msg.left_shoulder == 786:
            self.get_logger().info("shoulder loop started")
    
    def roboclaw_power_broadcast_callback(self):
        voltage = rc_shoulders.ReadMainBatteryVoltage(address)
        #self.get_logger().info(f"voltage: {voltage[1]}")
        roboclaw_power_broadcast = RoboclawPowerBroadcast()
        roboclaw_power_broadcast.battery_voltage = voltage[1]
        self.roboclaw_power_broadcast_publisher.publish(roboclaw_power_broadcast)


def main(args=None):
    rclpy.init(args=args)

    roboclaw_controller_node = RoboclawControllerNode()

    rclpy.spin(roboclaw_controller_node)

    roboclaw_controller_node.destroy_node()
    rclpy.shutdown()
    ser.close()


if __name__ == '__main__':
    main()
