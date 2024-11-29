// Generated by gencpp from file visual_patrol/SetTargetResponse.msg
// DO NOT EDIT!


#ifndef VISUAL_PATROL_MESSAGE_SETTARGETRESPONSE_H
#define VISUAL_PATROL_MESSAGE_SETTARGETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace visual_patrol
{
template <class ContainerAllocator>
struct SetTargetResponse_
{
  typedef SetTargetResponse_<ContainerAllocator> Type;

  SetTargetResponse_()
    : success(false)
    , message()  {
    }
  SetTargetResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::visual_patrol::SetTargetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::visual_patrol::SetTargetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetTargetResponse_

typedef ::visual_patrol::SetTargetResponse_<std::allocator<void> > SetTargetResponse;

typedef boost::shared_ptr< ::visual_patrol::SetTargetResponse > SetTargetResponsePtr;
typedef boost::shared_ptr< ::visual_patrol::SetTargetResponse const> SetTargetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::visual_patrol::SetTargetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::visual_patrol::SetTargetResponse_<ContainerAllocator1> & lhs, const ::visual_patrol::SetTargetResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::visual_patrol::SetTargetResponse_<ContainerAllocator1> & lhs, const ::visual_patrol::SetTargetResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace visual_patrol

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::visual_patrol::SetTargetResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::visual_patrol::SetTargetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::visual_patrol::SetTargetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::visual_patrol::SetTargetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "visual_patrol/SetTargetResponse";
  }

  static const char* value(const ::visual_patrol::SetTargetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string message\n"
"\n"
;
  }

  static const char* value(const ::visual_patrol::SetTargetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTargetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::visual_patrol::SetTargetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::visual_patrol::SetTargetResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISUAL_PATROL_MESSAGE_SETTARGETRESPONSE_H
