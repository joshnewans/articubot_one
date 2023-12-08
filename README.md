This is the main project i'm working on:

Dependencies(a lot):
- Ros2 control
- Ros2 controllers
- gazebo-ros2-control

Doc: 

- https://control.ros.org/master/index.html

- https://github.com/ros-controls/roadmap/blob/master/design_drafts/hardware_access.md

Install Ros2 control: 
```bash
sudo apt install ros-foxy-ros2-control ros-foxy-ros2-controllers ros-foxy-gazebo-ros2-control
```

- Ros2 Robot pose publisher

Link: https://github.com/MilanMichael/robot_pose_publisher_ros2

- Ros2 web application:

  - Python, JavaScript, HTML, CSS, sqlite, Flask(v2.2.2)
  - Rosbridge Server:

    Doc: https://index.ros.org/p/rosbridge_server/

    Install Rosbridge Server: <code>sudo apt install ros-foxy-rosbridge-server</code>

There's also a lot of libraries and packages i couldn't remember while doing this project. If you encounter any errors, use apt, pip, npm to install it on your own (* ¯ ▽ ¯) b, or else contact me through the information i provide on my git profile.

Run:

To run the simulation world and robot:
```bash
ros2 launch gcamp_gazebo launch_sim.launch.py
```

To run the web-app:
- On the first terminal:
```bash
cd ~/gcamp_ros2_ws/ros2-web-bridge/
python3 app.py
```
- On the second terminal:
```bash
ros2 launch rosbridge_server rosbridge_websocket_launch.xml
```
- On the third terminal:
```bash
ros2 launch robot_pose_publisher_ros2 robot_pose_publisher_launch.py
```
Localhost:8080
