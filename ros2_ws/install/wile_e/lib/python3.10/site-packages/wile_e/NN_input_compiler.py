import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu

class AngularVelocityMonitor(Node):
    def __init__(self):
        super().__init__('angular_velocity_monitor')
        self.subscription = self.create_subscription(
            Imu,
            '/imu',
            self.imu_callback,
            10
        )
        self.target = (-0.3197328244274824, -0.0866412213740459, -0.13248091603053513)
        self.tolerance = 1e-4  # Adjust as needed

    def imu_callback(self, msg):
        av = msg.angular_velocity
        if self._matches_target(av.x, av.y, av.z):
            self.get_logger().info(f'Match detected: x={av.x:.6f}, y={av.y:.6f}, z={av.z:.6f}')

    def _matches_target(self, x, y, z):
        return (
            abs(x - self.target[0]) < self.tolerance and
            abs(y - self.target[1]) < self.tolerance and
            abs(z - self.target[2]) < self.tolerance
        )

def main(args=None):
    rclpy.init(args=args)
    node = AngularVelocityMonitor()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()