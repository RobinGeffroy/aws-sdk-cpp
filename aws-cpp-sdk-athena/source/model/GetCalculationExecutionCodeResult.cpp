﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetCalculationExecutionCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCalculationExecutionCodeResult::GetCalculationExecutionCodeResult()
{
}

GetCalculationExecutionCodeResult::GetCalculationExecutionCodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCalculationExecutionCodeResult& GetCalculationExecutionCodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CodeBlock"))
  {
    m_codeBlock = jsonValue.GetString("CodeBlock");

  }



  return *this;
}
