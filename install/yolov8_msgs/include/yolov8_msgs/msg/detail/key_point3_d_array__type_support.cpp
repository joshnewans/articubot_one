// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from yolov8_msgs:msg/KeyPoint3DArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "yolov8_msgs/msg/detail/key_point3_d_array__struct.hpp"
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

void KeyPoint3DArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) yolov8_msgs::msg::KeyPoint3DArray(_init);
}

void KeyPoint3DArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<yolov8_msgs::msg::KeyPoint3DArray *>(message_memory);
  typed_message->~KeyPoint3DArray();
}

size_t size_function__KeyPoint3DArray__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<yolov8_msgs::msg::KeyPoint3D> *>(untyped_member);
  return member->size();
}

const void * get_const_function__KeyPoint3DArray__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<yolov8_msgs::msg::KeyPoint3D> *>(untyped_member);
  return &member[index];
}

void * get_function__KeyPoint3DArray__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<yolov8_msgs::msg::KeyPoint3D> *>(untyped_member);
  return &member[index];
}

void resize_function__KeyPoint3DArray__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<yolov8_msgs::msg::KeyPoint3D> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyPoint3DArray_message_member_array[2] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<yolov8_msgs::msg::KeyPoint3D>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs::msg::KeyPoint3DArray, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__KeyPoint3DArray__data,  // size() function pointer
    get_const_function__KeyPoint3DArray__data,  // get_const(index) function pointer
    get_function__KeyPoint3DArray__data,  // get(index) function pointer
    resize_function__KeyPoint3DArray__data  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs::msg::KeyPoint3DArray, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyPoint3DArray_message_members = {
  "yolov8_msgs::msg",  // message namespace
  "KeyPoint3DArray",  // message name
  2,  // number of fields
  sizeof(yolov8_msgs::msg::KeyPoint3DArray),
  KeyPoint3DArray_message_member_array,  // message members
  KeyPoint3DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyPoint3DArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyPoint3DArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyPoint3DArray_message_members,
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
get_message_type_support_handle<yolov8_msgs::msg::KeyPoint3DArray>()
{
  return &::yolov8_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint3DArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, yolov8_msgs, msg, KeyPoint3DArray)() {
  return &::yolov8_msgs::msg::rosidl_typesupport_introspection_cpp::KeyPoint3DArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
