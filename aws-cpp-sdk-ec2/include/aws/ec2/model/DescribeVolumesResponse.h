﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Volume.h>
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
  class DescribeVolumesResponse
  {
  public:
    AWS_EC2_API DescribeVolumesResponse();
    AWS_EC2_API DescribeVolumesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVolumesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the volumes.</p>
     */
    inline const Aws::Vector<Volume>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>Information about the volumes.</p>
     */
    inline void SetVolumes(const Aws::Vector<Volume>& value) { m_volumes = value; }

    /**
     * <p>Information about the volumes.</p>
     */
    inline void SetVolumes(Aws::Vector<Volume>&& value) { m_volumes = std::move(value); }

    /**
     * <p>Information about the volumes.</p>
     */
    inline DescribeVolumesResponse& WithVolumes(const Aws::Vector<Volume>& value) { SetVolumes(value); return *this;}

    /**
     * <p>Information about the volumes.</p>
     */
    inline DescribeVolumesResponse& WithVolumes(Aws::Vector<Volume>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>Information about the volumes.</p>
     */
    inline DescribeVolumesResponse& AddVolumes(const Volume& value) { m_volumes.push_back(value); return *this; }

    /**
     * <p>Information about the volumes.</p>
     */
    inline DescribeVolumesResponse& AddVolumes(Volume&& value) { m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumes</code> request. When the results of a
     * <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumes</code> request. When the results of a
     * <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumes</code> request. When the results of a
     * <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumes</code> request. When the results of a
     * <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumes</code> request. When the results of a
     * <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVolumesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumes</code> request. When the results of a
     * <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVolumesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumes</code> request. When the results of a
     * <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeVolumesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeVolumesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVolumesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Volume> m_volumes;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
