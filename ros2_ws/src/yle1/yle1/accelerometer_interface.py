import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from smbus2 import SMBus
import math
import struct

MPU6050_ADDR = 0x68
PWR_MGMT_1 = 0x6B
ACCEL_XOUT_H = 0x3B
GYRO_XOUT_H = 0x43

class MPU6050Node(Node):
    def __init__(self):
        super().__init__('mpu6050_node')
        self.publisher_ = self.create_publisher(Imu, 'imu/data_raw', 10)
        self.timer = self.create_timer(0.05, self.read_and_publish)
        self.bus = SMBus(1)  # I2C bus 1
        self.bus.write_byte_data(MPU6050_ADDR, PWR_MGMT_1, 0)  # Wake up sensor
        self.get_logger().info('MPU6050 initialized and publishing to imu/data_raw')

    def read_raw_data(self, addr):
        high = self.bus.read_byte_data(MPU6050_ADDR, addr)
        low = self.bus.read_byte_data(MPU6050_ADDR, addr + 1)
        value = (high << 8) | low
        return value - 65536 if value > 32767 else value

    def read_and_publish(self):
        accel_x = self.read_raw_data(ACCEL_XOUT_H) / 16384.0
        accel_y = self.read_raw_data(ACCEL_XOUT_H + 2) / 16384.0
        accel_z = self.read_raw_data(ACCEL_XOUT_H + 4) / 16384.0

        gyro_x = self.read_raw_data(GYRO_XOUT_H) / 131.0
        gyro_y = self.read_raw_data(GYRO_XOUT_H + 2) / 131.0
        gyro_z = self.read_raw_data(GYRO_XOUT_H + 4) / 131.0

        imu_msg = Imu()
        imu_msg.linear_acceleration.x = accel_x * 9.80665
        imu_msg.linear_acceleration.y = accel_y * 9.80665
        imu_msg.linear_acceleration.z = accel_z * 9.80665

        imu_msg.angular_velocity.x = math.radians(gyro_x)
        imu_msg.angular_velocity.y = math.radians(gyro_y)
        imu_msg.angular_velocity.z = math.radians(gyro_z)

        imu_msg.header.stamp = self.get_clock().now().to_msg()
        imu_msg.header.frame_id = 'imu_link'

        self.publisher_.publish(imu_msg)

def main(args=None):
    rclpy.init(args=args)
    node = MPU6050Node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()