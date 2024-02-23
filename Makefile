all: build

build:
	. /opt/ros/iron/setup.sh && colcon build

.PHONY: build
