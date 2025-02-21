﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class UpdateStreamResult
  {
  public:
    AWS_IOT_API UpdateStreamResult();
    AWS_IOT_API UpdateStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline UpdateStreamResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline UpdateStreamResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline UpdateStreamResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>The stream ARN.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArn = value; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArn = std::move(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArn.assign(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline UpdateStreamResult& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline UpdateStreamResult& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline UpdateStreamResult& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>A description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline UpdateStreamResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline UpdateStreamResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline UpdateStreamResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The stream version.</p>
     */
    inline int GetStreamVersion() const{ return m_streamVersion; }

    /**
     * <p>The stream version.</p>
     */
    inline void SetStreamVersion(int value) { m_streamVersion = value; }

    /**
     * <p>The stream version.</p>
     */
    inline UpdateStreamResult& WithStreamVersion(int value) { SetStreamVersion(value); return *this;}

  private:

    Aws::String m_streamId;

    Aws::String m_streamArn;

    Aws::String m_description;

    int m_streamVersion;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
