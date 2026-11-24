import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, TimerAction
from launch.launch_description_sources import PythonLaunchDescriptionSource

from launch_ros.actions import Node


def generate_launch_description():

    # Include the robot_state_publisher launch file, provided by our own package. Force sim time to be enabled
    # !!! MAKE SURE YOU SET THE PACKAGE NAME CORRECTLY !!!

    package_name = 'articubot_one'  # <--- CHANGE ME
    pkg_share = get_package_share_directory(package_name)
    world_file = os.path.join(pkg_share, 'worlds', 'obstacles.sdf')

    rsp = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            pkg_share, 'launch', 'rsp.launch.py'
        )]), launch_arguments={'use_sim_time': 'true'}.items()
    )

    # Launch Gazebo Sim (Ignition / Gazebo Garden+). The classic gazebo_ros launch file is not used here.
    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(
            get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')]),
        launch_arguments={'gz_args': f'-r {world_file}'}.items(),
    )

    # Spawn the robot into Gazebo Sim using the ros_gz_sim create executable.
    spawn_entity = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-topic', 'robot_description',
                   '-name', 'my_bot'],
        output='screen',
    )

    # Direction: [ = GZ->ROS, ] = ROS->GZ
    # Start after spawn so /scan publisher already exists (avoids missed subscriptions).
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='gz_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
            '/cmd_vel@geometry_msgs/msg/TwistStamped]gz.msgs.Twist',
            '/model/my_bot/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry',
            '/model/my_bot/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V',
            '/joint_states@sensor_msgs/msg/JointState[gz.msgs.Model',
        ],
        remappings=[
            ('/model/my_bot/odometry', '/odom'),
            ('/model/my_bot/tf', '/tf'),
        ],
        parameters=[{'use_sim_time': True}],
        output='screen',
    )

    # Dedicated scan bridge — easier to see in `ros2 node list` / logs if it fails.
    scan_bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        name='gz_scan_bridge',
        arguments=[
            '/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan',
        ],
        parameters=[{'use_sim_time': True}],
        output='screen',
    )

    delayed_bridges = TimerAction(
        period=5.0,
        actions=[bridge, scan_bridge],
    )

    return LaunchDescription([
        rsp,
        gazebo,
        spawn_entity,
        delayed_bridges,
    ])
