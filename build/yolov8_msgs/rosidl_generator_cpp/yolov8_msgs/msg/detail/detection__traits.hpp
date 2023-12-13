// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from yolov8_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include "yolov8_msgs/msg/detail/detection__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'bbox'
#include "yolov8_msgs/msg/detail/bounding_box2_d__traits.hpp"
// Member 'bbox3d'
#include "yolov8_msgs/msg/detail/bounding_box3_d__traits.hpp"
// Member 'mask'
#include "yolov8_msgs/msg/detail/mask__traits.hpp"
// Member 'keypoints'
#include "yolov8_msgs/msg/detail/key_point2_d_array__traits.hpp"
// Member 'keypoints3d'
#include "yolov8_msgs/msg/detail/key_point3_d_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<yolov8_msgs::msg::Detection>()
{
  return "yolov8_msgs::msg::Detection";
}

template<>
inline const char * name<yolov8_msgs::msg::Detection>()
{
  return "yolov8_msgs/msg/Detection";
}

template<>
struct has_fixed_size<yolov8_msgs::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<yolov8_msgs::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<yolov8_msgs::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // YOLOV8_MSGS__MSG__DETAIL__DETECTION__TRAITS_HPP_
