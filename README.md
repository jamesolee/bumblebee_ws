# bumblebee_ws
bumblebee_ws
========
ROS2 workspace for the FASTR Bumblebee drone

Additional requirements (ensure the following are installed via apt-get):
- vrpn_mocap

Run this to start streaming pose data to topic:
```
ros2 launch vrpn_mocap client.launch.yaml server:=192.168.1.100
```
