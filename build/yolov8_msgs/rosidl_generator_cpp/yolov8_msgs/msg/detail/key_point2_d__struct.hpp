// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_msgs:msg/KeyPoint2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__KEY_POINT2_D__STRUCT_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__KEY_POINT2_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point'
#include "yolov8_msgs/msg/detail/point2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__msg__KeyPoint2D __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__msg__KeyPoint2D __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KeyPoint2D_
{
  using Type = KeyPoint2D_<ContainerAllocator>;

  explicit KeyPoint2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->score = 0.0;
    }
  }

  explicit KeyPoint2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->score = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _point_type =
    yolov8_msgs::msg::Point2D_<ContainerAllocator>;
  _point_type point;
  using _score_type =
    double;
  _score_type score;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__point(
    const yolov8_msgs::msg::Point2D_<ContainerAllocator> & _arg)
  {
    this->point = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__msg__KeyPoint2D
    std::shared_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__msg__KeyPoint2D
    std::shared_ptr<yolov8_msgs::msg::KeyPoint2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KeyPoint2D_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->point != other.point) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const KeyPoint2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KeyPoint2D_

// alias to use template instance with default allocator
using KeyPoint2D =
  yolov8_msgs::msg::KeyPoint2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__KEY_POINT2_D__STRUCT_HPP_
