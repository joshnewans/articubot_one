// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_

#include "yolov8_msgs/msg/detail/pose2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose2D_theta
{
public:
  explicit Init_Pose2D_theta(::yolov8_msgs::msg::Pose2D & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::msg::Pose2D theta(::yolov8_msgs::msg::Pose2D::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::Pose2D msg_;
};

class Init_Pose2D_position
{
public:
  Init_Pose2D_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose2D_theta position(::yolov8_msgs::msg::Pose2D::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Pose2D_theta(msg_);
  }

private:
  ::yolov8_msgs::msg::Pose2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::Pose2D>()
{
  return yolov8_msgs::msg::builder::Init_Pose2D_position();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__POSE2_D__BUILDER_HPP_
