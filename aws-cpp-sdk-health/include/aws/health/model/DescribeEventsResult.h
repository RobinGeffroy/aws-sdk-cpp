﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/health/model/Event.h>
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
namespace Health
{
namespace Model
{
  class DescribeEventsResult
  {
  public:
    AWS_HEALTH_API DescribeEventsResult();
    AWS_HEALTH_API DescribeEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_HEALTH_API DescribeEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The events that match the specified filter criteria.</p>
     */
    inline const Aws::Vector<Event>& GetEvents() const{ return m_events; }

    /**
     * <p>The events that match the specified filter criteria.</p>
     */
    inline void SetEvents(const Aws::Vector<Event>& value) { m_events = value; }

    /**
     * <p>The events that match the specified filter criteria.</p>
     */
    inline void SetEvents(Aws::Vector<Event>&& value) { m_events = std::move(value); }

    /**
     * <p>The events that match the specified filter criteria.</p>
     */
    inline DescribeEventsResult& WithEvents(const Aws::Vector<Event>& value) { SetEvents(value); return *this;}

    /**
     * <p>The events that match the specified filter criteria.</p>
     */
    inline DescribeEventsResult& WithEvents(Aws::Vector<Event>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>The events that match the specified filter criteria.</p>
     */
    inline DescribeEventsResult& AddEvents(const Event& value) { m_events.push_back(value); return *this; }

    /**
     * <p>The events that match the specified filter criteria.</p>
     */
    inline DescribeEventsResult& AddEvents(Event&& value) { m_events.push_back(std::move(value)); return *this; }


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Event> m_events;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
