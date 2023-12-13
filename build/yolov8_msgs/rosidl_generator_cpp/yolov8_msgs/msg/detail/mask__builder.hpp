// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_

#include "yolov8_msgs/msg/detail/mask__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_Mask_data
{
public:
  explicit Init_Mask_data(::yolov8_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::msg::Mask data(::yolov8_msgs::msg::Mask::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::Mask msg_;
};

class Init_Mask_width
{
public:
  explicit Init_Mask_width(::yolov8_msgs::msg::Mask & msg)
  : msg_(msg)
  {}
  Init_Mask_data width(::yolov8_msgs::msg::Mask::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Mask_data(msg_);
  }

private:
  ::yolov8_msgs::msg::Mask msg_;
};

class Init_Mask_height
{
public:
  Init_Mask_height()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mask_width height(::yolov8_msgs::msg::Mask::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Mask_width(msg_);
  }

private:
  ::yolov8_msgs::msg::Mask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::Mask>()
{
  return yolov8_msgs::msg::builder::Init_Mask_height();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__MASK__BUILDER_HPP_
