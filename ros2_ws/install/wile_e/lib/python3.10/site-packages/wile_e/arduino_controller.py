from wile_e_interfaces.msg import ArduinoCommand
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
import serial
import struct

# Initialize serial communication
ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1)  # Replace 'COM3' with the correct port

class ArduinoControllerNode(Node):

    def __init__(self):
        super().__init__('arduino_controller')
        qos_profile = QoSProfile(depth=10)
        self.arduino_command_subscription = self.create_subscription(
            ArduinoCommand,
            'arduino_commands',
            self.arduino_control_callback,
            qos_profile)
        self.arduino_command_subscription
        
        self.get_logger().info('Arduino controller awaiting commands...')

    def arduino_control_callback(self, msg):
        self.get_logger().info(f"I heard: {msg.headlight}")
        data = struct.pack('<HHHBBBB', msg.tail,msg.head_raise,msg.head_turn,msg.eyes,msg.fan,msg.headlight,msg.face_detection)
        ser.write(data)
        self.get_logger().info(f"transmitting: {data}")


def main(args=None):
    rclpy.init(args=args)

    arduino_controller_node = ArduinoControllerNode()

    rclpy.spin(arduino_controller_node)

    arduino_controller_node.destroy_node()
    rclpy.shutdown()
    ser.close()


if __name__ == '__main__':
    main()
