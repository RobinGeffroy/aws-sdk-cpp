﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>

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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class DeleteTagsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DeleteTagsResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API DeleteTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DeleteTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
