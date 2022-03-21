#include <ros/ros.h>
#include <nav_msgs/OccupancyGrid.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <sensor_msgs/LaserScan.h>
#include <nav_msgs/OccupancyGrid.h>

void  /scan1_cb (const sensor_msgs::LaserScan msg){}
void  /scan2_cb (const sensor_msgs::LaserScan msg){}
void  /scan3_cb (const sensor_msgs::LaserScan msg){}
void  /scan4_cb (const sensor_msgs::LaserScan msg){}
void  /scan5_cb (const sensor_msgs::LaserScan msg){}
void  /scan6_cb (const sensor_msgs::LaserScan msg){}
void  /scan7_cb (const sensor_msgs::LaserScan msg){}
void  /scan8_cb (const sensor_msgs::LaserScan msg){}
void  /scan9_cb (const sensor_msgs::LaserScan msg){}
void  map_cb (const nav_msgs::OccupancyGrid msg){}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "costmap_generator");
	ros::NodeHandle n;
	ros::Publisher costmap_pub = n.advertise<nav_msgs::OccupancyGrid>("costmap", 10);
	ros::Subscriber /scan1 = n.subscribe("/scan1", 10, /scan1_cb);
	ros::Subscriber /scan2 = n.subscribe("/scan2", 10, /scan2_cb);
	ros::Subscriber /scan3 = n.subscribe("/scan3", 10, /scan3_cb);
	ros::Subscriber /scan4 = n.subscribe("/scan4", 10, /scan4_cb);
	ros::Subscriber /scan5 = n.subscribe("/scan5", 10, /scan5_cb);
	ros::Subscriber /scan6 = n.subscribe("/scan6", 10, /scan6_cb);
	ros::Subscriber /scan7 = n.subscribe("/scan7", 10, /scan7_cb);
	ros::Subscriber /scan8 = n.subscribe("/scan8", 10, /scan8_cb);
	ros::Subscriber /scan9 = n.subscribe("/scan9", 10, /scan9_cb);
	ros::Subscriber map = n.subscribe("map", 10, map_cb);

	ros::spin();

  	return 0;
}
