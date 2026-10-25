# This is an auto generated Dockerfile for ros:ros-core
# generated from docker_images_ros2/create_ros_core_image.Dockerfile.em
FROM ubuntu:jammy

# setup timezone
RUN echo 'Etc/UTC' > /etc/timezone && \
    ln -s /usr/share/zoneinfo/Etc/UTC /etc/localtime && \
    apt-get update && \
    apt-get install -q -y --no-install-recommends tzdata && \
    rm -rf /var/lib/apt/lists/*

# install packages
RUN apt-get update && apt-get install -q -y --no-install-recommends \
    ca-certificates \
    curl \
    dirmngr \
    gnupg2 \
    python3-rpi.gpio \
    python3-smbus \
    i2c-tools \
    libi2c-dev \
    python3-pip \
    build-essential \
    libsdl2-dev \
    libsdl2-image-dev \
    libsdl2-mixer-dev \
    libsdl2-ttf-dev \
    libportmidi-dev \
    libswscale-dev \
    libavformat-dev \
    libavcodec-dev \
    libfreetype6-dev \
    libportaudio2 \
    alsa-utils \
    python3-pygame \
    x11-xserver-utils \
    bluez \
    dbus \
    python3-dbus \
    python3-tk \
    && rm -rf /var/lib/apt/lists/*


# Setup ROS Apt sources
RUN curl -L -s -o /tmp/ros2-apt-source.deb https://github.com/ros-infrastructure/ros-apt-source/releases/download/1.1.0/ros2-apt-source_1.1.0.jammy_all.deb \
    && echo "1600cb8cc28258a39bffc1736a75bcbf52d1f2db371a4d020c1b187d2a5a083b /tmp/ros2-apt-source.deb" | sha256sum --strict --check \
    && apt-get update \
    && apt-get install /tmp/ros2-apt-source.deb \
    && rm -f /tmp/ros2-apt-source.deb \
    && rm -rf /var/lib/apt/lists/*

# setup environment
ENV LANG=C.UTF-8
ENV LC_ALL=C.UTF-8

ENV ROS_DISTRO=humble

# install ros2 packages
RUN apt-get update && apt-get install -y --no-install-recommends \
    python3-colcon-common-extensions \
    ros-humble-ros-core=0.10.0-1* \
    ros-humble-tf2 \
    ros-humble-tf2-ros \
    ros-humble-imu-complementary-filter \
    && rm -rf /var/lib/apt/lists/*

# Install Pygame via pip
RUN pip3 install opencv-python
RUN pip3 install videostream

RUN pip3 install pygame
RUN pip3 install smbus

RUN pip3 install librosa
RUN pip3 install sounddevice

RUN pip3 install pyserial

RUN pip3 install bleak

RUN pip3 install torch

RUN pip3 install adafruit-circuitpython-bno08x
RUN pip3 install lgpio

#ARG MY_UID=1000
#ARG MY_GID=1000

#RUN groupadd -g ${MY_GID} bailey \
#    && useradd -m -u ${MY_UID} -g ${MY_GID} bailey
RUN echo 'pcm.!default { type hw; card 1; }' > /etc/asound.conf && \
    echo 'ctl.!default { type hw; card 1; }' >> /etc/asound.conf

# setup entrypoint
#COPY ./ros_entrypoint.sh /

#ENTRYPOINT ["/ros_entrypoint.sh"]

CMD ["bash"]
