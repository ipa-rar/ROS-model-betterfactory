cmake_minimum_required(VERSION 3.0.2)
project(costmap_aggregator)

find_package(catkin REQUIRED COMPONENTS roscpp nav_msgs )

catkin_package(
  CATKIN_DEPENDS roscpp nav_msgs 
)

### Build ###

include_directories(${catkin_INCLUDE_DIRS})

add_executable(costmap_aggregator src/costmap_aggregator.cpp)
add_dependencies(costmap_aggregator ${catkin_EXPORTED_TARGETS})
target_link_libraries(costmap_aggregator ${catkin_LIBRARIES})

### Install ###
install(TARGETS costmap_aggregator
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
