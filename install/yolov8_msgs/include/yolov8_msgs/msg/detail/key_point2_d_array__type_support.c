// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_msgs/msg/detail/key_point2_d_array__rosidl_typesupport_introspection_c.h"
#include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_msgs/msg/detail/key_point2_d_array__functions.h"
#include "yolov8_msgs/msg/detail/key_point2_d_array__struct.h"


// Include directives for member types
// Member `data`
#include "yolov8_msgs/msg/key_point2_d.h"
// Member `data`
#include "yolov8_msgs/msg/detail/key_point2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_msgs__msg__KeyPoint2DArray__init(message_memory);
}

void KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_fini_function(void * message_memory)
{
  yolov8_msgs__msg__KeyPoint2DArray__fini(message_memory);
}

size_t KeyPoint2DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint2D__data(
  const void * untyped_member)
{
  const yolov8_msgs__msg__KeyPoint2D__Sequence * member =
    (const yolov8_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  return member->size;
}

const void * KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2D__data(
  const void * untyped_member, size_t index)
{
  const yolov8_msgs__msg__KeyPoint2D__Sequence * member =
    (const yolov8_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2D__data(
  void * untyped_member, size_t index)
{
  yolov8_msgs__msg__KeyPoint2D__Sequence * member =
    (yolov8_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool KeyPoint2DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint2D__data(
  void * untyped_member, size_t size)
{
  yolov8_msgs__msg__KeyPoint2D__Sequence * member =
    (yolov8_msgs__msg__KeyPoint2D__Sequence *)(untyped_member);
  yolov8_msgs__msg__KeyPoint2D__Sequence__fini(member);
  return yolov8_msgs__msg__KeyPoint2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__KeyPoint2DArray, data),  // bytes offset in struct
    NULL,  // default value
    KeyPoint2DArray__rosidl_typesupport_introspection_c__size_function__KeyPoint2D__data,  // size() function pointer
    KeyPoint2DArray__rosidl_typesupport_introspection_c__get_const_function__KeyPoint2D__data,  // get_const(index) function pointer
    KeyPoint2DArray__rosidl_typesupport_introspection_c__get_function__KeyPoint2D__data,  // get(index) function pointer
    KeyPoint2DArray__rosidl_typesupport_introspection_c__resize_function__KeyPoint2D__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_members = {
  "yolov8_msgs__msg",  // message namespace
  "KeyPoint2DArray",  // message name
  1,  // number of fields
  sizeof(yolov8_msgs__msg__KeyPoint2DArray),
  KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array,  // message members
  KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle = {
  0,
  &KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, KeyPoint2DArray)() {
  KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, KeyPoint2D)();
  if (!KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle.typesupport_identifier) {
    KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &KeyPoint2DArray__rosidl_typesupport_introspection_c__KeyPoint2DArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
