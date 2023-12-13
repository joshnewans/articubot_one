// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/KeyPoint3DArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "yolov8_msgs/msg/detail/key_point3_d__struct.h"
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/KeyPoint3DArray in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__KeyPoint3DArray
{
  yolov8_msgs__msg__KeyPoint3D__Sequence data;
  rosidl_runtime_c__String frame_id;
} yolov8_msgs__msg__KeyPoint3DArray;

// Struct for a sequence of yolov8_msgs__msg__KeyPoint3DArray.
typedef struct yolov8_msgs__msg__KeyPoint3DArray__Sequence
{
  yolov8_msgs__msg__KeyPoint3DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__KeyPoint3DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D_ARRAY__STRUCT_H_
