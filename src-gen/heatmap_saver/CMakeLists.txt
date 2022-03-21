cmake_minimum_required(VERSION 3.0.2)
project(heatmap_saver)

find_package(catkin REQUIRED COMPONENTS roscpp nav_msgs )

catkin_package(
  CATKIN_DEPENDS roscpp nav_msgs 
)

### Build ###

include_directories(${catkin_INCLUDE_DIRS})

add_executable(heatmap_saver src/heatmap_saver.cpp)
add_dependencies(heatmap_saver ${catkin_EXPORTED_TARGETS})
target_link_libraries(heatmap_saver ${catkin_LIBRARIES})

### Install ###
install(TARGETS heatmap_saver
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
