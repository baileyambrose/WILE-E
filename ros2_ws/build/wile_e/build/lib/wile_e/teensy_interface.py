from wile_e_interfaces.msg import ActionCommand, TeensyData
from wile_e_interfaces.srv import MotorSensorData
from std_msgs.msg import Int16MultiArray, UInt8
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
import serial
import struct
import time
import asyncio
import threading
import socket
import os

SOCK_PATH = "/tmp/camera_data/face_data.sock"

PACKET_FROM_TEENSY_SIZE = 10#12

class TeensyInterfaceNode(Node):

    def __init__(self):
        super().__init__('teensy_interface')
        low_qos_profile = QoSProfile(depth=2)
        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT,depth=10)
        action_qos_profile = QoSProfile(reliability=ReliabilityPolicy.RELIABLE,depth=1)
        self.action_command_subscription = self.create_subscription(
            ActionCommand,
            'action_command',
            self.teensy_command_callback,
            action_qos_profile)
        self.action_command_subscription

        self.beep_subscription = self.create_subscription(
            UInt8,
            'teensy_beep',
            self.teensy_beep_callback,
            qos_profile)
        self.beep_subscription
        self.beep = 0

        # Remove old socket file if present
        if os.path.exists(SOCK_PATH):
            os.remove(SOCK_PATH)
        self.sock = socket.socket(socket.AF_UNIX, socket.SOCK_DGRAM)
        self.sock.bind(SOCK_PATH)
        # Allow host user to write to it
        os.chmod(SOCK_PATH, 0o777)
        if os.path.exists(SOCK_PATH):
            self.get_logger().info("camera_data socket created")

        self.motor_sensor_data = [None,None,None,None]
        self.last_teensy_report = None
        self.last_serial = None

        self.teensy_data_publisher = self.create_publisher(TeensyData, 'teensy_data', qos_profile)
        self.motor_sensor_service = self.create_service(MotorSensorData, 'teensy_data/motor_sensor_data', self.motor_sensor_report_callback)

        # Initialize serial communication
        try:
            self.teensy_port = serial.Serial('/dev/teensy', 115200, timeout=1)
            self.get_logger().info("Connected to /dev/teensy")
            time.sleep(1.0)
        except Exception as e:
            self.get_logger().warn("Failed to connect to teensy...")
            time.sleep(1.0)
        
        #self.get_logger().info('Teensy interface awaiting commands...')
        self.loop = asyncio.new_event_loop()
        self.loop_thread = threading.Thread(target=self.loop.run_forever, daemon=True)
        self.loop_thread.start()
        asyncio.run_coroutine_threadsafe(self.teensy_read_loop(), self.loop)
        #self.teensy_read_loop()
    
    def poll_socket(self):
        try:
            data = self.sock.recv(3, socket.MSG_DONTWAIT)
            if len(data) == 3:
                #self.get_logger().info(f"sending: {list(data)}")
                packet = struct.pack('<BBBBB', data[0], data[1], data[2],0x42,0x69)
                self.teensy_port.write(packet)
        except BlockingIOError:
            #self.get_logger().info(f"no data...")
            pass  # nothing received this cycle
    
    def motor_sensor_report_callback(self, request, response):
        while self.motor_sensor_data[0] == None:
            self.get_logger().info("motor sensor report service: awaiting initial teensy data...")
            time.sleep(1.0)
        response.left_shoulder = self.motor_sensor_data[0]
        response.right_shoulder = self.motor_sensor_data[1]
        response.left_elbow = self.motor_sensor_data[2]
        response.right_elbow = self.motor_sensor_data[3]
        self.get_logger().info(f"last serial: {self.last_serial.nanoseconds /1e9} | last report: {self.last_teensy_report.nanoseconds /1e9} | now: {self.get_clock().now().nanoseconds /1e9}")

        return response

    def teensy_command_callback(self, msg):
        #self.get_logger().info(f"I heard: {msg.headlight}")
        #data = struct.pack('<HHHBBBB', msg.tail,msg.head_raise,msg.head_turn,msg.eyes,msg.fan,msg.headlight,self.beep)
        #self.teensy_port.write(data)
        if self.beep > 0:
            #self.get_logger().info("beep")
            self.beep = 0
        #self.get_logger().info(f"transmitting: {data}")
    
    def teensy_beep_callback(self, msg):
        self.get_logger().info("beep...")
        self.beep = msg.data
        data = struct.pack('<HHHBBBB', 0,0,0,0,0,0,1)
        #self.teensy_port.write(data)
        if self.beep > 0:
            #self.get_logger().info("beep")
            self.beep = 0

    async def teensy_read_loop(self):
        buffer = bytearray()
        #self.get_logger().info(bytes(PACKET_FROM_TEENSY_SIZE))
        while True:
            self.poll_socket()

            if self.teensy_port.in_waiting>0:
                self.last_serial = self.get_clock().now()
                data = self.teensy_port.read(self.teensy_port.in_waiting)
                buffer.extend(data)
                #self.get_logger().info(str(buffer))
                delimiter_index = buffer.find(bytes([PACKET_FROM_TEENSY_SIZE]))#b'\x0C')
                #self.get_logger().info(str(delimiter_index))
                #self.get_logger().info(str(bytes([PACKET_FROM_TEENSY_SIZE])))
                if delimiter_index == PACKET_FROM_TEENSY_SIZE:
                    packet = buffer[:delimiter_index]
                    buffer = buffer[delimiter_index + 1:]

                    values = []
                    """
                    for i in range(0, PACKET_FROM_TEENSY_SIZE, 2):
                        if i//2 == 2 or i//2 == 3:
                            val = int.from_bytes(packet[i:i+2], byteorder='little', signed=False)
                        else:
                            val = int.from_bytes(packet[i:i+2], byteorder='little', signed=True)
                        values.append(val)"""
                    for i in range(0, PACKET_FROM_TEENSY_SIZE,2):
                        #self.get_logger().info(f"{i}")
                        if i == PACKET_FROM_TEENSY_SIZE-2:
                            val = int(packet[i])#int.from_bytes(packet[i], byteorder='little', signed=False)
                            #self.get_logger().info(f"{i}: {val}")
                            values.append(val)
                            val = int(packet[i+1])
                            #self.get_logger().info(f"{i+1}: {val}")
                            #values.append(val)
                        elif i == 2*2 or i == 3*2:
                            val = int.from_bytes(packet[i:i+2], byteorder='little', signed=False)
                            #values.append(val)
                            #self.get_logger().info(f"{i}: {val}")
                        else:
                            val = int.from_bytes(packet[i:i+2], byteorder='little', signed=True)
                            #values.append(val)
                            #self.get_logger().info(f"{i}: {val}")
                        values.append(val)
                    #self.get_logger().info(f"{values}")

                    #msg = Int16MultiArray()
                    #msg.data = values
                    #self.get_logger().info(str(values))
                    if values[0]>=32768 or values[0]<-32768 or values[1]>=32768 or values[1]<-32768:
                        self.get_logger().info(f"motor sensor value out of range {values}")
                    #teensy_data = TeensyData()
                    self.motor_sensor_data[0] = values[0]
                    self.motor_sensor_data[1] = values[1]
                    self.motor_sensor_data[2] = values[2]
                    self.motor_sensor_data[3] = values[3]

                    self.last_teensy_report = self.get_clock().now()

                    buffer.clear()
                    #teensy_data.tail = values[4]
                    #teensy_data.tail_vel = values[5]
                    #self.teensy_data_publisher.publish(teensy_data)

                    #self.get_logger().info(f"recieved: {values}")

                #elif True:
                    #self.get_logger().info(f"buffer size: {len(buffer)} | delimiter index: {delimiter_index}/{PACKET_FROM_TEENSY_SIZE}")

                else:
                    buffer = buffer[delimiter_index + 1:]
                    #self.get_logger().info(f"delimiter offsync: {delimiter_index}")
            else:
                time.sleep(0.015)





def main(args=None):
    rclpy.init(args=args)

    teensy_interface_node = TeensyInterfaceNode()

    #rclpy.spin(teensy_interface_node)
    executor = MultiThreadedExecutor()
    executor.add_node(teensy_interface_node)
    executor.spin()

    teensy_interface_node.destroy_node()
    rclpy.shutdown()
    ser.close()


if __name__ == '__main__':
    main()
