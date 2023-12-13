// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_msgs/msg/detail/mask__rosidl_typesupport_introspection_c.h"
#include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_msgs/msg/detail/mask__functions.h"
#include "yolov8_msgs/msg/detail/mask__struct.h"


// Include directives for member types
// Member `data`
#include "yolov8_msgs/msg/point2_d.h"
// Member `data`
#include "yolov8_msgs/msg/detail/point2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mask__rosidl_typesupport_introspection_c__Mask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_msgs__msg__Mask__init(message_memory);
}

void Mask__rosidl_typesupport_introspection_c__Mask_fini_function(void * message_memory)
{
  yolov8_msgs__msg__Mask__fini(message_memory);
}

size_t Mask__rosidl_typesupport_introspection_c__size_function__Point2D__data(
  const void * untyped_member)
{
  const yolov8_msgs__msg__Point2D__Sequence * member =
    (const yolov8_msgs__msg__Point2D__Sequence *)(untyped_member);
  return member->size;
}

const void * Mask__rosidl_typesupport_introspection_c__get_const_function__Point2D__data(
  const void * untyped_member, size_t index)
{
  const yolov8_msgs__msg__Point2D__Sequence * member =
    (const yolov8_msgs__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Mask__rosidl_typesupport_introspection_c__get_function__Point2D__data(
  void * untyped_member, size_t index)
{
  yolov8_msgs__msg__Point2D__Sequence * member =
    (yolov8_msgs__msg__Point2D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Mask__rosidl_typesupport_introspection_c__resize_function__Point2D__data(
  void * untyped_member, size_t size)
{
  yolov8_msgs__msg__Point2D__Sequence * member =
    (yolov8_msgs__msg__Point2D__Sequence *)(untyped_member);
  yolov8_msgs__msg__Point2D__Sequence__fini(member);
  return yolov8_msgs__msg__Point2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Mask__rosidl_typesupport_introspection_c__Mask_message_member_array[3] = {
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__Mask, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__Mask, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__Mask, data),  // bytes offset in struct
    NULL,  // default value
    Mask__rosidl_typesupport_introspection_c__size_function__Point2D__data,  // size() function pointer
    Mask__rosidl_typesupport_introspection_c__get_const_function__Point2D__data,  // get_const(index) function pointer
    Mask__rosidl_typesupport_introspection_c__get_function__Point2D__data,  // get(index) function pointer
    Mask__rosidl_typesupport_introspection_c__resize_function__Point2D__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mask__rosidl_typesupport_introspection_c__Mask_message_members = {
  "yolov8_msgs__msg",  // message namespace
  "Mask",  // message name
  3,  // number of fields
  sizeof(yolov8_msgs__msg__Mask),
  Mask__rosidl_typesupport_introspection_c__Mask_message_member_array,  // message members
  Mask__rosidl_typesupport_introspection_c__Mask_init_function,  // function to initialize message memory (memory has to be allocated)
  Mask__rosidl_typesupport_introspection_c__Mask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle = {
  0,
  &Mask__rosidl_typesupport_introspection_c__Mask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, Mask)() {
  Mask__rosidl_typesupport_introspection_c__Mask_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, Point2D)();
  if (!Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle.typesupport_identifier) {
    Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
