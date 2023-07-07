// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__STRUCT_H_
#define TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'source_frames'
// Member 'target_frame'
#include "rosidl_runtime_c/string.h"

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_Goal
{
  rosidl_runtime_c__String__Sequence source_frames;
  rosidl_runtime_c__String target_frame;
  float angular_thres;
  float trans_thres;
  float rate;
} tf2_web_republisher__action__TFSubscription_Goal;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_Goal.
typedef struct tf2_web_republisher__action__TFSubscription_Goal__Sequence
{
  tf2_web_republisher__action__TFSubscription_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_Result
{
  uint8_t structure_needs_at_least_one_member;
} tf2_web_republisher__action__TFSubscription_Result;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_Result.
typedef struct tf2_web_republisher__action__TFSubscription_Result__Sequence
{
  tf2_web_republisher__action__TFSubscription_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_Feedback
{
  geometry_msgs__msg__TransformStamped__Sequence transforms;
} tf2_web_republisher__action__TFSubscription_Feedback;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_Feedback.
typedef struct tf2_web_republisher__action__TFSubscription_Feedback__Sequence
{
  tf2_web_republisher__action__TFSubscription_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "tf2_web_republisher/action/detail/tf_subscription__struct.h"

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  tf2_web_republisher__action__TFSubscription_Goal goal;
} tf2_web_republisher__action__TFSubscription_SendGoal_Request;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_SendGoal_Request.
typedef struct tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence
{
  tf2_web_republisher__action__TFSubscription_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} tf2_web_republisher__action__TFSubscription_SendGoal_Response;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_SendGoal_Response.
typedef struct tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence
{
  tf2_web_republisher__action__TFSubscription_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} tf2_web_republisher__action__TFSubscription_GetResult_Request;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_GetResult_Request.
typedef struct tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence
{
  tf2_web_republisher__action__TFSubscription_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_GetResult_Response
{
  int8_t status;
  tf2_web_republisher__action__TFSubscription_Result result;
} tf2_web_republisher__action__TFSubscription_GetResult_Response;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_GetResult_Response.
typedef struct tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence
{
  tf2_web_republisher__action__TFSubscription_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"

// Struct defined in action/TFSubscription in the package tf2_web_republisher.
typedef struct tf2_web_republisher__action__TFSubscription_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  tf2_web_republisher__action__TFSubscription_Feedback feedback;
} tf2_web_republisher__action__TFSubscription_FeedbackMessage;

// Struct for a sequence of tf2_web_republisher__action__TFSubscription_FeedbackMessage.
typedef struct tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence
{
  tf2_web_republisher__action__TFSubscription_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tf2_web_republisher__action__TFSubscription_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__STRUCT_H_
