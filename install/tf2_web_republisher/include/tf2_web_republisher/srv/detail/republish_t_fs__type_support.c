// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tf2_web_republisher:srv/RepublishTFs.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tf2_web_republisher/srv/detail/republish_t_fs__rosidl_typesupport_introspection_c.h"
#include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tf2_web_republisher/srv/detail/republish_t_fs__functions.h"
#include "tf2_web_republisher/srv/detail/republish_t_fs__struct.h"


// Include directives for member types
// Member `source_frames`
// Member `target_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `timeout`
#include "builtin_interfaces/msg/duration.h"
// Member `timeout`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__srv__RepublishTFs_Request__init(message_memory);
}

void RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_fini_function(void * message_memory)
{
  tf2_web_republisher__srv__RepublishTFs_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_member_array[6] = {
  {
    "source_frames",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__srv__RepublishTFs_Request, source_frames),  // bytes offset in struct
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
    offsetof(tf2_web_republisher__srv__RepublishTFs_Request, target_frame),  // bytes offset in struct
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
    offsetof(tf2_web_republisher__srv__RepublishTFs_Request, angular_thres),  // bytes offset in struct
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
    offsetof(tf2_web_republisher__srv__RepublishTFs_Request, trans_thres),  // bytes offset in struct
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
    offsetof(tf2_web_republisher__srv__RepublishTFs_Request, rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__srv__RepublishTFs_Request, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_members = {
  "tf2_web_republisher__srv",  // message namespace
  "RepublishTFs_Request",  // message name
  6,  // number of fields
  sizeof(tf2_web_republisher__srv__RepublishTFs_Request),
  RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_member_array,  // message members
  RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_type_support_handle = {
  0,
  &RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, srv, RepublishTFs_Request)() {
  RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_type_support_handle.typesupport_identifier) {
    RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RepublishTFs_Request__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__functions.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__struct.h"


// Include directives for member types
// Member `topic_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tf2_web_republisher__srv__RepublishTFs_Response__init(message_memory);
}

void RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_fini_function(void * message_memory)
{
  tf2_web_republisher__srv__RepublishTFs_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_member_array[1] = {
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tf2_web_republisher__srv__RepublishTFs_Response, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_members = {
  "tf2_web_republisher__srv",  // message namespace
  "RepublishTFs_Response",  // message name
  1,  // number of fields
  sizeof(tf2_web_republisher__srv__RepublishTFs_Response),
  RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_member_array,  // message members
  RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_type_support_handle = {
  0,
  &RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, srv, RepublishTFs_Response)() {
  if (!RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_type_support_handle.typesupport_identifier) {
    RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RepublishTFs_Response__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tf2_web_republisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tf2_web_republisher/srv/detail/republish_t_fs__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_service_members = {
  "tf2_web_republisher__srv",  // service namespace
  "RepublishTFs",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_Request_message_type_support_handle,
  NULL  // response message
  // tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_Response_message_type_support_handle
};

static rosidl_service_type_support_t tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_service_type_support_handle = {
  0,
  &tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, srv, RepublishTFs_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, srv, RepublishTFs_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tf2_web_republisher
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, srv, RepublishTFs)() {
  if (!tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_service_type_support_handle.typesupport_identifier) {
    tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, srv, RepublishTFs_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tf2_web_republisher, srv, RepublishTFs_Response)()->data;
  }

  return &tf2_web_republisher__srv__detail__republish_t_fs__rosidl_typesupport_introspection_c__RepublishTFs_service_type_support_handle;
}
