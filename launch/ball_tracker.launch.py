import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch.substitutions import PythonExpression
from launch.actions import DeclareLaunchArgument


def generate_launch_description():

    my_package_name='articubot_one'
    sim_mode = LaunchConfiguration('sim_mode')
    sim_mode_dec = DeclareLaunchArgument('sim_mode', default_value='false')

    tracker_params_sim = os.path.join(get_package_share_directory(my_package_name),'config','ball_tracker_params_sim.yaml')
    tracker_params_robot = os.path.join(get_package_share_directory(my_package_name),'config','ball_tracker_params_robot.yaml')

    params_path = PythonExpression(['"',tracker_params_sim, '" if "true" == "', sim_mode, '" else "', tracker_params_robot, '"'])

    tracker_launch = IncludeLaunchDescription(
                PythonLaunchDescriptionSource([os.path.join(
                    get_package_share_directory('ball_tracker'), 'launch', 'ball_tracker.launch.py')]),
                    launch_arguments={'params_file': params_path,
                                    'image_topic': '/camera/image_raw',
                                    'cmd_vel_topic': '/cmd_vel_tracker',
                                    'enable_3d_tracker': 'true'}.items())

    return LaunchDescription([
        sim_mode_dec,
        tracker_launch,
    ])
