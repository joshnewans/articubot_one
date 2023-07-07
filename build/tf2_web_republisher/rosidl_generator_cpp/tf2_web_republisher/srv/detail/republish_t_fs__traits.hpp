// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__TRAITS_HPP_
#define TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__TRAITS_HPP_

#include "tf2_web_republisher/srv/detail/republish_t_fs__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_web_republisher::srv::RepublishTFs_Request>()
{
  return "tf2_web_republisher::srv::RepublishTFs_Request";
}

template<>
inline const char * name<tf2_web_republisher::srv::RepublishTFs_Request>()
{
  return "tf2_web_republisher/srv/RepublishTFs_Request";
}

template<>
struct has_fixed_size<tf2_web_republisher::srv::RepublishTFs_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_web_republisher::srv::RepublishTFs_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_web_republisher::srv::RepublishTFs_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_web_republisher::srv::RepublishTFs_Response>()
{
  return "tf2_web_republisher::srv::RepublishTFs_Response";
}

template<>
inline const char * name<tf2_web_republisher::srv::RepublishTFs_Response>()
{
  return "tf2_web_republisher/srv/RepublishTFs_Response";
}

template<>
struct has_fixed_size<tf2_web_republisher::srv::RepublishTFs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tf2_web_republisher::srv::RepublishTFs_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tf2_web_republisher::srv::RepublishTFs_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tf2_web_republisher::srv::RepublishTFs>()
{
  return "tf2_web_republisher::srv::RepublishTFs";
}

template<>
inline const char * name<tf2_web_republisher::srv::RepublishTFs>()
{
  return "tf2_web_republisher/srv/RepublishTFs";
}

template<>
struct has_fixed_size<tf2_web_republisher::srv::RepublishTFs>
  : std::integral_constant<
    bool,
    has_fixed_size<tf2_web_republisher::srv::RepublishTFs_Request>::value &&
    has_fixed_size<tf2_web_republisher::srv::RepublishTFs_Response>::value
  >
{
};

template<>
struct has_bounded_size<tf2_web_republisher::srv::RepublishTFs>
  : std::integral_constant<
    bool,
    has_bounded_size<tf2_web_republisher::srv::RepublishTFs_Request>::value &&
    has_bounded_size<tf2_web_republisher::srv::RepublishTFs_Response>::value
  >
{
};

template<>
struct is_service<tf2_web_republisher::srv::RepublishTFs>
  : std::true_type
{
};

template<>
struct is_service_request<tf2_web_republisher::srv::RepublishTFs_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tf2_web_republisher::srv::RepublishTFs_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__TRAITS_HPP_
