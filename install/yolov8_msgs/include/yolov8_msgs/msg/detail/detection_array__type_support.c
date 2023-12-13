// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yolov8_msgs:msg/DetectionArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yolov8_msgs/msg/detail/detection_array__rosidl_typesupport_introspection_c.h"
#include "yolov8_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yolov8_msgs/msg/detail/detection_array__functions.h"
#include "yolov8_msgs/msg/detail/detection_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `detections`
#include "yolov8_msgs/msg/detection.h"
// Member `detections`
#include "yolov8_msgs/msg/detail/detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yolov8_msgs__msg__DetectionArray__init(message_memory);
}

void DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_fini_function(void * message_memory)
{
  yolov8_msgs__msg__DetectionArray__fini(message_memory);
}

size_t DetectionArray__rosidl_typesupport_introspection_c__size_function__Detection__detections(
  const void * untyped_member)
{
  const yolov8_msgs__msg__Detection__Sequence * member =
    (const yolov8_msgs__msg__Detection__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectionArray__rosidl_typesupport_introspection_c__get_const_function__Detection__detections(
  const void * untyped_member, size_t index)
{
  const yolov8_msgs__msg__Detection__Sequence * member =
    (const yolov8_msgs__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectionArray__rosidl_typesupport_introspection_c__get_function__Detection__detections(
  void * untyped_member, size_t index)
{
  yolov8_msgs__msg__Detection__Sequence * member =
    (yolov8_msgs__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectionArray__rosidl_typesupport_introspection_c__resize_function__Detection__detections(
  void * untyped_member, size_t size)
{
  yolov8_msgs__msg__Detection__Sequence * member =
    (yolov8_msgs__msg__Detection__Sequence *)(untyped_member);
  yolov8_msgs__msg__Detection__Sequence__fini(member);
  return yolov8_msgs__msg__Detection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__DetectionArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yolov8_msgs__msg__DetectionArray, detections),  // bytes offset in struct
    NULL,  // default value
    DetectionArray__rosidl_typesupport_introspection_c__size_function__Detection__detections,  // size() function pointer
    DetectionArray__rosidl_typesupport_introspection_c__get_const_function__Detection__detections,  // get_const(index) function pointer
    DetectionArray__rosidl_typesupport_introspection_c__get_function__Detection__detections,  // get(index) function pointer
    DetectionArray__rosidl_typesupport_introspection_c__resize_function__Detection__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_members = {
  "yolov8_msgs__msg",  // message namespace
  "DetectionArray",  // message name
  2,  // number of fields
  sizeof(yolov8_msgs__msg__DetectionArray),
  DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array,  // message members
  DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle = {
  0,
  &DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yolov8_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, DetectionArray)() {
  DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yolov8_msgs, msg, Detection)();
  if (!DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle.typesupport_identifier) {
    DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectionArray__rosidl_typesupport_introspection_c__DetectionArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
