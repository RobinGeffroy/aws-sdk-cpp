﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceTagNotificationAttribute.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API DescribeInstanceEventNotificationAttributesResponse
  {
  public:
    DescribeInstanceEventNotificationAttributesResponse();
    DescribeInstanceEventNotificationAttributesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeInstanceEventNotificationAttributesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the registered tag keys.</p>
     */
    inline const InstanceTagNotificationAttribute& GetInstanceTagAttribute() const{ return m_instanceTagAttribute; }

    /**
     * <p>Information about the registered tag keys.</p>
     */
    inline void SetInstanceTagAttribute(const InstanceTagNotificationAttribute& value) { m_instanceTagAttribute = value; }

    /**
     * <p>Information about the registered tag keys.</p>
     */
    inline void SetInstanceTagAttribute(InstanceTagNotificationAttribute&& value) { m_instanceTagAttribute = std::move(value); }

    /**
     * <p>Information about the registered tag keys.</p>
     */
    inline DescribeInstanceEventNotificationAttributesResponse& WithInstanceTagAttribute(const InstanceTagNotificationAttribute& value) { SetInstanceTagAttribute(value); return *this;}

    /**
     * <p>Information about the registered tag keys.</p>
     */
    inline DescribeInstanceEventNotificationAttributesResponse& WithInstanceTagAttribute(InstanceTagNotificationAttribute&& value) { SetInstanceTagAttribute(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeInstanceEventNotificationAttributesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeInstanceEventNotificationAttributesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InstanceTagNotificationAttribute m_instanceTagAttribute;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
