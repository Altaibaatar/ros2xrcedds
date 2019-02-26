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
 * @file TFMessage.hpp
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */
#ifndef _TF2_MSGS_TRANSFORM_STAMPED_HPP_
#define _TF2_MSGS_TRANSFORM_STAMPED_HPP_


#include "../topic.hpp"
#include "../geometry_msgs/TransformStamped.hpp"


namespace tf2_msgs {

class TFMessage : public ros2::Topic<TFMessage>
{
public: 
  geometry_msgs::TransformStamped transforms[4];

  TFMessage():
    Topic("tf2_msgs::msg::dds_::TFMessage_", "TFMessage")
  { 
  }

  bool serialize(void* msg_buf, const TFMessage* topic)
  {
    ucdrBuffer* writer = (ucdrBuffer*)msg_buf;
    for(uint8_t i = 0; i < sizeof(transforms)/sizeof(geometry_msgs::TransformStamped); i++)
    {
      (void) transforms[i].serialize(writer, &topic->transforms[i]);
    }

    return !writer->error;
  }

  bool deserialize(void* msg_buf, TFMessage* topic)
  {
    ucdrBuffer* reader = (ucdrBuffer*)msg_buf;
    for(uint8_t i = 0; i < sizeof(transforms)/sizeof(geometry_msgs::TransformStamped); i++)
    {
      (void) transforms[i].deserialize(reader, &topic->transforms[i]);
    }
    
    return !reader->error;
  }

  uint32_t size_of_topic(const TFMessage* topic, uint32_t size)
  {
    uint32_t previousSize = size;
    for(uint8_t i = 0; i < sizeof(transforms)/sizeof(geometry_msgs::TransformStamped); i++)
    {
      size += transforms[i].size_of_topic(&topic->transforms[i], size);
    }

    return size - previousSize;
  }

};

} // namespace tf2_msgs


#endif // _TF2_MSGS_TRANSFORM_STAMPED_HPP_
