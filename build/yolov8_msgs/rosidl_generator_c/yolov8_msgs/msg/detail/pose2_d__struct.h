// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/Pose2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "yolov8_msgs/msg/detail/point2_d__struct.h"

// Struct defined in msg/Pose2D in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__Pose2D
{
  yolov8_msgs__msg__Point2D position;
  double theta;
} yolov8_msgs__msg__Pose2D;

// Struct for a sequence of yolov8_msgs__msg__Pose2D.
typedef struct yolov8_msgs__msg__Pose2D__Sequence
{
  yolov8_msgs__msg__Pose2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__Pose2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__POSE2_D__STRUCT_H_
