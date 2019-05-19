//
// Created by smadas on 19.5.2019.
//

#include "ros/ros.h"

int main(int argc, char **argv)
{

    ros::init(argc, argv, "test_segmentation");

    ros::NodeHandle n;

    ROS_INFO_STREAM("Test segmentation initialized!");

    ros::spin();

    return 0;
}