﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/model/LookupDeveloperIdentityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

LookupDeveloperIdentityResult::LookupDeveloperIdentityResult()
{
}

LookupDeveloperIdentityResult::LookupDeveloperIdentityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

LookupDeveloperIdentityResult& LookupDeveloperIdentityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");

  }

  if(jsonValue.ValueExists("DeveloperUserIdentifierList"))
  {
    Aws::Utils::Array<JsonView> developerUserIdentifierListJsonList = jsonValue.GetArray("DeveloperUserIdentifierList");
    for(unsigned developerUserIdentifierListIndex = 0; developerUserIdentifierListIndex < developerUserIdentifierListJsonList.GetLength(); ++developerUserIdentifierListIndex)
    {
      m_developerUserIdentifierList.push_back(developerUserIdentifierListJsonList[developerUserIdentifierListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
