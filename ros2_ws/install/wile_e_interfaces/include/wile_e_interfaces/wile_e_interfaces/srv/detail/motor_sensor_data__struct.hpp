// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wile_e_interfaces:srv/MotorSensorData.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__STRUCT_HPP_
#define WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Request __attribute__((deprecated))
#else
# define DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Request __declspec(deprecated)
#endif

namespace wile_e_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorSensorData_Request_
{
  using Type = MotorSensorData_Request_<ContainerAllocator>;

  explicit MotorSensorData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->call = false;
    }
  }

  explicit MotorSensorData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->call = false;
    }
  }

  // field types and members
  using _call_type =
    bool;
  _call_type call;

  // setters for named parameter idiom
  Type & set__call(
    const bool & _arg)
  {
    this->call = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Request
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Request
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorSensorData_Request_ & other) const
  {
    if (this->call != other.call) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorSensorData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorSensorData_Request_

// alias to use template instance with default allocator
using MotorSensorData_Request =
  wile_e_interfaces::srv::MotorSensorData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wile_e_interfaces


#ifndef _WIN32
# define DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Response __attribute__((deprecated))
#else
# define DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Response __declspec(deprecated)
#endif

namespace wile_e_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MotorSensorData_Response_
{
  using Type = MotorSensorData_Response_<ContainerAllocator>;

  explicit MotorSensorData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_shoulder = 0;
      this->right_shoulder = 0;
      this->left_elbow = 0;
      this->right_elbow = 0;
    }
  }

  explicit MotorSensorData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_shoulder = 0;
      this->right_shoulder = 0;
      this->left_elbow = 0;
      this->right_elbow = 0;
    }
  }

  // field types and members
  using _left_shoulder_type =
    int16_t;
  _left_shoulder_type left_shoulder;
  using _right_shoulder_type =
    int16_t;
  _right_shoulder_type right_shoulder;
  using _left_elbow_type =
    uint16_t;
  _left_elbow_type left_elbow;
  using _right_elbow_type =
    uint16_t;
  _right_elbow_type right_elbow;

  // setters for named parameter idiom
  Type & set__left_shoulder(
    const int16_t & _arg)
  {
    this->left_shoulder = _arg;
    return *this;
  }
  Type & set__right_shoulder(
    const int16_t & _arg)
  {
    this->right_shoulder = _arg;
    return *this;
  }
  Type & set__left_elbow(
    const uint16_t & _arg)
  {
    this->left_elbow = _arg;
    return *this;
  }
  Type & set__right_elbow(
    const uint16_t & _arg)
  {
    this->right_elbow = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Response
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wile_e_interfaces__srv__MotorSensorData_Response
    std::shared_ptr<wile_e_interfaces::srv::MotorSensorData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorSensorData_Response_ & other) const
  {
    if (this->left_shoulder != other.left_shoulder) {
      return false;
    }
    if (this->right_shoulder != other.right_shoulder) {
      return false;
    }
    if (this->left_elbow != other.left_elbow) {
      return false;
    }
    if (this->right_elbow != other.right_elbow) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorSensorData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorSensorData_Response_

// alias to use template instance with default allocator
using MotorSensorData_Response =
  wile_e_interfaces::srv::MotorSensorData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace wile_e_interfaces

namespace wile_e_interfaces
{

namespace srv
{

struct MotorSensorData
{
  using Request = wile_e_interfaces::srv::MotorSensorData_Request;
  using Response = wile_e_interfaces::srv::MotorSensorData_Response;
};

}  // namespace srv

}  // namespace wile_e_interfaces

#endif  // WILE_E_INTERFACES__SRV__DETAIL__MOTOR_SENSOR_DATA__STRUCT_HPP_
