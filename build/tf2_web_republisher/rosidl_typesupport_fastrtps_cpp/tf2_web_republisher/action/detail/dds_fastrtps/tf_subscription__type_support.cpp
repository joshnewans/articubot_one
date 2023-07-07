// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice
#include "tf2_web_republisher/action/detail/tf_subscription__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_Goal & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: source_frames
  {
    cdr << ros_message.source_frames;
  }
  // Member: target_frame
  cdr << ros_message.target_frame;
  // Member: angular_thres
  cdr << ros_message.angular_thres;
  // Member: trans_thres
  cdr << ros_message.trans_thres;
  // Member: rate
  cdr << ros_message.rate;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_Goal & ros_message)
{
  // Member: source_frames
  {
    cdr >> ros_message.source_frames;
  }

  // Member: target_frame
  cdr >> ros_message.target_frame;

  // Member: angular_thres
  cdr >> ros_message.angular_thres;

  // Member: trans_thres
  cdr >> ros_message.trans_thres;

  // Member: rate
  cdr >> ros_message.rate;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_Goal & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: source_frames
  {
    size_t array_size = ros_message.source_frames.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.source_frames[index].size() + 1);
    }
  }
  // Member: target_frame
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.target_frame.size() + 1);
  // Member: angular_thres
  {
    size_t item_size = sizeof(ros_message.angular_thres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trans_thres
  {
    size_t item_size = sizeof(ros_message.trans_thres);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rate
  {
    size_t item_size = sizeof(ros_message.rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: source_frames
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: target_frame
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: angular_thres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: trans_thres
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_Goal *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_Goal *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_Goal__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_Goal *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_Goal(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_Goal__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_Goal",
  _TFSubscription_Goal__cdr_serialize,
  _TFSubscription_Goal__cdr_deserialize,
  _TFSubscription_Goal__get_serialized_size,
  _TFSubscription_Goal__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_Goal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_Goal__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Goal>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_Goal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_Goal)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_Goal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_Result & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_Result & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_Result & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_Result *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_Result *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_Result__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_Result *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_Result(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_Result__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_Result",
  _TFSubscription_Result__cdr_serialize,
  _TFSubscription_Result__cdr_deserialize,
  _TFSubscription_Result__get_serialized_size,
  _TFSubscription_Result__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_Result__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_Result__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Result>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_Result__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_Result)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_Result__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::TransformStamped &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::TransformStamped &);
size_t get_serialized_size(
  const geometry_msgs::msg::TransformStamped &,
  size_t current_alignment);
size_t
max_serialized_size_TransformStamped(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_Feedback & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: transforms
  {
    size_t size = ros_message.transforms.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.transforms[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_Feedback & ros_message)
{
  // Member: transforms
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.transforms.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.transforms[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_Feedback & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: transforms
  {
    size_t array_size = ros_message.transforms.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.transforms[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: transforms
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TransformStamped(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_Feedback *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_Feedback *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_Feedback__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_Feedback *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_Feedback(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_Feedback__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_Feedback",
  _TFSubscription_Feedback__cdr_serialize,
  _TFSubscription_Feedback__cdr_deserialize,
  _TFSubscription_Feedback__get_serialized_size,
  _TFSubscription_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_Feedback__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_Feedback__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_Feedback>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_Feedback__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_Feedback)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_Feedback__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace tf2_web_republisher
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_Goal &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tf2_web_republisher::action::TFSubscription_Goal &);
size_t get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_Goal &,
  size_t current_alignment);
size_t
max_serialized_size_TFSubscription_Goal(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_SendGoal_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: goal
  tf2_web_republisher::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_SendGoal_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: goal
  tf2_web_republisher::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_SendGoal_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: goal

  current_alignment +=
    tf2_web_republisher::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tf2_web_republisher::action::typesupport_fastrtps_cpp::max_serialized_size_TFSubscription_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_SendGoal_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_SendGoal_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_SendGoal_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_SendGoal_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_SendGoal_Request__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_SendGoal_Request",
  _TFSubscription_SendGoal_Request__cdr_serialize,
  _TFSubscription_SendGoal_Request__cdr_deserialize,
  _TFSubscription_SendGoal_Request__get_serialized_size,
  _TFSubscription_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_SendGoal_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_SendGoal_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal_Request>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_SendGoal_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_SendGoal_Request)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_SendGoal_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_SendGoal_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: accepted
  cdr << (ros_message.accepted ? true : false);
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_SendGoal_Response & ros_message)
{
  // Member: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.accepted = tmp ? true : false;
  }

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_SendGoal_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: accepted
  {
    size_t item_size = sizeof(ros_message.accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_SendGoal_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_SendGoal_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_SendGoal_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_SendGoal_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_SendGoal_Response__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_SendGoal_Response",
  _TFSubscription_SendGoal_Response__cdr_serialize,
  _TFSubscription_SendGoal_Response__cdr_deserialize,
  _TFSubscription_SendGoal_Response__get_serialized_size,
  _TFSubscription_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_SendGoal_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_SendGoal_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal_Response>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_SendGoal_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_SendGoal_Response)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_SendGoal_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TFSubscription_SendGoal__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_SendGoal_Response)(),
};

static rosidl_service_type_support_t _TFSubscription_SendGoal__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_service_type_support_t *
get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_SendGoal>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_SendGoal__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_SendGoal)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_SendGoal__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs


namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_GetResult_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_GetResult_Request & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_GetResult_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_GetResult_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_GetResult_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_GetResult_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_GetResult_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_GetResult_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_GetResult_Request__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_GetResult_Request",
  _TFSubscription_GetResult_Request__cdr_serialize,
  _TFSubscription_GetResult_Request__cdr_deserialize,
  _TFSubscription_GetResult_Request__get_serialized_size,
  _TFSubscription_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_GetResult_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_GetResult_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult_Request>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_GetResult_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_GetResult_Request)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_GetResult_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tf2_web_republisher
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_Result &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tf2_web_republisher::action::TFSubscription_Result &);
size_t get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_Result &,
  size_t current_alignment);
size_t
max_serialized_size_TFSubscription_Result(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_GetResult_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  // Member: result
  tf2_web_republisher::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.result,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_GetResult_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  // Member: result
  tf2_web_republisher::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.result);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_GetResult_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result

  current_alignment +=
    tf2_web_republisher::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.result, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tf2_web_republisher::action::typesupport_fastrtps_cpp::max_serialized_size_TFSubscription_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_GetResult_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_GetResult_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_GetResult_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_GetResult_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_GetResult_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_GetResult_Response__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_GetResult_Response",
  _TFSubscription_GetResult_Response__cdr_serialize,
  _TFSubscription_GetResult_Response__cdr_deserialize,
  _TFSubscription_GetResult_Response__get_serialized_size,
  _TFSubscription_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_GetResult_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_GetResult_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult_Response>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_GetResult_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_GetResult_Response)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_GetResult_Response__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TFSubscription_GetResult__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_GetResult_Response)(),
};

