cmake_minimum_required(VERSION 3.0.2)
project(map_server)

find_package(catkin REQUIRED COMPONENTS roscpp nav_msgs )

catkin_package(
  CATKIN_DEPENDS roscpp nav_msgs 
)

### Build ###

include_directories(${catkin_INCLUDE_DIRS})

add_executable(map_server src/map_server.cpp)
add_dependencies(map_server ${catkin_EXPORTED_TARGETS})
target_link_libraries(map_server ${catkin_LIBRARIES})

### Install ###
install(TARGETS map_server
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
