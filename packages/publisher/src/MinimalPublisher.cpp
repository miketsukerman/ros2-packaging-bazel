#include "publisher/MinimalPublisher.h"


using namespace std::chrono_literals;

MinimalPublisher::MinimalPublisher() : Node("minimal_publisher") {
  _publisher = this->create_publisher<std_msgs::msg::String>("topic", 10);
  _timer = this->create_wall_timer(
      500ms, std::bind(&MinimalPublisher::timer_callback, this));
}

void MinimalPublisher::timer_callback() {
  auto message = std_msgs::msg::String();
  auto rnd = _randomNumber.generate();
  message.data = "Hello, world! " + std::to_string(rnd);
  RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
  _publisher->publish(message);
}
