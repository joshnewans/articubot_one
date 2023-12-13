// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from yolov8_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
#define YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'center'
#include "yolov8_msgs/msg/detail/pose2_d__struct.h"
// Member 'size'
#include "yolov8_msgs/msg/detail/vector2__struct.h"

// Struct defined in msg/BoundingBox2D in the package yolov8_msgs.
typedef struct yolov8_msgs__msg__BoundingBox2D
{
  yolov8_msgs__msg__Pose2D center;
  yolov8_msgs__msg__Vector2 size;
} yolov8_msgs__msg__BoundingBox2D;

// Struct for a sequence of yolov8_msgs__msg__BoundingBox2D.
typedef struct yolov8_msgs__msg__BoundingBox2D__Sequence
{
  yolov8_msgs__msg__BoundingBox2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} yolov8_msgs__msg__BoundingBox2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_H_
