// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_

#include "yolov8_msgs/msg/detail/bounding_box2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox2D_size
{
public:
  explicit Init_BoundingBox2D_size(::yolov8_msgs::msg::BoundingBox2D & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::msg::BoundingBox2D size(::yolov8_msgs::msg::BoundingBox2D::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::BoundingBox2D msg_;
};

class Init_BoundingBox2D_center
{
public:
  Init_BoundingBox2D_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox2D_size center(::yolov8_msgs::msg::BoundingBox2D::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_BoundingBox2D_size(msg_);
  }

private:
  ::yolov8_msgs::msg::BoundingBox2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::BoundingBox2D>()
{
  return yolov8_msgs::msg::builder::Init_BoundingBox2D_center();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__BUILDER_HPP_
