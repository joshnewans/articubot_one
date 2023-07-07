// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tf2_web_republisher
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_Goal(_init);
}

void TFSubscription_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_Goal *>(message_memory);
  typed_message->~TFSubscription_Goal();
}

size_t size_function__TFSubscription_Goal__source_frames(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TFSubscription_Goal__source_frames(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__TFSubscription_Goal__source_frames(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__TFSubscription_Goal__source_frames(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_Goal_message_member_array[5] = {
  {
    "source_frames",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_Goal, source_frames),  // bytes offset in struct
    nullptr,  // default value
    size_function__TFSubscription_Goal__source_frames,  // size() function pointer
    get_const_function__TFSubscription_Goal__source_frames,  // get_const(index) function pointer
    get_function__TFSubscription_Goal__source_frames,  // get(index) function pointer
    resize_function__TFSubscription_Goal__source_frames  // resize(index) function pointer
  },
  {
    "target_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_Goal, target_frame),  // bytes offset in struct
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
    offsetof(tf2_web_republisher::action::TFSubscription_Goal, angular_thres),  // bytes offset in struct
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
    offsetof(tf2_web_republisher::action::TFSubscription_Goal, trans_thres),  // bytes offset in struct
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
    offsetof(tf2_web_republisher::action::TFSubscription_Goal, rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_Goal_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_Goal",  // message name
  5,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_Goal),
  TFSubscription_Goal_message_member_array,  // message members
  TFSubscription_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Goal>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_Goal)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_Goal_message_type_support_handle;
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_Result(_init);
}

void TFSubscription_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_Result *>(message_memory);
  typed_message->~TFSubscription_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_Result_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_Result",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_Result),
  TFSubscription_Result_message_member_array,  // message members
  TFSubscription_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Result>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_Result)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_Result_message_type_support_handle;
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_Feedback(_init);
}

void TFSubscription_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_Feedback *>(message_memory);
  typed_message->~TFSubscription_Feedback();
}

size_t size_function__TFSubscription_Feedback__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TFSubscription_Feedback__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__TFSubscription_Feedback__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__TFSubscription_Feedback__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_Feedback_message_member_array[1] = {
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_Feedback, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__TFSubscription_Feedback__transforms,  // size() function pointer
    get_const_function__TFSubscription_Feedback__transforms,  // get_const(index) function pointer
    get_function__TFSubscription_Feedback__transforms,  // get(index) function pointer
    resize_function__TFSubscription_Feedback__transforms  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_Feedback_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_Feedback",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_Feedback),
  TFSubscription_Feedback_message_member_array,  // message members
  TFSubscription_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Feedback>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_Feedback)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_Feedback_message_type_support_handle;
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_SendGoal_Request(_init);
}

void TFSubscription_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_SendGoal_Request *>(message_memory);
  typed_message->~TFSubscription_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_SendGoal_Request_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_SendGoal_Request),
  TFSubscription_SendGoal_Request_message_member_array,  // message members
  TFSubscription_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal_Request>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_SendGoal_Request)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_SendGoal_Request_message_type_support_handle;
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_SendGoal_Response(_init);
}

void TFSubscription_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_SendGoal_Response *>(message_memory);
  typed_message->~TFSubscription_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_SendGoal_Response_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_SendGoal_Response),
  TFSubscription_SendGoal_Response_message_member_array,  // message members
  TFSubscription_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal_Response>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_SendGoal_Response)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_SendGoal_Response_message_type_support_handle;
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tf2_web_republisher
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TFSubscription_SendGoal_service_members = {
  "tf2_web_republisher::action",  // service namespace
  "TFSubscription_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TFSubscription_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_SendGoal_service_type_support_handle;
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
        ::tf2_web_republisher::action::TFSubscription_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tf2_web_republisher::action::TFSubscription_SendGoal_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal>();
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_GetResult_Request(_init);
}

void TFSubscription_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_GetResult_Request *>(message_memory);
  typed_message->~TFSubscription_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_GetResult_Request_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_GetResult_Request),
  TFSubscription_GetResult_Request_message_member_array,  // message members
  TFSubscription_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult_Request>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_GetResult_Request)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_GetResult_Request_message_type_support_handle;
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_GetResult_Response(_init);
}

void TFSubscription_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_GetResult_Response *>(message_memory);
  typed_message->~TFSubscription_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_GetResult_Response_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_GetResult_Response),
  TFSubscription_GetResult_Response_message_member_array,  // message members
  TFSubscription_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult_Response>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_GetResult_Response)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tf2_web_republisher
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TFSubscription_GetResult_service_members = {
  "tf2_web_republisher::action",  // service namespace
  "TFSubscription_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TFSubscription_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_GetResult_service_type_support_handle;
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
        ::tf2_web_republisher::action::TFSubscription_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tf2_web_republisher::action::TFSubscription_GetResult_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult>();
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
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void TFSubscription_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::action::TFSubscription_FeedbackMessage(_init);
}

void TFSubscription_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::action::TFSubscription_FeedbackMessage *>(message_memory);
  typed_message->~TFSubscription_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFSubscription_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::action::TFSubscription_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFSubscription_FeedbackMessage_message_members = {
  "tf2_web_republisher::action",  // message namespace
  "TFSubscription_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher::action::TFSubscription_FeedbackMessage),
  TFSubscription_FeedbackMessage_message_member_array,  // message members
  TFSubscription_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFSubscription_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFSubscription_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_FeedbackMessage>()
{
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, action, TFSubscription_FeedbackMessage)() {
  return &::tf2_web_republisher::action::rosidl_typesupport_introspection_cpp::TFSubscription_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
