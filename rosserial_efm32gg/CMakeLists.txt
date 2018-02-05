lcmake_minimum_required(VERSION 2.8.3)
project(efm32gg)

find_package(catkin REQUIRED)

include_directories(
)

install(DIRECTORY src/ros_lib
  DESTINATION ${CATKIN_PACKAEG_SHARE_DESTINATION}/src
  )
