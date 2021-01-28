﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/CsvOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

CsvOptions::CsvOptions() : 
    m_delimiterHasBeenSet(false)
{
}

CsvOptions::CsvOptions(JsonView jsonValue) : 
    m_delimiterHasBeenSet(false)
{
  *this = jsonValue;
}

CsvOptions& CsvOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  return *this;
}

JsonValue CsvOptions::Jsonize() const
{
  JsonValue payload;

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
