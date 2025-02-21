﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/BuiltinIntentMetadata.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class GetBuiltinIntentsResult
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentsResult();
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinIntentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>builtinIntentMetadata</code> objects, one for each intent
     * in the response.</p>
     */
    inline const Aws::Vector<BuiltinIntentMetadata>& GetIntents() const{ return m_intents; }

    /**
     * <p>An array of <code>builtinIntentMetadata</code> objects, one for each intent
     * in the response.</p>
     */
    inline void SetIntents(const Aws::Vector<BuiltinIntentMetadata>& value) { m_intents = value; }

    /**
     * <p>An array of <code>builtinIntentMetadata</code> objects, one for each intent
     * in the response.</p>
     */
    inline void SetIntents(Aws::Vector<BuiltinIntentMetadata>&& value) { m_intents = std::move(value); }

    /**
     * <p>An array of <code>builtinIntentMetadata</code> objects, one for each intent
     * in the response.</p>
     */
    inline GetBuiltinIntentsResult& WithIntents(const Aws::Vector<BuiltinIntentMetadata>& value) { SetIntents(value); return *this;}

    /**
     * <p>An array of <code>builtinIntentMetadata</code> objects, one for each intent
     * in the response.</p>
     */
    inline GetBuiltinIntentsResult& WithIntents(Aws::Vector<BuiltinIntentMetadata>&& value) { SetIntents(std::move(value)); return *this;}

    /**
     * <p>An array of <code>builtinIntentMetadata</code> objects, one for each intent
     * in the response.</p>
     */
    inline GetBuiltinIntentsResult& AddIntents(const BuiltinIntentMetadata& value) { m_intents.push_back(value); return *this; }

    /**
     * <p>An array of <code>builtinIntentMetadata</code> objects, one for each intent
     * in the response.</p>
     */
    inline GetBuiltinIntentsResult& AddIntents(BuiltinIntentMetadata&& value) { m_intents.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that fetches the next page of intents. If the response to
     * this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of intents, specify the pagination token in the
     * next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that fetches the next page of intents. If the response to
     * this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of intents, specify the pagination token in the
     * next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that fetches the next page of intents. If the response to
     * this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of intents, specify the pagination token in the
     * next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that fetches the next page of intents. If the response to
     * this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of intents, specify the pagination token in the
     * next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that fetches the next page of intents. If the response to
     * this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of intents, specify the pagination token in the
     * next request.</p>
     */
    inline GetBuiltinIntentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that fetches the next page of intents. If the response to
     * this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of intents, specify the pagination token in the
     * next request.</p>
     */
    inline GetBuiltinIntentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that fetches the next page of intents. If the response to
     * this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of intents, specify the pagination token in the
     * next request.</p>
     */
    inline GetBuiltinIntentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BuiltinIntentMetadata> m_intents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
