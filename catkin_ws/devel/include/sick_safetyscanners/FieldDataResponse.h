// Generated by gencpp from file sick_safetyscanners/FieldDataResponse.msg
// DO NOT EDIT!


#ifndef SICK_SAFETYSCANNERS_MESSAGE_FIELDDATARESPONSE_H
#define SICK_SAFETYSCANNERS_MESSAGE_FIELDDATARESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sick_safetyscanners/FieldMsg.h>
#include <sick_safetyscanners/MonitoringCaseMsg.h>

namespace sick_safetyscanners
{
template <class ContainerAllocator>
struct FieldDataResponse_
{
  typedef FieldDataResponse_<ContainerAllocator> Type;

  FieldDataResponse_()
    : fields()
    , device_name()
    , monitoring_cases()  {
    }
  FieldDataResponse_(const ContainerAllocator& _alloc)
    : fields(_alloc)
    , device_name(_alloc)
    , monitoring_cases(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::sick_safetyscanners::FieldMsg_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sick_safetyscanners::FieldMsg_<ContainerAllocator> >::other >  _fields_type;
  _fields_type fields;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _device_name_type;
  _device_name_type device_name;

   typedef std::vector< ::sick_safetyscanners::MonitoringCaseMsg_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sick_safetyscanners::MonitoringCaseMsg_<ContainerAllocator> >::other >  _monitoring_cases_type;
  _monitoring_cases_type monitoring_cases;





  typedef boost::shared_ptr< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FieldDataResponse_

typedef ::sick_safetyscanners::FieldDataResponse_<std::allocator<void> > FieldDataResponse;

typedef boost::shared_ptr< ::sick_safetyscanners::FieldDataResponse > FieldDataResponsePtr;
typedef boost::shared_ptr< ::sick_safetyscanners::FieldDataResponse const> FieldDataResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator1> & lhs, const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator2> & rhs)
{
  return lhs.fields == rhs.fields &&
    lhs.device_name == rhs.device_name &&
    lhs.monitoring_cases == rhs.monitoring_cases;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator1> & lhs, const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_safetyscanners

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "649f88740cfa9dc91cefbf73ed47045b";
  }

  static const char* value(const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x649f88740cfa9dc9ULL;
  static const uint64_t static_value2 = 0x1cefbf73ed47045bULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_safetyscanners/FieldDataResponse";
  }

  static const char* value(const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"sick_safetyscanners/FieldMsg[] fields\n"
"string device_name\n"
"sick_safetyscanners/MonitoringCaseMsg[] monitoring_cases\n"
"\n"
"\n"
"================================================================================\n"
"MSG: sick_safetyscanners/FieldMsg\n"
"float32[] ranges\n"
"float32 start_angle\n"
"float32 angular_resolution\n"
"bool protective_field\n"
"\n"
"================================================================================\n"
"MSG: sick_safetyscanners/MonitoringCaseMsg\n"
"int32 monitoring_case_number\n"
"int32[] fields\n"
"bool[] fields_valid\n"
;
  }

  static const char* value(const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.fields);
      stream.next(m.device_name);
      stream.next(m.monitoring_cases);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FieldDataResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_safetyscanners::FieldDataResponse_<ContainerAllocator>& v)
  {
    s << indent << "fields[]" << std::endl;
    for (size_t i = 0; i < v.fields.size(); ++i)
    {
      s << indent << "  fields[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sick_safetyscanners::FieldMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.fields[i]);
    }
    s << indent << "device_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.device_name);
    s << indent << "monitoring_cases[]" << std::endl;
    for (size_t i = 0; i < v.monitoring_cases.size(); ++i)
    {
      s << indent << "  monitoring_cases[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sick_safetyscanners::MonitoringCaseMsg_<ContainerAllocator> >::stream(s, indent + "    ", v.monitoring_cases[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SAFETYSCANNERS_MESSAGE_FIELDDATARESPONSE_H