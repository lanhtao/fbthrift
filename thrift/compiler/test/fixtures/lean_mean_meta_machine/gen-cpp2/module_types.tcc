/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/lean_mean_meta_machine/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>
#include <thrift/lib/cpp2/GeneratedSerializationCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
#include "thrift/compiler/test/fixtures/lean_mean_meta_machine/gen-cpp2/module_fatal.h"
#include <thrift/lib/cpp2/fatal/serializer.h>
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union1::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union1::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union1::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union1::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union2::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union2::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union2::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union2::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union3::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union3::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union3::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union3::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t structA::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t structA::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t structA::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t structA::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t unionA::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t unionA::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t unionA::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t unionA::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t structB::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t structB::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t structB::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t structB::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t structC::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t structC::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t structC::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t structC::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct1::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct1::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct1::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct1::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct2::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct2::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct2::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct2::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct3::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct3::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct3::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct3::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct4::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct4::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct4::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct4::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct_binary::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct_binary::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_binary::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_binary::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t union_with_special_names::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t union_with_special_names::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t union_with_special_names::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t union_with_special_names::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

template <class Protocol_>
uint32_t struct_with_special_names::read(Protocol_* iprot) {
  return ::apache::thrift::serializer_read(*this, *iprot);
}

template <class Protocol_>
uint32_t struct_with_special_names::serializedSize(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_with_special_names::serializedSizeZC(Protocol_ const* prot_) const {
  return ::apache::thrift::serializer_serialized_size_zc(*this, *prot_);
}

template <class Protocol_>
uint32_t struct_with_special_names::write(Protocol_* prot_) const {
  return ::apache::thrift::serializer_write(*this, *prot_);
}

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
namespace test_cpp2 { namespace cpp_reflection {

}} // test_cpp2::cpp_reflection
