﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/elastictranscoder/model/Pipeline.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/Warning.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>The <code>ReadPipelineResponse</code> structure.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ReadPipelineResponse">AWS
   * API Reference</a></p>
   */
  class ReadPipelineResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ReadPipelineResult();
    AWS_ELASTICTRANSCODER_API ReadPipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ReadPipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline const Pipeline& GetPipeline() const{ return m_pipeline; }

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline void SetPipeline(const Pipeline& value) { m_pipeline = value; }

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline void SetPipeline(Pipeline&& value) { m_pipeline = std::move(value); }

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline ReadPipelineResult& WithPipeline(const Pipeline& value) { SetPipeline(value); return *this;}

    /**
     * <p>A section of the response body that provides information about the
     * pipeline.</p>
     */
    inline ReadPipelineResult& WithPipeline(Pipeline&& value) { SetPipeline(std::move(value)); return *this;}


    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline ReadPipelineResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline ReadPipelineResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline ReadPipelineResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>Elastic Transcoder returns a warning if the resources used by your pipeline
     * are not in the same region as the pipeline.</p> <p>Using resources in the same
     * region, such as your Amazon S3 buckets, Amazon SNS notification topics, and AWS
     * KMS key, reduces processing time and prevents cross-regional charges.</p>
     */
    inline ReadPipelineResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }

  private:

    Pipeline m_pipeline;

    Aws::Vector<Warning> m_warnings;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
