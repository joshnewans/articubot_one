// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_msgs:msg/BoundingBox2D.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_HPP_
#define YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'center'
#include "yolov8_msgs/msg/detail/pose2_d__struct.hpp"
// Member 'size'
#include "yolov8_msgs/msg/detail/vector2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__msg__BoundingBox2D __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__msg__BoundingBox2D __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBox2D_
{
  using Type = BoundingBox2D_<ContainerAllocator>;

  explicit BoundingBox2D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_init),
    size(_init)
  {
    (void)_init;
  }

  explicit BoundingBox2D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : center(_alloc, _init),
    size(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _center_type =
    yolov8_msgs::msg::Pose2D_<ContainerAllocator>;
  _center_type center;
  using _size_type =
    yolov8_msgs::msg::Vector2_<ContainerAllocator>;
  _size_type size;

  // setters for named parameter idiom
  Type & set__center(
    const yolov8_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->center = _arg;
    return *this;
  }
  Type & set__size(
    const yolov8_msgs::msg::Vector2_<ContainerAllocator> & _arg)
  {
    this->size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__msg__BoundingBox2D
    std::shared_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__msg__BoundingBox2D
    std::shared_ptr<yolov8_msgs::msg::BoundingBox2D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBox2D_ & other) const
  {
    if (this->center != other.center) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBox2D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBox2D_

// alias to use template instance with default allocator
using BoundingBox2D =
  yolov8_msgs::msg::BoundingBox2D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__MSG__DETAIL__BOUNDING_BOX2_D__STRUCT_HPP_
