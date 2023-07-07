// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tf2_web_republisher/srv/detail/republish_t_fs__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace tf2_web_republisher
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::srv::RepublishTFs_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::srv::RepublishTFs_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::srv::RepublishTFs_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_RepublishTFs_Request(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tf2_web_republisher

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace tf2_web_republisher
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::srv::RepublishTFs_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::srv::RepublishTFs_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::srv::RepublishTFs_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_RepublishTFs_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tf2_web_republisher

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, srv, RepublishTFs)();

#ifdef __cplusplus
}
#endif

#endif  // TF2_WEB_REPUBLISHER__SRV__DETAIL__REPUBLISH_T_FS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
