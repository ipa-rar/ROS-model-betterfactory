#include <ros/ros.h>
#include <nav_msgs/MapMetaData.h>
#include <nav_msgs/OccupancyGrid.h>
#include <nav_msgs/GetMap.h>

bool  static_map_cb (nav_msgs::GetMap::Request &req, nav_msgs::GetMap::Response &res){
  return true;
}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "map_server");
	ros::NodeHandle n;
	std::string frame_id_;
	n.param<std::string>("frame_id", frame_id_, "map");
	ros::Publisher map_metadata_pub = n.advertise<nav_msgs::MapMetaData>("map_metadata", 10);
	ros::Publisher map_pub = n.advertise<nav_msgs::OccupancyGrid>("map", 10);
	ros::ServiceServer static_map = n.advertiseService("static_map", static_map_cb);

	ros::spin();

  	return 0;
}
