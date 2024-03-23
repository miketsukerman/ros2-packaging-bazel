#include "subscriber/MinimalSubscriber.h"

MinimalSubscriber::MinimalSubscriber() : Node("minimal_subscriber") {
  _subscription = this->create_subscription<std_msgs::msg::String>(
      "topic", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
}

void MinimalSubscriber::topic_callback(
    const std_msgs::msg::String::SharedPtr msg) const {
  RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->data.c_str());
}
