// Generated by gencpp from file astra_camera/SetMirror.msg
// DO NOT EDIT!


#ifndef ASTRA_CAMERA_MESSAGE_SETMIRROR_H
#define ASTRA_CAMERA_MESSAGE_SETMIRROR_H

#include <ros/service_traits.h>


#include <astra_camera/SetMirrorRequest.h>
#include <astra_camera/SetMirrorResponse.h>


namespace astra_camera
{

struct SetMirror
{

typedef SetMirrorRequest Request;
typedef SetMirrorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetMirror
} // namespace astra_camera


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::astra_camera::SetMirror > {
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::astra_camera::SetMirror&) { return value(); }
};

template<>
struct DataType< ::astra_camera::SetMirror > {
  static const char* value()
  {
    return "astra_camera/SetMirror";
  }

  static const char* value(const ::astra_camera::SetMirror&) { return value(); }
};


// service_traits::MD5Sum< ::astra_camera::SetMirrorRequest> should match
// service_traits::MD5Sum< ::astra_camera::SetMirror >
template<>
struct MD5Sum< ::astra_camera::SetMirrorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::SetMirror >::value();
  }
  static const char* value(const ::astra_camera::SetMirrorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::SetMirrorRequest> should match
// service_traits::DataType< ::astra_camera::SetMirror >
template<>
struct DataType< ::astra_camera::SetMirrorRequest>
{
  static const char* value()
  {
    return DataType< ::astra_camera::SetMirror >::value();
  }
  static const char* value(const ::astra_camera::SetMirrorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::astra_camera::SetMirrorResponse> should match
// service_traits::MD5Sum< ::astra_camera::SetMirror >
template<>
struct MD5Sum< ::astra_camera::SetMirrorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::astra_camera::SetMirror >::value();
  }
  static const char* value(const ::astra_camera::SetMirrorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::astra_camera::SetMirrorResponse> should match
// service_traits::DataType< ::astra_camera::SetMirror >
template<>
struct DataType< ::astra_camera::SetMirrorResponse>
{
  static const char* value()
  {
    return DataType< ::astra_camera::SetMirror >::value();
  }
  static const char* value(const ::astra_camera::SetMirrorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ASTRA_CAMERA_MESSAGE_SETMIRROR_H
