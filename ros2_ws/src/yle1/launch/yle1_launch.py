from launch import LaunchDescription
import launch_ros.actions
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        launch_ros.actions.Node(
            package='yle1', executable='accelerometer', output='screen',emulate_tty=True),
    ])
