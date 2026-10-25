import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy
from sensor_msgs.msg import Imu
from ament_index_python.packages import get_package_share_directory
from builtin_interfaces.msg import Time
from geometry_msgs.msg import Vector3, Quaternion
from wile_e_interfaces.msg import ActionCommand, RoboclawStateBroadcast, VelocityCommand
from scipy.spatial.transform import Rotation as R
from scipy import signal
import numpy as np
import torch
import os
import csv
import psutil

package_path = get_package_share_directory('wile_e')

model = os.path.join(package_path,'NN','policy.pt')
nn_model = torch.jit.load(model, map_location=torch.device('cpu'))
nn_model.eval()
compiled_nn_model = torch.compile(nn_model)

ACTION_RATE = 0.02
CLIP_ACTIONS = 30.0 #configured in rsl_rl_cfg.py

SHOULDER_ENCODER_PPR = 5281.1
ELBOW_ENCODER_PPR = 2*5281.1

class NeuralNetworkInterfaceNode(Node):
    def __init__(self):
        super().__init__('NN_interface_node')
        low_qos_profile = QoSProfile(depth=2)
        qos_profile = QoSProfile(reliability=ReliabilityPolicy.BEST_EFFORT,depth=10)
        action_qos_profile = QoSProfile(reliability=ReliabilityPolicy.RELIABLE,depth=1)
        self.imu_subscription = self.create_subscription(
            Imu,
            '/imu_data',
            self.imu_callback,
            qos_profile
        )
        self.last_imu_callback = None
        self.calibrated = False

        self.roboclaw_subscription = self.create_subscription(
            RoboclawStateBroadcast,
            '/roboclaw_state_broadcast',
            self.roboclaw_callback,
            action_qos_profile
        )

        self.velocity_command_subscription = self.create_subscription(
            VelocityCommand,
            '/velocity_command',
            self.velocity_command_callback,
            qos_profile
        )
        self.last_velocity_command_callback = self.get_clock().now()
        self.recieved_command = False

        self.NN_evaluation_timer = self.create_timer(ACTION_RATE,self.NN_evaluation_callback)

        self.action_publisher = self.create_publisher(ActionCommand, 'action_command', action_qos_profile)

        #self.base_lin_vel = None
        self.base_lin_acc = None
        self.base_ang_vel = None
        self.orientation = None

        self.velocity_commands = [0.0,0.0,0.0]

        self.shoulder_pos = None
        self.elbow_pos = None
        self.joint_vel = None

        self.actions = [0.0,0.0,0.0,0.0]

        # Open log file
        self.log_file = open("policy_log.csv", mode="w", newline="")
        self.writer = csv.writer(self.log_file)
        self.writer.writerow(["time", "observations", "actions","usage"])

        #for name, param in compiled_nn_model.named_parameters():
        #    self.get_logger().info(f"{name}: {param.shape}")
    
    import psutil

    def find_ros2_processes(self):
        ros_procs = []
        for p in psutil.process_iter(['pid', 'name', 'cmdline']):
            try:
                if p.info['cmdline'] and any('--ros-args' in arg for arg in p.info['cmdline']):
                    ros_procs.append(p)
            except psutil.NoSuchProcess:
                pass
        return ros_procs

    def NN_evaluation_callback(self):
        #only implements NN if updated command has been recieved in last half second
        now = self.get_clock().now()
        command_timer = now - self.last_velocity_command_callback
        if self.recieved_command:
            if command_timer.nanoseconds / 1e9 < 0.25:
                if all(x is not None for x in (self.base_lin_acc, self.base_ang_vel, self.orientation,self.shoulder_pos,self.elbow_pos,self.joint_vel)):
                    obs_list = [self.base_lin_acc
                        + self.base_ang_vel
                        + self.orientation
                        + self.velocity_commands
                        + self.shoulder_pos
                        + self.elbow_pos
                        + self.joint_vel
                        + self.actions]
                    obs_tensor = torch.tensor(obs_list, dtype=torch.float32)
                    with torch.no_grad():
                        actions = compiled_nn_model(obs_tensor)
                        actions = torch.clamp(actions,min=-CLIP_ACTIONS,max=CLIP_ACTIONS)
                        self.actions = actions.tolist()[0]
                    #self.get_logger().info(f"{command_timer.nanoseconds / 1e9} | actions: {self.actions}")
                    #self.get_logger().warn(f"{0.1 * self.actions[1]}")

                    action_command = ActionCommand()
                    #self.actions[0] = 30.0 * 0.1 * float(np.sin(12* now.nanoseconds / 1e9)) + 3.0
                    #self.actions[0] = 30.0 * 0.1 * int(0.9*np.sin(1* (now.nanoseconds / 1e9)*(2*np.pi)) +0.5) + 3.0
                    #self.actions[0] = 30.0 * 0.1 * float(signal.square(2 * np.pi * 0.5 * (now.nanoseconds / 1e9), duty=0.5)) + 3.0
                    #self.actions[0] = 0.0
                    action_command.left_shoulder = 0.1 * self.actions[0]
                    #self.actions[1] = 0.0
                    action_command.right_shoulder = 0.1 * self.actions[1]
                    #self.actions[2] = 17.7
                    #self.actions[2] = 2.0 * float(signal.square(2 * np.pi * 0.5 * (now.nanoseconds / 1e9), duty=0.5)) + 18.0
                    #self.actions[3] = -17.7
                    action_command.left_elbow = 0.1 * self.actions[2]
                    action_command.right_elbow = 0.1 * self.actions[3]
                    #action_command.left_wheel = 0.5 * self.actions[4] #7.0 * int(2*np.sin(2* now.nanoseconds / 1e9))
                    #self.actions[4] = float(action_command.left_wheel)
                    #action_command.right_wheel = 0.5 * self.actions[5]

                    #now = self.get_clock().now()
                    self.action_publisher.publish(action_command)

                    usage = psutil.cpu_percent(interval=None,percpu=True)
                    #usage = {}
                    #for i, p in enumerate(self.find_ros2_processes()):
                    #    usage[i] = [p.name(), p.cpu_percent(interval=None)]
                        ##mem = p.memory_info().rss / (1024*1024)


                    self.writer.writerow([now.nanoseconds / 1e9, obs_list, self.actions,usage])
                else:
                    self.get_logger().warn(f"None item in observation matrix: {self.base_lin_acc, self.base_ang_vel, self.orientation,self.shoulder_pos,self.elbow_pos,self.joint_vel}")
            else:
                self.recieved_command = False
                action_command = ActionCommand()
                action_command.left_shoulder = 0.1
                action_command.right_shoulder = -0.1
                action_command.left_elbow = 1.2
                action_command.right_elbow = -1.2
                action_command.left_wheel = 0.0
                action_command.right_wheel = 0.0

                ############self.action_publisher.publish(action_command)
        
    def velocity_command_callback(self,msg):
        self.velocity_commands = [msg.velocity, 0.0, msg.ang_velocity]
        self.last_velocity_command_callback = self.get_clock().now()
        self.recieved_command = True

    def roboclaw_callback(self,msg):
        #left_shoulder = 2*np.pi * float(msg.left_shoulder)/SHOULDER_ENCODER_PPR
        #right_shoulder = 2*np.pi * float(msg.right_shoulder)/SHOULDER_ENCODER_PPR
        #left_elbow = 2*np.pi * float(msg.left_elbow)/ELBOW_ENCODER_PPR
        #right_elbow = 2*np.pi * float(msg.right_elbow)/ELBOW_ENCODER_PPR

        #left_shoulder_speed = 2*np.pi * float(msg.left_shoulder_speed)/SHOULDER_ENCODER_PPR
        #right_shoulder_speed = 2*np.pi * float(msg.right_shoulder_speed)/SHOULDER_ENCODER_PPR
        #left_elbow_speed = 2*np.pi * float(msg.left_elbow_speed)/ELBOW_ENCODER_PPR
        #right_elbow_speed = 2*np.pi * float(msg.right_elbow_speed)/ELBOW_ENCODER_PPR

        self.shoulder_pos = [msg.left_shoulder,msg.right_shoulder]
        self.elbow_pos = [msg.left_elbow,msg.right_elbow]
        self.joint_vel = [msg.left_shoulder_speed,msg.right_shoulder_speed,msg.left_elbow_speed,msg.right_elbow_speed]#############,msg.left_wheel_speed,msg.right_wheel_speed]
        
    def imu_callback(self, msg):
        #current_time = msg.header.stamp.sec + msg.header.stamp.nanosec * 1e-9
        #if self.last_imu_callback is not None:
        #    dt = current_time - self.last_imu_callback
            #self.get_logger().info(f'dt = {dt:.6f} seconds')
        #    self.base_lin_vel = self.compute_velocity(msg.linear_acceleration, dt)
        #else:
        #    self.get_logger().info('First IMU message received.')

        #self.get_logger().info(f'{msg.orientation}')

        self.base_lin_acc = [msg.linear_acceleration.x,msg.linear_acceleration.y,msg.linear_acceleration.z]

        self.base_ang_vel = [msg.angular_velocity.x,msg.angular_velocity.y,msg.angular_velocity.z]

        self.orientation = [msg.orientation.w,msg.orientation.x,msg.orientation.y,msg.orientation.z]

        #self.last_imu_callback = current_time
    
    def compute_velocity(self,accel: Vector3, dt: float): # rectangular approximation of integrated velocity
        velocity = Vector3()
        velocity.x = accel.x * dt
        velocity.y = accel.y * dt
        velocity.z = accel.z * dt
        return [velocity.x,velocity.y,velocity.z]

    def destroy_node(self):
        # Close log file cleanly
        self.log_file.close()
        super().destroy_node()



def main(args=None):
    rclpy.init(args=args)
    node = NeuralNetworkInterfaceNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()