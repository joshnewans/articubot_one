// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolov8_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_

#include "yolov8_msgs/msg/detail/pose2_d__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "yolov8_msgs/msg/detail/point2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yolov8_msgs::msg::Pose2D>()
{
  return "yolov8_msgs::msg::Pose2D";
}

template<>
inline const char * name<yolov8_msgs::msg::Pose2D>()
{
  return "yolov8_msgs/msg/Pose2D";
}

template<>
struct has_fixed_size<yolov8_msgs::msg::Pose2D>
  : std::integral_constant<bool, has_fixed_size<yolov8_msgs::msg::Point2D>::value> {};

template<>
struct has_bounded_size<yolov8_msgs::msg::Pose2D>
  : std::integral_constant<bool, has_bounded_size<yolov8_msgs::msg::Point2D>::value> {};

template<>
struct is_message<yolov8_msgs::msg::Pose2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLOV8_MSGS__MSG__DETAIL__POSE2_D__TRAITS_HPP_
