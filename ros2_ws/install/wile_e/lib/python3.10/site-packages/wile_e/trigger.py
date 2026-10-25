# Import necessary ROS 2 libraries
from std_srvs.srv import Trigger
from std_msgs.msg import Bool
import rclpy
from rclpy.node import Node

class TriggerServiceNode(Node):
    def __init__(self):
        super().__init__('trigger_service')
        
        self.triggered = False
        
        self.subscription = self.create_subscription(Bool, '/trigger_message',self.trigger_callback,10)
        
        # Create a service named 'trigger_robot' using the Trigger service type
        self.srv = self.create_service(Trigger, 'trigger_status', self.trigger_status_callback)
        
        self.get_logger().info('Trigger service is ready. visit http://192.168.4.38:5000 to start the robot.')
        
    def trigger_callback(self, msg):
        self.triggered = msg.data
        self.get_logger().info(f"Trigger status updated to: {self.triggered}")

    def trigger_status_callback(self, request, response):
        #self.get_logger().info('trigger request recieved')
        if self.triggered:
            response.success = True
            response.message = "Robot start signal sent."
            self.get_logger().info('Robot start signal sent to client.')
        else:
            response.success = False
            response.message = "Trigger is not activated."
        return response

def main(args=None):
    rclpy.init(args=args)
    trigger_service_node = TriggerServiceNode()
    rclpy.spin(trigger_service_node)
    trigger_service_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

