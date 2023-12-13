// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/KeyPoint2DArray.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_

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
#include "yolov8_msgs/msg/detail/key_point2_d__struct.h"

// Struct defined in msg/KeyPoint2DArray in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__KeyPoint2DArray
{
  yolov8_msgs__msg__KeyPoint2D__Sequence data;
} yolov8_msgs__msg__KeyPoint2DArray;

// Struct for a sequence of yolov8_msgs__msg__KeyPoint2DArray.
typedef struct yolov8_msgs__msg__KeyPoint2DArray__Sequence
{
  yolov8_msgs__msg__KeyPoint2DArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__KeyPoint2DArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__KEY_POINT2_D_ARRAY__STRUCT_H_
