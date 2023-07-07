// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_web_republisher/srv/detail/republish_t_fs__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tf2_web_republisher
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RepublishTFs_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::srv::RepublishTFs_Request(_init);
}

void RepublishTFs_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::srv::RepublishTFs_Request *>(message_memory);
  typed_message->~RepublishTFs_Request();
}

size_t size_function__RepublishTFs_Request__source_frames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RepublishTFs_Request__source_frames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__RepublishTFs_Request__source_frames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__RepublishTFs_Request__source_frames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RepublishTFs_Request_message_member_array[6] = {
  {
    "source_frames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::srv::RepublishTFs_Request, source_frames),  // bytes offset in struct
    nullptr,  // default value
    size_function__RepublishTFs_Request__source_frames,  // size() function pointer
    get_const_function__RepublishTFs_Request__source_frames,  // get_const(index) function pointer
    get_function__RepublishTFs_Request__source_frames,  // get(index) function pointer
    resize_function__RepublishTFs_Request__source_frames  // resize(index) function pointer
  },
  {
    "target_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::srv::RepublishTFs_Request, target_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular_thres",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::srv::RepublishTFs_Request, angular_thres),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trans_thres",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::srv::RepublishTFs_Request, trans_thres),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::srv::RepublishTFs_Request, rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timeout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::srv::RepublishTFs_Request, timeout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RepublishTFs_Request_message_members = {
  "tf2_web_republisher::srv",  // message namespace
  "RepublishTFs_Request",  // message name
  6,  // number of fields
  sizeof(tf2_web_republisher::srv::RepublishTFs_Request),
  RepublishTFs_Request_message_member_array,  // message members
  RepublishTFs_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RepublishTFs_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RepublishTFs_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RepublishTFs_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::srv::RepublishTFs_Request>()
{
  return &::tf2_web_republisher::srv::rosidl_typesupport_introspection_cpp::RepublishTFs_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, srv, RepublishTFs_Request)() {
  return &::tf2_web_republisher::srv::rosidl_typesupport_introspection_cpp::RepublishTFs_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tf2_web_republisher
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void RepublishTFs_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::srv::RepublishTFs_Response(_init);
}

void RepublishTFs_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::srv::RepublishTFs_Response *>(message_memory);
  typed_message->~RepublishTFs_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RepublishTFs_Response_message_member_array[1] = {
  {
    "topic_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::srv::RepublishTFs_Response, topic_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RepublishTFs_Response_message_members = {
  "tf2_web_republisher::srv",  // message namespace
  "RepublishTFs_Response",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher::srv::RepublishTFs_Response),
  RepublishTFs_Response_message_member_array,  // message members
  RepublishTFs_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RepublishTFs_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RepublishTFs_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RepublishTFs_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::srv::RepublishTFs_Response>()
{
  return &::tf2_web_republisher::srv::rosidl_typesupport_introspection_cpp::RepublishTFs_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, srv, RepublishTFs_Response)() {
  return &::tf2_web_republisher::srv::rosidl_typesupport_introspection_cpp::RepublishTFs_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tf2_web_republisher
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers RepublishTFs_service_members = {
  "tf2_web_republisher::srv",  // service namespace
  "RepublishTFs",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tf2_web_republisher::srv::RepublishTFs>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t RepublishTFs_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RepublishTFs_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tf2_web_republisher::srv::RepublishTFs>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tf2_web_republisher::srv::rosidl_typesupport_introspection_cpp::RepublishTFs_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tf2_web_republisher::srv::RepublishTFs_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tf2_web_republisher::srv::RepublishTFs_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, srv, RepublishTFs)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tf2_web_republisher::srv::RepublishTFs>();
}

#ifdef __cplusplus
}
#endif
