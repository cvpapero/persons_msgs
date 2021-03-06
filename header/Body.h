// Generated by gencpp from file persons_msgs/Body.msg
// DO NOT EDIT!


#ifndef PERSONS_MSGS_MESSAGE_BODY_H
#define PERSONS_MSGS_MESSAGE_BODY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <persons_msgs/Joint.h>
#include <persons_msgs/FaceInfo.h>

namespace persons_msgs
{
template <class ContainerAllocator>
struct Body_
{
  typedef Body_<ContainerAllocator> Type;

  Body_()
    : tracking_id(0)
    , is_tracked(false)
    , is_speaked(false)
    , left_hand_state(0.0)
    , right_hand_state(0.0)
    , joints()
    , face_info()  {
    }
  Body_(const ContainerAllocator& _alloc)
    : tracking_id(0)
    , is_tracked(false)
    , is_speaked(false)
    , left_hand_state(0.0)
    , right_hand_state(0.0)
    , joints(_alloc)
    , face_info(_alloc)  {
  (void)_alloc;
    }



   typedef int64_t _tracking_id_type;
  _tracking_id_type tracking_id;

   typedef uint8_t _is_tracked_type;
  _is_tracked_type is_tracked;

   typedef uint8_t _is_speaked_type;
  _is_speaked_type is_speaked;

   typedef double _left_hand_state_type;
  _left_hand_state_type left_hand_state;

   typedef double _right_hand_state_type;
  _right_hand_state_type right_hand_state;

   typedef std::vector< ::persons_msgs::Joint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::persons_msgs::Joint_<ContainerAllocator> >::other >  _joints_type;
  _joints_type joints;

   typedef  ::persons_msgs::FaceInfo_<ContainerAllocator>  _face_info_type;
  _face_info_type face_info;




  typedef boost::shared_ptr< ::persons_msgs::Body_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::persons_msgs::Body_<ContainerAllocator> const> ConstPtr;

}; // struct Body_

typedef ::persons_msgs::Body_<std::allocator<void> > Body;

typedef boost::shared_ptr< ::persons_msgs::Body > BodyPtr;
typedef boost::shared_ptr< ::persons_msgs::Body const> BodyConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::persons_msgs::Body_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::persons_msgs::Body_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace persons_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'persons_msgs': ['/home/uema/catkin_ws/src/persons_msgs/msg', '/home/uema/catkin_ws/src/persons_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::persons_msgs::Body_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::persons_msgs::Body_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::persons_msgs::Body_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::persons_msgs::Body_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::persons_msgs::Body_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::persons_msgs::Body_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::persons_msgs::Body_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dcc414a7005d7a456c97c7a4fbb1f310";
  }

  static const char* value(const ::persons_msgs::Body_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdcc414a7005d7a45ULL;
  static const uint64_t static_value2 = 0x6c97c7a4fbb1f310ULL;
};

template<class ContainerAllocator>
struct DataType< ::persons_msgs::Body_<ContainerAllocator> >
{
  static const char* value()
  {
    return "persons_msgs/Body";
  }

  static const char* value(const ::persons_msgs::Body_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::persons_msgs::Body_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int64 tracking_id\n\
bool is_tracked\n\
bool is_speaked\n\
float64 left_hand_state\n\
float64 right_hand_state\n\
persons_msgs/Joint[] joints \n\
persons_msgs/FaceInfo face_info\n\
\n\
================================================================================\n\
MSG: persons_msgs/Joint\n\
string joint_name\n\
float64 tracking_state\n\
geometry_msgs/Point position_color_space\n\
geometry_msgs/Point position\n\
geometry_msgs/Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: persons_msgs/FaceInfo\n\
bool is_tracked\n\
persons_msgs/Rotation rotation\n\
persons_msgs/FaceProp propertie\n\
\n\
================================================================================\n\
MSG: persons_msgs/Rotation\n\
float64 r\n\
float64 p\n\
float64 y\n\
\n\
================================================================================\n\
MSG: persons_msgs/FaceProp\n\
string happy\n\
string engaged\n\
string wearing_glasses\n\
string right_eye_closed\n\
string left_eye_closed\n\
string mouth_open\n\
string mouth_moved\n\
string looking_away\n\
";
  }

  static const char* value(const ::persons_msgs::Body_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::persons_msgs::Body_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tracking_id);
      stream.next(m.is_tracked);
      stream.next(m.is_speaked);
      stream.next(m.left_hand_state);
      stream.next(m.right_hand_state);
      stream.next(m.joints);
      stream.next(m.face_info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Body_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::persons_msgs::Body_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::persons_msgs::Body_<ContainerAllocator>& v)
  {
    s << indent << "tracking_id: ";
    Printer<int64_t>::stream(s, indent + "  ", v.tracking_id);
    s << indent << "is_tracked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_tracked);
    s << indent << "is_speaked: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_speaked);
    s << indent << "left_hand_state: ";
    Printer<double>::stream(s, indent + "  ", v.left_hand_state);
    s << indent << "right_hand_state: ";
    Printer<double>::stream(s, indent + "  ", v.right_hand_state);
    s << indent << "joints[]" << std::endl;
    for (size_t i = 0; i < v.joints.size(); ++i)
    {
      s << indent << "  joints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::persons_msgs::Joint_<ContainerAllocator> >::stream(s, indent + "    ", v.joints[i]);
    }
    s << indent << "face_info: ";
    s << std::endl;
    Printer< ::persons_msgs::FaceInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.face_info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERSONS_MSGS_MESSAGE_BODY_H
