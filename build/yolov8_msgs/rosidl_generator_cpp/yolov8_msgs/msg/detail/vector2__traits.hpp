// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolov8_msgs:msg/Vector2.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__VECTOR2__TRAITS_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__VECTOR2__TRAITS_HPP_

#include "yolov8_msgs/msg/detail/vector2__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yolov8_msgs::msg::Vector2>()
{
  return "yolov8_msgs::msg::Vector2";
}

template<>
inline const char * name<yolov8_msgs::msg::Vector2>()
{
  return "yolov8_msgs/msg/Vector2";
}

template<>
struct has_fixed_size<yolov8_msgs::msg::Vector2>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<yolov8_msgs::msg::Vector2>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<yolov8_msgs::msg::Vector2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLOV8_MSGS__MSG__DETAIL__VECTOR2__TRAITS_HPP_
