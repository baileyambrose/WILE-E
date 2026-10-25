# Import necessary ROS 2 libraries
from std_srvs.srv import Trigger
from wile_e_interfaces.msg import FileCommand
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
import time
import struct

from ament_index_python.packages import get_package_share_directory
import os

package_path = get_package_share_directory('wile_e')
file_path = os.path.join(package_path, 'animations', 'walkcycle.bin')


class FileReaderNode(Node):
    def __init__(self):
        super().__init__('file_reader')

        self.trigger_client = self.create_client(Trigger, 'trigger_status')
        self.triggered = False
        
        #wait until service is available
        while not self.trigger_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for trigger status service...')

        # Setup the file command publisher
        qos_profile = QoSProfile(depth=1000)
        self.file_command_publisher = self.create_publisher(FileCommand, 'file_commands', qos_profile)

        # Call the trigger service
        self.request_trigger_status()

    def request_trigger_status(self):
        request = Trigger.Request()
        #self.get_logger().info('trigger request sent')
        future = self.trigger_client.call_async(request)
        future.add_done_callback(self.callback_response)
    
    def callback_response(self, future):
        try:
            response = future.result()
            if not self.triggered:
                if response.success:
                    self.get_logger().info('Trigger received, begin reading file.')
                    self.triggered = True
                    self.publish_file_commands()
                else:
                    time.sleep(1)
                    self.request_trigger_status()
        except Exception as e:
            self.get_logger().error(f"service call failed: {e}")

    def publish_file_commands(self):
        # Manually define the order and types of each field
        fields = [
            ('right_bicep', 'H'),   # int16
            ('left_bicep', 'H'),    # int16
            ('right_forearm', 'H'), # int16
            ('left_forearm', 'H'),  # int16
            ('right_wheel', 'H'),   # int16
            ('left_wheel', 'H'),    # int16
            ('tail', 'H'),          # int16
            ('head_raise', 'H'),    # int16
            ('head_turn', 'H'),     # int16
            ('eyes', 'B'),          # int8
            ('fan', 'B'),           # int8
            ('headlight', 'B'),     # int8
            ('face_detection', 'B') # int8
        ]

        # Create the format string for struct.unpack
        format_string = '>'+''.join(field[1] for field in fields)

        # Calculate the size of each line based on the format string
        line_size = struct.calcsize(format_string)
        self.get_logger().info(f'expecting file commands of length {line_size}')

        try:
            with open(file_path, "rb") as file:
                self.get_logger().info("'walkcycle' file opened")
                start_time = time.time()
                while rclpy.ok():
                    current_time = time.time()
                    if (current_time - start_time) >= 0.01:
                        # Update the start time for the next interval
                        start_time = current_time
                        
                        # Read a single line of bytes from the file
                        line = file.read(line_size)
                        
                        # If line is empty, we've reached the end of the file
                        if not line:
                            self.get_logger().info("End of file reached.")
                            file.seek(0)
                            continue #start from top of this loop
                            #break
                        
                        # Unpack the line into a tuple of values based on the format string
                        values = struct.unpack(format_string, line)

                        # Create an instance of the custom message and populate fields
                        file_command = FileCommand()
                        for i, (field_name,_) in enumerate(fields):
                            setattr(file_command, field_name, values[i])

                        # Publish the file command message
                        self.file_command_publisher.publish(file_command)
                        ##self.get_logger().info(f'Published file commands: {file_command}')
                        line = file.read(1) #read newline byte

                        # Wait 10 milliseconds
                        #time.sleep(0.01)
                if not rclpy.ok():
                    self.get_logger().error("rclpy not ok")
        
        except FileNotFoundError:
            self.get_logger().error("File 'walkcycle' not found.")
        #self.publish_file_commands()

def main(args=None):
    rclpy.init(args=args)
    file_reader_node = FileReaderNode()
    rclpy.spin(file_reader_node)
    file_reader_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

