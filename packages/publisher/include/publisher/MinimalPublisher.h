#pragma once

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include "maths/RandomNumber.h"

/* 
* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. 
*/

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher();

  private:
    void timer_callback();

    rclcpp::TimerBase::SharedPtr _timer;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr _publisher;
    maths::RandomNumber _randomNumber;
};
