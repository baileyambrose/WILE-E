from wile_e_interfaces.msg import FileCommand, RoboclawCommand, ArduinoCommand
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile

class CommandInterpreterNode(Node):

    def __init__(self):
        super().__init__('command_interpreter')
        qos_profile = QoSProfile(depth=10)
        self.file_command_subscription = self.create_subscription(
            FileCommand,
            'file_commands',
            self.interpreter_callback,
            qos_profile)
        self.file_command_subscription
        # Setup the roboclaw command publisher
        self.roboclaw_command_publisher = self.create_publisher(RoboclawCommand, 'roboclaw_commands', qos_profile)
        # Setup the arduino command publisher
        self.arduino_command_publisher = self.create_publisher(ArduinoCommand, 'arduino_commands', qos_profile)

        self.roboclaw_fields = ['right_bicep','left_bicep','right_forearm','left_forearm','right_wheel','left_wheel']
        self.arduino_fields = ['tail', 'head_raise', 'head_turn', 'eyes', 'fan', 'headlight', 'face_detection']
        self.get_logger().info('waiting to recieve file commands...')
    def interpreter_callback(self, msg):
        #self.get_logger().info(f"I heard: {msg}")
        arduino_cmd = ArduinoCommand()
        # Use setattr to assign values to the ArduinoCommand message dynamically
        for field_name in self.arduino_fields:
            value = getattr(msg, field_name)
            setattr(arduino_cmd, field_name, value)
        #arduino_cmd.headlight = msg.headlight
        self.arduino_command_publisher.publish(arduino_cmd)
        #self.get_logger().info(f'Publishing to arduino controller: {arduino_cmd}')
        roboclaw_cmd = RoboclawCommand()
        for field_name in self.roboclaw_fields:
            value = getattr(msg, field_name)
            setattr(roboclaw_cmd, field_name, value)
        self.roboclaw_command_publisher.publish(roboclaw_cmd)
        #self.get_logger().info(f'Publishing to roboclaw controller: {roboclaw_cmd}')

def main(args=None):
    rclpy.init(args=args)

    command_interpreter_node = CommandInterpreterNode()

    rclpy.spin(command_interpreter_node)

    command_interpreter_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
