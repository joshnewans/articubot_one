// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__STRUCT_HPP_
#define TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_Goal __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_Goal __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_Goal_
{
  using Type = TFSubscription_Goal_<ContainerAllocator>;

  explicit TFSubscription_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_frame = "";
      this->angular_thres = 0.0f;
      this->trans_thres = 0.0f;
      this->rate = 0.0f;
    }
  }

  explicit TFSubscription_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_frame(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_frame = "";
      this->angular_thres = 0.0f;
      this->trans_thres = 0.0f;
      this->rate = 0.0f;
    }
  }

  // field types and members
  using _source_frames_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _source_frames_type source_frames;
  using _target_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _target_frame_type target_frame;
  using _angular_thres_type =
    float;
  _angular_thres_type angular_thres;
  using _trans_thres_type =
    float;
  _trans_thres_type trans_thres;
  using _rate_type =
    float;
  _rate_type rate;

  // setters for named parameter idiom
  Type & set__source_frames(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->source_frames = _arg;
    return *this;
  }
  Type & set__target_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->target_frame = _arg;
    return *this;
  }
  Type & set__angular_thres(
    const float & _arg)
  {
    this->angular_thres = _arg;
    return *this;
  }
  Type & set__trans_thres(
    const float & _arg)
  {
    this->trans_thres = _arg;
    return *this;
  }
  Type & set__rate(
    const float & _arg)
  {
    this->rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_Goal
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_Goal
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_Goal_ & other) const
  {
    if (this->source_frames != other.source_frames) {
      return false;
    }
    if (this->target_frame != other.target_frame) {
      return false;
    }
    if (this->angular_thres != other.angular_thres) {
      return false;
    }
    if (this->trans_thres != other.trans_thres) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_Goal_

// alias to use template instance with default allocator
using TFSubscription_Goal =
  tf2_web_republisher::action::TFSubscription_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher


#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_Result __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_Result __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_Result_
{
  using Type = TFSubscription_Result_<ContainerAllocator>;

  explicit TFSubscription_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TFSubscription_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_Result
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_Result
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_Result_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_Result_

// alias to use template instance with default allocator
using TFSubscription_Result =
  tf2_web_republisher::action::TFSubscription_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher


// Include directives for member types
// Member 'transforms'
#include "geometry_msgs/msg/detail/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_Feedback __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_Feedback_
{
  using Type = TFSubscription_Feedback_<ContainerAllocator>;

  explicit TFSubscription_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TFSubscription_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_Feedback
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_Feedback
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_Feedback_ & other) const
  {
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_Feedback_

// alias to use template instance with default allocator
using TFSubscription_Feedback =
  tf2_web_republisher::action::TFSubscription_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Request __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_SendGoal_Request_
{
  using Type = TFSubscription_SendGoal_Request_<ContainerAllocator>;

  explicit TFSubscription_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TFSubscription_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const tf2_web_republisher::action::TFSubscription_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Request
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Request
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_SendGoal_Request_

// alias to use template instance with default allocator
using TFSubscription_SendGoal_Request =
  tf2_web_republisher::action::TFSubscription_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Response __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_SendGoal_Response_
{
  using Type = TFSubscription_SendGoal_Response_<ContainerAllocator>;

  explicit TFSubscription_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TFSubscription_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Response
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_SendGoal_Response
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_SendGoal_Response_

// alias to use template instance with default allocator
using TFSubscription_SendGoal_Response =
  tf2_web_republisher::action::TFSubscription_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher

namespace tf2_web_republisher
{

namespace action
{

struct TFSubscription_SendGoal
{
  using Request = tf2_web_republisher::action::TFSubscription_SendGoal_Request;
  using Response = tf2_web_republisher::action::TFSubscription_SendGoal_Response;
};

}  // namespace action

}  // namespace tf2_web_republisher


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Request __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_GetResult_Request_
{
  using Type = TFSubscription_GetResult_Request_<ContainerAllocator>;

  explicit TFSubscription_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TFSubscription_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Request
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Request
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_GetResult_Request_

// alias to use template instance with default allocator
using TFSubscription_GetResult_Request =
  tf2_web_republisher::action::TFSubscription_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher


// Include directives for member types
// Member 'result'
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Response __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_GetResult_Response_
{
  using Type = TFSubscription_GetResult_Response_<ContainerAllocator>;

  explicit TFSubscription_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TFSubscription_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const tf2_web_republisher::action::TFSubscription_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Response
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_GetResult_Response
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_GetResult_Response_

// alias to use template instance with default allocator
using TFSubscription_GetResult_Response =
  tf2_web_republisher::action::TFSubscription_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher

namespace tf2_web_republisher
{

namespace action
{

struct TFSubscription_GetResult
{
  using Request = tf2_web_republisher::action::TFSubscription_GetResult_Request;
  using Response = tf2_web_republisher::action::TFSubscription_GetResult_Response;
};

}  // namespace action

}  // namespace tf2_web_republisher


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__tf2_web_republisher__action__TFSubscription_FeedbackMessage __declspec(deprecated)
#endif

namespace tf2_web_republisher
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TFSubscription_FeedbackMessage_
{
  using Type = TFSubscription_FeedbackMessage_<ContainerAllocator>;

  explicit TFSubscription_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TFSubscription_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const tf2_web_republisher::action::TFSubscription_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_FeedbackMessage
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tf2_web_republisher__action__TFSubscription_FeedbackMessage
    std::shared_ptr<tf2_web_republisher::action::TFSubscription_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TFSubscription_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TFSubscription_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TFSubscription_FeedbackMessage_

// alias to use template instance with default allocator
using TFSubscription_FeedbackMessage =
  tf2_web_republisher::action::TFSubscription_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace tf2_web_republisher

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace tf2_web_republisher
{

namespace action
{

struct TFSubscription
{
  /// The goal message defined in the action definition.
  using Goal = tf2_web_republisher::action::TFSubscription_Goal;
  /// The result message defined in the action definition.
  using Result = tf2_web_republisher::action::TFSubscription_Result;
  /// The feedback message defined in the action definition.
  using Feedback = tf2_web_republisher::action::TFSubscription_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = tf2_web_republisher::action::TFSubscription_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = tf2_web_republisher::action::TFSubscription_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = tf2_web_republisher::action::TFSubscription_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TFSubscription TFSubscription;

}  // namespace action

}  // namespace tf2_web_republisher

#endif  // TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__STRUCT_HPP_
