// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yolov8_msgs:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_

#include "yolov8_msgs/msg/detail/key_point3_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace yolov8_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyPoint3D_score
{
public:
  explicit Init_KeyPoint3D_score(::yolov8_msgs::msg::KeyPoint3D & msg)
  : msg_(msg)
  {}
  ::yolov8_msgs::msg::KeyPoint3D score(::yolov8_msgs::msg::KeyPoint3D::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yolov8_msgs::msg::KeyPoint3D msg_;
};

class Init_KeyPoint3D_point
{
public:
  explicit Init_KeyPoint3D_point(::yolov8_msgs::msg::KeyPoint3D & msg)
  : msg_(msg)
  {}
  Init_KeyPoint3D_score point(::yolov8_msgs::msg::KeyPoint3D::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_KeyPoint3D_score(msg_);
  }

private:
  ::yolov8_msgs::msg::KeyPoint3D msg_;
};

class Init_KeyPoint3D_id
{
public:
  Init_KeyPoint3D_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyPoint3D_point id(::yolov8_msgs::msg::KeyPoint3D::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_KeyPoint3D_point(msg_);
  }

private:
  ::yolov8_msgs::msg::KeyPoint3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yolov8_msgs::msg::KeyPoint3D>()
{
  return yolov8_msgs::msg::builder::Init_KeyPoint3D_id();
}

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D__BUILDER_HPP_
