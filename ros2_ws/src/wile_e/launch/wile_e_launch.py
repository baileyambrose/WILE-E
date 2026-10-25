from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
import launch_ros.actions
from launch.actions import ExecuteProcess
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    accelerometer_pkg_share = get_package_share_directory('mpu6050driver')
    accelerometer_included_launch = os.path.join(accelerometer_pkg_share, 'launch', 'mpu6050driver_launch.py')
    return LaunchDescription([
        launch_ros.actions.Node(
            package='wile_e', executable='accelerometer_interface', output='screen',emulate_tty=True),
        launch_ros.actions.Node(
            package='wile_e', executable='remote_receiver', output='screen',emulate_tty=True),
        launch_ros.actions.Node(
            package='wile_e', executable='teensy_interface', output='screen',emulate_tty=True),
        launch_ros.actions.Node(
            package='wile_e', executable='roboclaw_interface', output='screen',emulate_tty=True),
        #IncludeLaunchDescription(
        #    PythonLaunchDescriptionSource(accelerometer_included_launch),
        #),
        launch_ros.actions.Node(
            package='wile_e', executable='visualizer', output='screen',emulate_tty=True),
        #launch_ros.actions.Node(
        #    package='wile_e', executable='sound_generator', output='screen',emulate_tty=True),
        launch_ros.actions.Node(
            package='wile_e', executable='NN_interface', output='screen',emulate_tty=True),
        #launch_ros.actions.Node(
        #    package='wile_e', executable='logger', output='screen',emulate_tty=True),
        #launch_ros.actions.Node(
        #    package='wile_e', executable='camera', output='screen',emulate_tty=True),
        #ExecuteProcess(
        #    cmd=['python3','/home/bailey/ros2_ws/src/wile_e/wile_e/trigger_website.py'],
        #    name='flask_server',
        #    output='screen'
        #),
    ])
