/**
 * Autogenerated by Thrift Compiler (0.9.1)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef student_TYPES_H
#define student_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>


namespace teststudent {

typedef struct _Student__isset {
  _Student__isset() : no(false), name(false), age(false) {}
  bool no;
  bool name;
  bool age;
} _Student__isset;

class Student {
 public:

  static const char* ascii_fingerprint; // = "52F7D5E8217C4B8FC14F1F30BF2EB41C";
  static const uint8_t binary_fingerprint[16]; // = {0x52,0xF7,0xD5,0xE8,0x21,0x7C,0x4B,0x8F,0xC1,0x4F,0x1F,0x30,0xBF,0x2E,0xB4,0x1C};

  Student() : no(), name(), age(0) {
  }

  virtual ~Student() throw() {}

  std::string no;
  std::string name;
  int16_t age;

  _Student__isset __isset;

  void __set_no(const std::string& val) {
    no = val;
  }

  void __set_name(const std::string& val) {
    name = val;
  }

  void __set_age(const int16_t val) {
    age = val;
  }

  bool operator == (const Student & rhs) const
  {
    if (!(no == rhs.no))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(age == rhs.age))
      return false;
    return true;
  }
  bool operator != (const Student &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Student & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Student &a, Student &b);

} // namespace

#endif