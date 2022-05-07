#include "rsp_pick_and_place/rsp_pick_and_place.hpp"

int main(int argc, char **argv)
{
  // Init ROS node
  ros::init(argc, argv, "open_manipulator_pick_and_place");
  ros::NodeHandle node_handle("");

  RspPickandPlace rsp_pick_and_place;

  ros::Timer publish_timer = node_handle.createTimer(ros::Duration(0.100)/*100ms*/, &RspPickandPlace::publishCallback, &rsp_pick_and_place);

  while (ros::ok())
  {
    ros::spinOnce();
  }
  return 0;
}