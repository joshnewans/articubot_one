// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yolov8_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yolov8_msgs/msg/detail/key_point2_d_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace yolov8_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KeyPoint2DArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yolov8_msgs::msg::KeyPoint2DArray(_init);
}

void KeyPoint2DArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yolov8_msgs::msg::KeyPoint2DArray *>(message_memory);
  typed_message->~KeyPoint2DArray();
}

size_t size_function__KeyPoint2DArray__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<yolov8_msgs::msg::KeyPoint2D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KeyPoint2DArray__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<yolov8_msgs::msg::KeyPoint2D> *>(untyped_member);
  return &member[index];
}

void * get_function__KeyPoint2DArray__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<yolov8_msgs::msg::KeyPoint2D> *>(untyped_member);
  return &member[index];
}

void resize_function__KeyPoint2DArray__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<yolov8_msgs::msg::KeyPoint2D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyPoint2DArray_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<yolov8_msgs::msg::KeyPoint2D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs::msg::KeyPoint2DArray, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__KeyPoint2DArray__data,  // size() function pointer
    get_const_function__KeyPoint2DArray__data,  // get_const(index) function pointer
    get_function__KeyPoint2DArray__data,  // get(index) function pointer
    resize_function__KeyPoint2DArray__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyPoint2DArray_message_members = {
  "yolov8_msgs::msg",  // message namespace
  "KeyPoint2DArray",  // message name
  1,  // number of fields
  sizeof(yolov8_msgs::msg::KeyPoint2DArray),
  KeyPoint2DArray_message_member_array,  // message members
  KeyPoint2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyPoint2DArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyPoint2DArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyPoint2DArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace yolov8_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<yolov8_msgs::msg::KeyPoint2DArray>()
{
  return &::yolov8_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint2DArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yolov8_msgs, msg, KeyPoint2DArray)() {
  return &::yolov8_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint2DArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
