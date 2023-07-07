// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_web_republisher:msg/TFArray.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__TRAITS_HPP_
#define TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__TRAITS_HPP_

#include "tf2_web_republisher/msg/detail/tf_array__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_web_republisher::msg::TFArray>()
{
  return "tf2_web_republisher::msg::TFArray";
}

template<>
inline const char * name<tf2_web_republisher::msg::TFArray>()
{
  return "tf2_web_republisher/msg/TFArray";
}

template<>
struct has_fixed_size<tf2_web_republisher::msg::TFArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_web_republisher::msg::TFArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_web_republisher::msg::TFArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TF2_WEB_REPUBLISHER__MSG__DETAIL__TF_ARRAY__TRAITS_HPP_
