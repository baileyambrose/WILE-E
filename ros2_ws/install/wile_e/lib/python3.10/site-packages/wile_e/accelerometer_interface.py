import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

import numpy as np
from scipy.spatial.transform import Rotation as R

import time

import board
import busio

import adafruit_bno08x
from adafruit_bno08x.i2c import BNO08X_I2C

# IMU's offset quaternion (w, x, y, z)
q0 = np.array([
    1.0,
    0.0,#-0.7071,
    0.0,
    0.0,#0.7071,
])

orientation_quat = [0,0,0,0] # x, y, z, w (real)
#orientation_rad = [0,0,0] # roll, pitch, yaw(heading)  (in rad)
#orientation_deg = [0,0,0] # roll, pitch, yaw(heading)  (in deg)

linear_accel = [0,0,0] # x, y, z  (in m/s^2)
gyro = [0,0,0] # x, y, z  (in deg/s)

class AccelerometerInterfaceNode(Node):
    def __init__(self):
        super().__init__('accelerometer_interface')
        low_qos_profile = QoSProfile(depth=2)
        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT,depth=10)

        self.imu_data_publisher = self.create_publisher(Imu, 'imu_data', qos_profile)

        # IMU sensor (BNO085)
        self.imu = None
        self.init_sensor()
        self.imu_lockout = False

        # create timer for reading and publishing data (@ rate of 50hz)
        self.read_send_timer = self.create_timer(0.02, self.read_and_send_imu_data)
    
    def init_sensor(self):
        i2c = busio.I2C(board.SCL, board.SDA, frequency=400000)#i2c = I2C(3)
        try:
            self.imu = BNO08X_I2C(i2c)
        except:
            self.get_logger().error('Failed to connect to BNO085 via I2C...')
            raise Exception('Failed to connect to BNO085 via I2')

        self.get_logger().info('Connected to BNO085 via I2C')
        
        #self.imu.hard_reset()
        #self.get_logger().info(f"calibrating: {self.imu.calibration_status}")
        #while not self.imu.calibration_status:
        #    self.get_logger().info(f"calibrating: {self.imu.calibration_status}")
        #    time.sleep(0.1)
            
        # enable the reports from the IMU
        self.imu.enable_feature(adafruit_bno08x.BNO_REPORT_ROTATION_VECTOR) # For orientation_quat and Euler (heading) data
        self.imu.enable_feature(adafruit_bno08x.BNO_REPORT_ACCELEROMETER) # Linear acceleration data
        self.imu.enable_feature(adafruit_bno08x.BNO_REPORT_GYROSCOPE) # For Angular Velocity data

        time.sleep(0.5) # Make sure we the IMU is initialized

    def read_and_send_imu_data(self):
        if self.imu_lockout:
            return
        # get the Angular Velocity (gryo data) of the robot
        try:
            gyro[0], gyro[1], gyro[2] = self.imu.gyro 
            # get the Linear Acceleration of the robot
            linear_accel[0], linear_accel[1], linear_accel[2] = self.imu.acceleration  
            # get the quaternion representation of the robot's orientation
            orientation_quat[1], orientation_quat[2], orientation_quat[3], orientation_quat[0] = self.imu.quaternion

            reflected_quat = self.reflect_quaternion(np.array(orientation_quat))

            #fixed_quat = self.offset_quaternion(orientation_quat)

            q = R.from_quat(orientation_quat)

            offset1 = R.from_euler('x', 90, degrees=True)

            fixed_quat = (offset1 * q).as_quat()

            self.get_logger().info(f"{q.as_euler('xyz', degrees=True)} -> {fixed_quat}: {(R.from_quat([0, 0.774, 0, -.633])).as_euler('xyz', degrees=True)}")
            # calculate the euler representation of the robot's orientation
            #self.__calc_euler_angles_deg()

            roll, pitch, yaw = self.quat_to_rpy(orientation_quat)

            #self.get_logger().info(f"roll:{roll}, pitch:{pitch}, yaw:{yaw}")

            #create messages to publish
            imu_data_msg = Imu()
            #robot_ori_euler_msg = Vector3()

            # IMU X down, Y left, Z forward
            imu_data_msg.angular_velocity.x = gyro[0]
            imu_data_msg.angular_velocity.y = gyro[1]
            imu_data_msg.angular_velocity.z = gyro[2]
            imu_data_msg.linear_acceleration.x = linear_accel[2]
            imu_data_msg.linear_acceleration.y = -linear_accel[1]
            imu_data_msg.linear_acceleration.z = linear_accel[0]
            imu_data_msg.orientation.x = fixed_quat[1]
            imu_data_msg.orientation.y = fixed_quat[2]
            imu_data_msg.orientation.z = fixed_quat[3]
            imu_data_msg.orientation.w = fixed_quat[0]

            imu_data_msg.angular_velocity.x = roll
            imu_data_msg.angular_velocity.y = pitch
            imu_data_msg.angular_velocity.z = yaw

            self.imu_data_publisher.publish(imu_data_msg)
            #self.get_logger().info(f"{imu_data_msg}")
            #self.robot_orientation_publisher.publish(robot_ori_euler_msg)
        except Exception as e:
            self.imu_lockout = True
            self.get_logger().warn(f"BNO085 read error:{e}")
            time.sleep(0.1)
            self.imu_lockout = False

    def reflect_quaternion(self, q):
        # q = [w, x, y, z]
        w, x, y, z = q

        # Convert to rotation matrix
        R_imu = R.from_quat([x, y, z, w]).as_matrix()

        # Reflection matrix: flip X only
        M = np.diag([1, 1, 1])

        # Apply reflection: R_vis = M * R_imu * M
        R_vis = M @ R_imu @ M

        # Convert back to quaternion (scipy uses [x,y,z,w])
        q_vis_xyzw = R.from_matrix(R_vis).as_quat()

        # Return in [w, x, y, z] format
        x2, y2, z2, w2 = q_vis_xyzw
        return np.array([w2, x2, y2, z2])
    
    def offset_quaternion(self, q_raw):
        # q_raw and q0_inv are (w,x,y,z)
        r_raw = R.from_quat([q_raw[1], q_raw[2], q_raw[3], q_raw[0]])
        r_off = R.from_quat([q0[1], q0[2], q0[3], q0[0]])

        r_fixed = r_off * r_raw
        x, y, z, w = r_fixed.as_quat()
        return np.array([w, x, y, z])
    
    def quat_to_rpy(self,q):
        w, x, y, z = q

        # Roll (x‑axis rotation)
        t0 = +2.0 * (w*x + y*z)
        t1 = +1.0 - 2.0 * (x*x + y*y)
        roll = np.arctan2(t0, t1)

        # Pitch (y‑axis rotation)
        t2 = +2.0 * (w*y - z*x)
        t2 = np.clip(t2, -1.0, 1.0)   # numerical safety
        pitch = np.arcsin(t2)

        # Yaw (z‑axis rotation)
        t3 = +2.0 * (w*z + x*y)
        t4 = +1.0 - 2.0 * (y*y + z*z)
        yaw = np.arctan2(t3, t4)

        return roll, pitch, yaw

def main():
    rclpy.init()
    node = AccelerometerInterfaceNode()
    rclpy.spin(node)
    pygame.quit()

if __name__ == '__main__':
    main()
"""
while True:
    time.sleep(0.5)
    print("Acceleration:")
    accel_x, accel_y, accel_z = bno.acceleration
    print("X: %0.6f  Y: %0.6f Z: %0.6f  m/s^2" % (accel_x, accel_y, accel_z))
    print("")

    print("Gyro:")
    gyro_x, gyro_y, gyro_z = bno.gyro
    print("X: %0.6f  Y: %0.6f Z: %0.6f rads/s" % (gyro_x, gyro_y, gyro_z))
    print("")

    print("Magnetometer:")
    mag_x, mag_y, mag_z = bno.magnetic
    print("X: %0.6f  Y: %0.6f Z: %0.6f uT" % (mag_x, mag_y, mag_z))
    print("")

    print("Rotation Vector Quaternion:")
    quat_i, quat_j, quat_k, quat_real = bno.quaternion
    print("I: %0.6f  J: %0.6f K: %0.6f  Real: %0.6f" % (quat_i, quat_j, quat_k, quat_real))
    print("")
"""