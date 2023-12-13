// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/KeyPoint3D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'point'
#include "geometry_msgs/msg/detail/point__struct.h"

// Struct defined in msg/KeyPoint3D in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__KeyPoint3D
{
  int32_t id;
  geometry_msgs__msg__Point point;
  double score;
} yolov8_msgs__msg__KeyPoint3D;

// Struct for a sequence of yolov8_msgs__msg__KeyPoint3D.
typedef struct yolov8_msgs__msg__KeyPoint3D__Sequence
{
  yolov8_msgs__msg__KeyPoint3D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__KeyPoint3D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__KEY_POINT3_D__STRUCT_H_
