// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_

#include "yolov8_msgs/msg/detail/vector2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_Vector2_y
{
public:
  explicit Init_Vector2_y(::yolov8_msgs::msg::Vector2 & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::msg::Vector2 y(::yolov8_msgs::msg::Vector2::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::Vector2 msg_;
};

class Init_Vector2_x
{
public:
  Init_Vector2_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vector2_y x(::yolov8_msgs::msg::Vector2::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Vector2_y(msg_);
  }

private:
  ::yolov8_msgs::msg::Vector2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::Vector2>()
{
  return yolov8_msgs::msg::builder::Init_Vector2_x();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__VECTOR2__BUILDER_HPP_
