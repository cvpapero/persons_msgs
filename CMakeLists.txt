cmake_minimum_required(VERSION 2.8.3)
project(persons_msgs)


find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  message_generation
  sensor_msgs
  std_msgs
)


add_message_files(
   FILES
   Person.msg
   Body.msg
   FaceInfo.msg
   FaceProp.msg
   Rotation.msg
)

generate_messages(
   DEPENDENCIES
   geometry_msgs
   sensor_msgs
   std_msgs
   persons_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES persons_msgs
#  CATKIN_DEPENDS geometry_msgs message_generation sensor_msgs std_msgs
#  DEPENDS system_lib
)


include_directories(
  ${catkin_INCLUDE_DIRS}
)

