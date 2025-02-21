﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ListTableRowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTableRowsResult::ListTableRowsResult() : 
    m_workbookCursor(0)
{
}

ListTableRowsResult::ListTableRowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workbookCursor(0)
{
  *this = result;
}

ListTableRowsResult& ListTableRowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("columnIds"))
  {
    Aws::Utils::Array<JsonView> columnIdsJsonList = jsonValue.GetArray("columnIds");
    for(unsigned columnIdsIndex = 0; columnIdsIndex < columnIdsJsonList.GetLength(); ++columnIdsIndex)
    {
      m_columnIds.push_back(columnIdsJsonList[columnIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("rows"))
  {
    Aws::Utils::Array<JsonView> rowsJsonList = jsonValue.GetArray("rows");
    for(unsigned rowsIndex = 0; rowsIndex < rowsJsonList.GetLength(); ++rowsIndex)
    {
      m_rows.push_back(rowsJsonList[rowsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("rowIdsNotFound"))
  {
    Aws::Utils::Array<JsonView> rowIdsNotFoundJsonList = jsonValue.GetArray("rowIdsNotFound");
    for(unsigned rowIdsNotFoundIndex = 0; rowIdsNotFoundIndex < rowIdsNotFoundJsonList.GetLength(); ++rowIdsNotFoundIndex)
    {
      m_rowIdsNotFound.push_back(rowIdsNotFoundJsonList[rowIdsNotFoundIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workbookCursor"))
  {
    m_workbookCursor = jsonValue.GetInt64("workbookCursor");

  }



  return *this;
}
