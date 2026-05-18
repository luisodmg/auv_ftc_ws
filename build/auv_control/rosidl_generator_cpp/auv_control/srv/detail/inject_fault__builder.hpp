// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from auv_control:srv/InjectFault.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__BUILDER_HPP_
#define AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "auv_control/srv/detail/inject_fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace auv_control
{

namespace srv
{

namespace builder
{

class Init_InjectFault_Request_ramp_seconds
{
public:
  explicit Init_InjectFault_Request_ramp_seconds(::auv_control::srv::InjectFault_Request & msg)
  : msg_(msg)
  {}
  ::auv_control::srv::InjectFault_Request ramp_seconds(::auv_control::srv::InjectFault_Request::_ramp_seconds_type arg)
  {
    msg_.ramp_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_control::srv::InjectFault_Request msg_;
};

class Init_InjectFault_Request_fault_type
{
public:
  explicit Init_InjectFault_Request_fault_type(::auv_control::srv::InjectFault_Request & msg)
  : msg_(msg)
  {}
  Init_InjectFault_Request_ramp_seconds fault_type(::auv_control::srv::InjectFault_Request::_fault_type_type arg)
  {
    msg_.fault_type = std::move(arg);
    return Init_InjectFault_Request_ramp_seconds(msg_);
  }

private:
  ::auv_control::srv::InjectFault_Request msg_;
};

class Init_InjectFault_Request_fault_factor
{
public:
  explicit Init_InjectFault_Request_fault_factor(::auv_control::srv::InjectFault_Request & msg)
  : msg_(msg)
  {}
  Init_InjectFault_Request_fault_type fault_factor(::auv_control::srv::InjectFault_Request::_fault_factor_type arg)
  {
    msg_.fault_factor = std::move(arg);
    return Init_InjectFault_Request_fault_type(msg_);
  }

private:
  ::auv_control::srv::InjectFault_Request msg_;
};

class Init_InjectFault_Request_thruster_id
{
public:
  Init_InjectFault_Request_thruster_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InjectFault_Request_fault_factor thruster_id(::auv_control::srv::InjectFault_Request::_thruster_id_type arg)
  {
    msg_.thruster_id = std::move(arg);
    return Init_InjectFault_Request_fault_factor(msg_);
  }

private:
  ::auv_control::srv::InjectFault_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_control::srv::InjectFault_Request>()
{
  return auv_control::srv::builder::Init_InjectFault_Request_thruster_id();
}

}  // namespace auv_control


namespace auv_control
{

namespace srv
{

namespace builder
{

class Init_InjectFault_Response_message
{
public:
  explicit Init_InjectFault_Response_message(::auv_control::srv::InjectFault_Response & msg)
  : msg_(msg)
  {}
  ::auv_control::srv::InjectFault_Response message(::auv_control::srv::InjectFault_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::auv_control::srv::InjectFault_Response msg_;
};

class Init_InjectFault_Response_accepted
{
public:
  Init_InjectFault_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InjectFault_Response_message accepted(::auv_control::srv::InjectFault_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_InjectFault_Response_message(msg_);
  }

private:
  ::auv_control::srv::InjectFault_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::auv_control::srv::InjectFault_Response>()
{
  return auv_control::srv::builder::Init_InjectFault_Response_accepted();
}

}  // namespace auv_control

#endif  // AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__BUILDER_HPP_
