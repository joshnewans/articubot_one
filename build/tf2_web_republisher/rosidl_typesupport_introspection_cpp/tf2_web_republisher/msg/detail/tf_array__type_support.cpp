// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tf2_web_republisher:msg/TFArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tf2_web_republisher/msg/detail/tf_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tf2_web_republisher
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TFArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tf2_web_republisher::msg::TFArray(_init);
}

void TFArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tf2_web_republisher::msg::TFArray *>(message_memory);
  typed_message->~TFArray();
}

size_t size_function__TFArray__transforms(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TFArray__transforms(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void * get_function__TFArray__transforms(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  return &member[index];
}

void resize_function__TFArray__transforms(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::TransformStamped> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TFArray_message_member_array[1] = {
  {
    "transforms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher::msg::TFArray, transforms),  // bytes offset in struct
    nullptr,  // default value
    size_function__TFArray__transforms,  // size() function pointer
    get_const_function__TFArray__transforms,  // get_const(index) function pointer
    get_function__TFArray__transforms,  // get(index) function pointer
    resize_function__TFArray__transforms  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TFArray_message_members = {
  "tf2_web_republisher::msg",  // message namespace
  "TFArray",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher::msg::TFArray),
  TFArray_message_member_array,  // message members
  TFArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TFArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TFArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TFArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tf2_web_republisher


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::msg::TFArray>()
{
  return &::tf2_web_republisher::msg::rosidl_typesupport_introspection_cpp::TFArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tf2_web_republisher, msg, TFArray)() {
  return &::tf2_web_republisher::msg::rosidl_typesupport_introspection_cpp::TFArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
