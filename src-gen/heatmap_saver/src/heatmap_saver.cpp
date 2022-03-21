#include <ros/ros.h>
#include <nav_msgs/OccupancyGrid.h>

void  heatmap_cb (const nav_msgs::OccupancyGrid msg){}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "heatmap_saver");
	ros::NodeHandle n;
	ros::Subscriber heatmap = n.subscribe("heatmap", 10, heatmap_cb);

	ros::spin();

  	return 0;
}
