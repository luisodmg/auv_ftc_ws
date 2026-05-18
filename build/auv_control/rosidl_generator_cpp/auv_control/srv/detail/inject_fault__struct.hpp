// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from auv_control:srv/InjectFault.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__STRUCT_HPP_
#define AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__auv_control__srv__InjectFault_Request __attribute__((deprecated))
#else
# define DEPRECATED__auv_control__srv__InjectFault_Request __declspec(deprecated)
#endif

namespace auv_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InjectFault_Request_
{
  using Type = InjectFault_Request_<ContainerAllocator>;

  explicit InjectFault_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thruster_id = 0l;
      this->fault_factor = 0.0;
      this->fault_type = "";
      this->ramp_seconds = 0.0;
    }
  }

  explicit InjectFault_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fault_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thruster_id = 0l;
      this->fault_factor = 0.0;
      this->fault_type = "";
      this->ramp_seconds = 0.0;
    }
  }

  // field types and members
  using _thruster_id_type =
    int32_t;
  _thruster_id_type thruster_id;
  using _fault_factor_type =
    double;
  _fault_factor_type fault_factor;
  using _fault_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fault_type_type fault_type;
  using _ramp_seconds_type =
    double;
  _ramp_seconds_type ramp_seconds;

  // setters for named parameter idiom
  Type & set__thruster_id(
    const int32_t & _arg)
  {
    this->thruster_id = _arg;
    return *this;
  }
  Type & set__fault_factor(
    const double & _arg)
  {
    this->fault_factor = _arg;
    return *this;
  }
  Type & set__fault_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fault_type = _arg;
    return *this;
  }
  Type & set__ramp_seconds(
    const double & _arg)
  {
    this->ramp_seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auv_control::srv::InjectFault_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_control::srv::InjectFault_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_control::srv::InjectFault_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_control::srv::InjectFault_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_control__srv__InjectFault_Request
    std::shared_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_control__srv__InjectFault_Request
    std::shared_ptr<auv_control::srv::InjectFault_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InjectFault_Request_ & other) const
  {
    if (this->thruster_id != other.thruster_id) {
      return false;
    }
    if (this->fault_factor != other.fault_factor) {
      return false;
    }
    if (this->fault_type != other.fault_type) {
      return false;
    }
    if (this->ramp_seconds != other.ramp_seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const InjectFault_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InjectFault_Request_

// alias to use template instance with default allocator
using InjectFault_Request =
  auv_control::srv::InjectFault_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace auv_control


#ifndef _WIN32
# define DEPRECATED__auv_control__srv__InjectFault_Response __attribute__((deprecated))
#else
# define DEPRECATED__auv_control__srv__InjectFault_Response __declspec(deprecated)
#endif

namespace auv_control
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct InjectFault_Response_
{
  using Type = InjectFault_Response_<ContainerAllocator>;

  explicit InjectFault_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  explicit InjectFault_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
      this->message = "";
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    auv_control::srv::InjectFault_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const auv_control::srv::InjectFault_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      auv_control::srv::InjectFault_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      auv_control::srv::InjectFault_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__auv_control__srv__InjectFault_Response
    std::shared_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__auv_control__srv__InjectFault_Response
    std::shared_ptr<auv_control::srv::InjectFault_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InjectFault_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const InjectFault_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InjectFault_Response_

// alias to use template instance with default allocator
using InjectFault_Response =
  auv_control::srv::InjectFault_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace auv_control

namespace auv_control
{

namespace srv
{

struct InjectFault
{
  using Request = auv_control::srv::InjectFault_Request;
  using Response = auv_control::srv::InjectFault_Response;
};

}  // namespace srv

}  // namespace auv_control

#endif  // AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__STRUCT_HPP_
