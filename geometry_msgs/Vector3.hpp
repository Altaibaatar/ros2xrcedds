// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file Vector3.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _GEOMETRY_MSGS_VECTOR3_HPP_
#define _GEOMETRY_MSGS_VECTOR3_HPP_


#include <ros2/topic.hpp>


namespace geometry_msgs {

class Vector3 : public ros2::Topic<Vector3>
{
public:
    double x;
    double y;
    double z;

  Vector3():
    Topic("geometry_msgs::msg::dds_::Vector3_", "Vector3"),
    x(0), y(0), z(0)
  { 
  }


  bool serialize(void* msg_buf, const Vector3* topic)
  {
    ucdrBuffer* writer = (ucdrBuffer*)msg_buf;
    (void) ucdr_serialize_double(writer, topic->x);
    (void) ucdr_serialize_double(writer, topic->y);
    (void) ucdr_serialize_double(writer, topic->z);

    return !writer->error;
  }

  bool deserialize(void* msg_buf, Vector3* topic)
  {
    ucdrBuffer* reader = (ucdrBuffer*)msg_buf;
    (void) ucdr_deserialize_double(reader, &topic->x);
    (void) ucdr_deserialize_double(reader, &topic->y);
    (void) ucdr_deserialize_double(reader, &topic->z);

    return !reader->error;
  }

  uint32_t size_of_topic(const Vector3* topic, uint32_t size)
  {
    (void)(topic);

    uint32_t previousSize = size;
    size += ucdr_alignment(size, 8) + 8;
    size += ucdr_alignment(size, 8) + 8;
    size += ucdr_alignment(size, 8) + 8;

    return size - previousSize;
  }



};

} // namespace geometry_msgs


#endif // _GEOMETRY_MSGS_VECTOR3_HPP_
