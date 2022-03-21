#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <std_srvs/Empty.h>
#include <std_srvs/Empty.h>

bool  stop_motor_cb (std_srvs::Empty::Request &req, std_srvs::Empty::Response &res){
  return true;
}
bool  start_motor_cb (std_srvs::Empty::Request &req, std_srvs::Empty::Response &res){
  return true;
}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "rplidar_ros");
	ros::NodeHandle n;
	std::string channel_type_;
	n.param<std::string>("channel_type", channel_type_, "serial");
	std::string tcp_ip_;
	n.param<std::string>("tcp_ip", tcp_ip_, "192.168.0.7");
	int tcp_port_;
	n.param<int>("tcp_port", tcp_port_, 20108);
	std::string udp_ip_;
	n.param<std::string>("udp_ip", udp_ip_, "192.168.11.2");
	int udp_port_;
	n.param<int>("udp_port", udp_port_, 8089);
	std::string serial_port_;
	n.param<std::string>("serial_port", serial_port_, "/dev/ttyUSB0");
	int serial_baudrate_;
	n.param<int>("serial_baudrate", serial_baudrate_, 115200);
	std::string frame_id_;
	n.param<std::string>("frame_id", frame_id_, "laser_frame");
	bool inverted_;
	n.param<bool>("inverted", inverted_, false);
	bool angle_compensate_;
	n.param<bool>("angle_compensate", angle_compensate_, false);
	double scan_mode_;
	n.param("scan_mode", scan_mode_);
	ros::Publisher scan_pub = n.advertise<sensor_msgs::LaserScan>("scan", 10);
	ros::ServiceServer stop_motor = n.advertiseService("stop_motor", stop_motor_cb);
	ros::ServiceServer start_motor = n.advertiseService("start_motor", start_motor_cb);

	ros::spin();

  	return 0;
}
