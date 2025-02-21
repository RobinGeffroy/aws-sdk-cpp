﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{
  class PutLifecycleEventHookExecutionStatusResult
  {
  public:
    AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusResult();
    AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline const Aws::String& GetLifecycleEventHookExecutionId() const{ return m_lifecycleEventHookExecutionId; }

    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline void SetLifecycleEventHookExecutionId(const Aws::String& value) { m_lifecycleEventHookExecutionId = value; }

    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline void SetLifecycleEventHookExecutionId(Aws::String&& value) { m_lifecycleEventHookExecutionId = std::move(value); }

    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline void SetLifecycleEventHookExecutionId(const char* value) { m_lifecycleEventHookExecutionId.assign(value); }

    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline PutLifecycleEventHookExecutionStatusResult& WithLifecycleEventHookExecutionId(const Aws::String& value) { SetLifecycleEventHookExecutionId(value); return *this;}

    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline PutLifecycleEventHookExecutionStatusResult& WithLifecycleEventHookExecutionId(Aws::String&& value) { SetLifecycleEventHookExecutionId(std::move(value)); return *this;}

    /**
     * <p>The execution ID of the lifecycle event hook. A hook is specified in the
     * <code>hooks</code> section of the deployment's AppSpec file.</p>
     */
    inline PutLifecycleEventHookExecutionStatusResult& WithLifecycleEventHookExecutionId(const char* value) { SetLifecycleEventHookExecutionId(value); return *this;}

  private:

    Aws::String m_lifecycleEventHookExecutionId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
