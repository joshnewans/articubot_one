// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
#include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
#include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


// Include directives for member types
// Member `source_frames`
// Member `target_frame`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_Goal__init(message_memory);
}

void TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_member_array[5] = {
  {
    "source_frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_Goal, source_frames),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_Goal, target_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_thres",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_Goal, angular_thres),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trans_thres",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_Goal, trans_thres),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_Goal, rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_Goal",  // message name
  5,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_Goal),
  TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_member_array,  // message members
  TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_type_support_handle = {
  0,
  &TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_Goal)() {
  if (!TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_type_support_handle.typesupport_identifier) {
    TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_Goal__rosidl_typesupport_introspection_c__TFSubscription_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_Result__init(message_memory);
}

void TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_Result",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_Result),
  TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_member_array,  // message members
  TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_type_support_handle = {
  0,
  &TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_Result)() {
  if (!TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_type_support_handle.typesupport_identifier) {
    TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_Result__rosidl_typesupport_introspection_c__TFSubscription_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


// Include directives for member types
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `transforms`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_Feedback__init(message_memory);
}

void TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_Feedback__fini(message_memory);
}

size_t TFSubscription_Feedback__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * TFSubscription_Feedback__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TFSubscription_Feedback__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TFSubscription_Feedback__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_member_array[1] = {
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_Feedback, transforms),  // bytes offset in struct
    NULL,  // default value
    TFSubscription_Feedback__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms,  // size() function pointer
    TFSubscription_Feedback__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms,  // get_const(index) function pointer
    TFSubscription_Feedback__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms,  // get(index) function pointer
    TFSubscription_Feedback__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_Feedback",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_Feedback),
  TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_member_array,  // message members
  TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_type_support_handle = {
  0,
  &TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_Feedback)() {
  TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_type_support_handle.typesupport_identifier) {
    TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_Feedback__rosidl_typesupport_introspection_c__TFSubscription_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "tf2_web_republisher/action/tf_subscription.h"
// Member `goal`
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_SendGoal_Request__init(message_memory);
}

void TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Request),
  TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_member_array,  // message members
  TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_type_support_handle = {
  0,
  &TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_SendGoal_Request)() {
  TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_Goal)();
  if (!TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_SendGoal_Request__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_SendGoal_Response__init(message_memory);
}

void TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_SendGoal_Response),
  TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_member_array,  // message members
  TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_type_support_handle = {
  0,
  &TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_SendGoal_Response)() {
  TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_SendGoal_Response__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_service_members = {
  "tf2_web_republisher__action",  // service namespace
  "TFSubscription_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_service_type_support_handle = {
  0,
  &tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_SendGoal)() {
  if (!tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_service_type_support_handle.typesupport_identifier) {
    tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_SendGoal_Response)()->data;
  }

  return &tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_GetResult_Request__init(message_memory);
}

void TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Request),
  TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_member_array,  // message members
  TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_type_support_handle = {
  0,
  &TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_GetResult_Request)() {
  TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_GetResult_Request__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "tf2_web_republisher/action/tf_subscription.h"
// Member `result`
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_GetResult_Response__init(message_memory);
}

void TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_GetResult_Response),
  TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_member_array,  // message members
  TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_type_support_handle = {
  0,
  &TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_GetResult_Response)() {
  TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_Result)();
  if (!TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_GetResult_Response__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_service_members = {
  "tf2_web_republisher__action",  // service namespace
  "TFSubscription_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_service_type_support_handle = {
  0,
  &tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_GetResult)() {
  if (!tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_service_type_support_handle.typesupport_identifier) {
    tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_GetResult_Response)()->data;
  }

  return &tf2_web_republisher__action__detail__tf_subscription__rosidl_typesupport_introspection_c__TFSubscription_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__functions.h"
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "tf2_web_republisher/action/tf_subscription.h"
// Member `feedback`
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__action__TFSubscription_FeedbackMessage__init(message_memory);
}

void TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_fini_function(void * message_memory)
{
  tf2_web_republisher__action__TFSubscription_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__action__TFSubscription_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_members = {
  "tf2_web_republisher__action",  // message namespace
  "TFSubscription_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(tf2_web_republisher__action__TFSubscription_FeedbackMessage),
  TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_member_array,  // message members
  TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_type_support_handle = {
  0,
  &TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_FeedbackMessage)() {
  TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, action, TFSubscription_Feedback)();
  if (!TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TFSubscription_FeedbackMessage__rosidl_typesupport_introspection_c__TFSubscription_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
