cmake_minimum_required(VERSION 3.0.2)
project(rplidar_ros)

find_package(catkin REQUIRED COMPONENTS roscpp std_srvs sensor_msgs )

catkin_package(
  CATKIN_DEPENDS roscpp std_srvs sensor_msgs 
)

### Build ###

include_directories(${catkin_INCLUDE_DIRS})

add_executable(rplidar_ros src/rplidar_ros.cpp)
add_dependencies(rplidar_ros ${catkin_EXPORTED_TARGETS})
target_link_libraries(rplidar_ros ${catkin_LIBRARIES})

### Install ###
install(TARGETS rplidar_ros
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
