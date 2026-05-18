// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from auv_control:srv/InjectFault.idl
// generated code does not contain a copyright notice

#ifndef AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__TRAITS_HPP_
#define AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "auv_control/srv/detail/inject_fault__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace auv_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const InjectFault_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: thruster_id
  {
    out << "thruster_id: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_id, out);
    out << ", ";
  }

  // member: fault_factor
  {
    out << "fault_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_factor, out);
    out << ", ";
  }

  // member: fault_type
  {
    out << "fault_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_type, out);
    out << ", ";
  }

  // member: ramp_seconds
  {
    out << "ramp_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_seconds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InjectFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: thruster_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thruster_id: ";
    rosidl_generator_traits::value_to_yaml(msg.thruster_id, out);
    out << "\n";
  }

  // member: fault_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_factor, out);
    out << "\n";
  }

  // member: fault_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fault_type, out);
    out << "\n";
  }

  // member: ramp_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ramp_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.ramp_seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InjectFault_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace auv_control

namespace rosidl_generator_traits
{

[[deprecated("use auv_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const auv_control::srv::InjectFault_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  auv_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auv_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const auv_control::srv::InjectFault_Request & msg)
{
  return auv_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<auv_control::srv::InjectFault_Request>()
{
  return "auv_control::srv::InjectFault_Request";
}

template<>
inline const char * name<auv_control::srv::InjectFault_Request>()
{
  return "auv_control/srv/InjectFault_Request";
}

template<>
struct has_fixed_size<auv_control::srv::InjectFault_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auv_control::srv::InjectFault_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auv_control::srv::InjectFault_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace auv_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const InjectFault_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InjectFault_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InjectFault_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace auv_control

namespace rosidl_generator_traits
{

[[deprecated("use auv_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const auv_control::srv::InjectFault_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  auv_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use auv_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const auv_control::srv::InjectFault_Response & msg)
{
  return auv_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<auv_control::srv::InjectFault_Response>()
{
  return "auv_control::srv::InjectFault_Response";
}

template<>
inline const char * name<auv_control::srv::InjectFault_Response>()
{
  return "auv_control/srv/InjectFault_Response";
}

template<>
struct has_fixed_size<auv_control::srv::InjectFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<auv_control::srv::InjectFault_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<auv_control::srv::InjectFault_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<auv_control::srv::InjectFault>()
{
  return "auv_control::srv::InjectFault";
}

template<>
inline const char * name<auv_control::srv::InjectFault>()
{
  return "auv_control/srv/InjectFault";
}

template<>
struct has_fixed_size<auv_control::srv::InjectFault>
  : std::integral_constant<
    bool,
    has_fixed_size<auv_control::srv::InjectFault_Request>::value &&
    has_fixed_size<auv_control::srv::InjectFault_Response>::value
  >
{
};

template<>
struct has_bounded_size<auv_control::srv::InjectFault>
  : std::integral_constant<
    bool,
    has_bounded_size<auv_control::srv::InjectFault_Request>::value &&
    has_bounded_size<auv_control::srv::InjectFault_Response>::value
  >
{
};

template<>
struct is_service<auv_control::srv::InjectFault>
  : std::true_type
{
};

template<>
struct is_service_request<auv_control::srv::InjectFault_Request>
  : std::true_type
{
};

template<>
struct is_service_response<auv_control::srv::InjectFault_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AUV_CONTROL__SRV__DETAIL__INJECT_FAULT__TRAITS_HPP_
