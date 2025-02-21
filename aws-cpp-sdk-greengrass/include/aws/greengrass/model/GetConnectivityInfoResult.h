﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/ConnectivityInfo.h>
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
namespace Greengrass
{
namespace Model
{
  class GetConnectivityInfoResult
  {
  public:
    AWS_GREENGRASS_API GetConnectivityInfoResult();
    AWS_GREENGRASS_API GetConnectivityInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetConnectivityInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Connectivity info list.
     */
    inline const Aws::Vector<ConnectivityInfo>& GetConnectivityInfo() const{ return m_connectivityInfo; }

    /**
     * Connectivity info list.
     */
    inline void SetConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { m_connectivityInfo = value; }

    /**
     * Connectivity info list.
     */
    inline void SetConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { m_connectivityInfo = std::move(value); }

    /**
     * Connectivity info list.
     */
    inline GetConnectivityInfoResult& WithConnectivityInfo(const Aws::Vector<ConnectivityInfo>& value) { SetConnectivityInfo(value); return *this;}

    /**
     * Connectivity info list.
     */
    inline GetConnectivityInfoResult& WithConnectivityInfo(Aws::Vector<ConnectivityInfo>&& value) { SetConnectivityInfo(std::move(value)); return *this;}

    /**
     * Connectivity info list.
     */
    inline GetConnectivityInfoResult& AddConnectivityInfo(const ConnectivityInfo& value) { m_connectivityInfo.push_back(value); return *this; }

    /**
     * Connectivity info list.
     */
    inline GetConnectivityInfoResult& AddConnectivityInfo(ConnectivityInfo&& value) { m_connectivityInfo.push_back(std::move(value)); return *this; }


    /**
     * A message about the connectivity info request.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * A message about the connectivity info request.
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * A message about the connectivity info request.
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * A message about the connectivity info request.
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * A message about the connectivity info request.
     */
    inline GetConnectivityInfoResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * A message about the connectivity info request.
     */
    inline GetConnectivityInfoResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * A message about the connectivity info request.
     */
    inline GetConnectivityInfoResult& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Vector<ConnectivityInfo> m_connectivityInfo;

    Aws::String m_message;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
