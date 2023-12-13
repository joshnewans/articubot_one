// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/Point2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Point2D in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__Point2D
{
  double x;
  double y;
} yolov8_msgs__msg__Point2D;

// Struct for a sequence of yolov8_msgs__msg__Point2D.
typedef struct yolov8_msgs__msg__Point2D__Sequence
{
  yolov8_msgs__msg__Point2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__Point2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__POINT2_D__STRUCT_H_