static rosidl_service_type_support_t _TFSubscription_GetResult__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_service_type_support_t *
get_service_type_support_handle<tf2_web_republisher::action::TFSubscription_GetResult>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_GetResult__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_GetResult)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_GetResult__handle;
}

#ifdef __cplusplus
}
#endif
// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unique_identifier_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unique_identifier_msgs::msg::UUID &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unique_identifier_msgs::msg::UUID &);
size_t get_serialized_size(
  const unique_identifier_msgs::msg::UUID &,
  size_t current_alignment);
size_t
max_serialized_size_UUID(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unique_identifier_msgs

namespace tf2_web_republisher
{
namespace action
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_Feedback &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tf2_web_republisher::action::TFSubscription_Feedback &);
size_t get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_Feedback &,
  size_t current_alignment);
size_t
max_serialized_size_TFSubscription_Feedback(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace action
}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_serialize(
  const tf2_web_republisher::action::TFSubscription_FeedbackMessage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.goal_id,
    cdr);
  // Member: feedback
  tf2_web_republisher::action::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.feedback,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tf2_web_republisher::action::TFSubscription_FeedbackMessage & ros_message)
{
  // Member: goal_id
  unique_identifier_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.goal_id);

  // Member: feedback
  tf2_web_republisher::action::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.feedback);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
get_serialized_size(
  const tf2_web_republisher::action::TFSubscription_FeedbackMessage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: goal_id

  current_alignment +=
    unique_identifier_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.goal_id, current_alignment);
  // Member: feedback

  current_alignment +=
    tf2_web_republisher::action::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.feedback, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tf2_web_republisher
max_serialized_size_TFSubscription_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unique_identifier_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UUID(
        full_bounded, current_alignment);
    }
  }

  // Member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tf2_web_republisher::action::typesupport_fastrtps_cpp::max_serialized_size_TFSubscription_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TFSubscription_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TFSubscription_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tf2_web_republisher::action::TFSubscription_FeedbackMessage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TFSubscription_FeedbackMessage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tf2_web_republisher::action::TFSubscription_FeedbackMessage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TFSubscription_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TFSubscription_FeedbackMessage(full_bounded, 0);
}

static message_type_support_callbacks_t _TFSubscription_FeedbackMessage__callbacks = {
  "tf2_web_republisher::action",
  "TFSubscription_FeedbackMessage",
  _TFSubscription_FeedbackMessage__cdr_serialize,
  _TFSubscription_FeedbackMessage__cdr_deserialize,
  _TFSubscription_FeedbackMessage__get_serialized_size,
  _TFSubscription_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _TFSubscription_FeedbackMessage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TFSubscription_FeedbackMessage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace action

}  // namespace tf2_web_republisher

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tf2_web_republisher
const rosidl_message_type_support_t *
get_message_type_support_handle<tf2_web_republisher::action::TFSubscription_FeedbackMessage>()
{
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_FeedbackMessage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tf2_web_republisher, action, TFSubscription_FeedbackMessage)() {
  return &tf2_web_republisher::action::typesupport_fastrtps_cpp::_TFSubscription_FeedbackMessage__handle;
}

#ifdef __cplusplus
}
#endif
