# WILE-E

make WILE-E walk

## Outside of docker
export DISPLAY=:0
xhost local:docker
cd wilee_docker
docker compose up -d
docker exec -it ros2_jammy bash

## Inside docker

source install/setup.bash
source /opt/ros/humble/setup.bash
colcon build --packages-select wile_e
ros2 launch wile_e wile_e_launch.py
