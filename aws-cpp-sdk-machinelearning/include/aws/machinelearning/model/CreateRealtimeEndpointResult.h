﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/RealtimeEndpointInfo.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of an <code>CreateRealtimeEndpoint</code>
   * operation.</p> <p>The result contains the <code>MLModelId</code> and the
   * endpoint information for the <code>MLModel</code>.</p> <p> <b>Note:</b> The
   * endpoint information includes the URI of the <code>MLModel</code>; that is, the
   * location to send online prediction requests for the specified
   * <code>MLModel</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/CreateRealtimeEndpointOutput">AWS
   * API Reference</a></p>
   */
  class CreateRealtimeEndpointResult
  {
  public:
    AWS_MACHINELEARNING_API CreateRealtimeEndpointResult();
    AWS_MACHINELEARNING_API CreateRealtimeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API CreateRealtimeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline CreateRealtimeEndpointResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline CreateRealtimeEndpointResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>A user-supplied ID that uniquely identifies the <code>MLModel</code>. This
     * value should be identical to the value of the <code>MLModelId</code> in the
     * request.</p>
     */
    inline CreateRealtimeEndpointResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>The endpoint information of the <code>MLModel</code> </p>
     */
    inline const RealtimeEndpointInfo& GetRealtimeEndpointInfo() const{ return m_realtimeEndpointInfo; }

    /**
     * <p>The endpoint information of the <code>MLModel</code> </p>
     */
    inline void SetRealtimeEndpointInfo(const RealtimeEndpointInfo& value) { m_realtimeEndpointInfo = value; }

    /**
     * <p>The endpoint information of the <code>MLModel</code> </p>
     */
    inline void SetRealtimeEndpointInfo(RealtimeEndpointInfo&& value) { m_realtimeEndpointInfo = std::move(value); }

    /**
     * <p>The endpoint information of the <code>MLModel</code> </p>
     */
    inline CreateRealtimeEndpointResult& WithRealtimeEndpointInfo(const RealtimeEndpointInfo& value) { SetRealtimeEndpointInfo(value); return *this;}

    /**
     * <p>The endpoint information of the <code>MLModel</code> </p>
     */
    inline CreateRealtimeEndpointResult& WithRealtimeEndpointInfo(RealtimeEndpointInfo&& value) { SetRealtimeEndpointInfo(std::move(value)); return *this;}

  private:

    Aws::String m_mLModelId;

    RealtimeEndpointInfo m_realtimeEndpointInfo;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
