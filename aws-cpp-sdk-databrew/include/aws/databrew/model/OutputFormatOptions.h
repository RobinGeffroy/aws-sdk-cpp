﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/model/CsvOutputOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Options that define the structure of Csv job output.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/OutputFormatOptions">AWS
   * API Reference</a></p>
   */
  class AWS_GLUEDATABREW_API OutputFormatOptions
  {
  public:
    OutputFormatOptions();
    OutputFormatOptions(Aws::Utils::Json::JsonView jsonValue);
    OutputFormatOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Options that define how DataBrew writes Csv output.</p>
     */
    inline const CsvOutputOptions& GetCsv() const{ return m_csv; }

    /**
     * <p>Options that define how DataBrew writes Csv output.</p>
     */
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }

    /**
     * <p>Options that define how DataBrew writes Csv output.</p>
     */
    inline void SetCsv(const CsvOutputOptions& value) { m_csvHasBeenSet = true; m_csv = value; }

    /**
     * <p>Options that define how DataBrew writes Csv output.</p>
     */
    inline void SetCsv(CsvOutputOptions&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }

    /**
     * <p>Options that define how DataBrew writes Csv output.</p>
     */
    inline OutputFormatOptions& WithCsv(const CsvOutputOptions& value) { SetCsv(value); return *this;}

    /**
     * <p>Options that define how DataBrew writes Csv output.</p>
     */
    inline OutputFormatOptions& WithCsv(CsvOutputOptions&& value) { SetCsv(std::move(value)); return *this;}

  private:

    CsvOutputOptions m_csv;
    bool m_csvHasBeenSet;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
