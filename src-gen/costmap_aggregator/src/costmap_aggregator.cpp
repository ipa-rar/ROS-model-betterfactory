#include <ros/ros.h>
#include <nav_msgs/OccupancyGrid.h>
#include <nav_msgs/OccupancyGrid.h>

void  costmap_cb (const nav_msgs::OccupancyGrid msg){}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "costmap_aggregator");
	ros::NodeHandle n;
	int aggregation_time_;
	n.param<int>("aggregation_time", aggregation_time_, 3600);
	ros::Publisher heatmap_pub = n.advertise<nav_msgs::OccupancyGrid>("heatmap", 10);
	ros::Subscriber costmap = n.subscribe("costmap", 10, costmap_cb);

	ros::spin();

  	return 0;
}
