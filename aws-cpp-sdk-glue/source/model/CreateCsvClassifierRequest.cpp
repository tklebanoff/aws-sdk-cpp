﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glue/model/CreateCsvClassifierRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CreateCsvClassifierRequest::CreateCsvClassifierRequest() : 
    m_nameHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false),
    m_containsHeader(CsvHeaderOption::NOT_SET),
    m_containsHeaderHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_disableValueTrimming(false),
    m_disableValueTrimmingHasBeenSet(false),
    m_allowSingleColumn(false),
    m_allowSingleColumnHasBeenSet(false)
{
}

CreateCsvClassifierRequest::CreateCsvClassifierRequest(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_delimiterHasBeenSet(false),
    m_quoteSymbolHasBeenSet(false),
    m_containsHeader(CsvHeaderOption::NOT_SET),
    m_containsHeaderHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_disableValueTrimming(false),
    m_disableValueTrimmingHasBeenSet(false),
    m_allowSingleColumn(false),
    m_allowSingleColumnHasBeenSet(false)
{
  *this = jsonValue;
}

CreateCsvClassifierRequest& CreateCsvClassifierRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Delimiter"))
  {
    m_delimiter = jsonValue.GetString("Delimiter");

    m_delimiterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuoteSymbol"))
  {
    m_quoteSymbol = jsonValue.GetString("QuoteSymbol");

    m_quoteSymbolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainsHeader"))
  {
    m_containsHeader = CsvHeaderOptionMapper::GetCsvHeaderOptionForName(jsonValue.GetString("ContainsHeader"));

    m_containsHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Header"))
  {
    Array<JsonView> headerJsonList = jsonValue.GetArray("Header");
    for(unsigned headerIndex = 0; headerIndex < headerJsonList.GetLength(); ++headerIndex)
    {
      m_header.push_back(headerJsonList[headerIndex].AsString());
    }
    m_headerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableValueTrimming"))
  {
    m_disableValueTrimming = jsonValue.GetBool("DisableValueTrimming");

    m_disableValueTrimmingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowSingleColumn"))
  {
    m_allowSingleColumn = jsonValue.GetBool("AllowSingleColumn");

    m_allowSingleColumnHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateCsvClassifierRequest::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_delimiterHasBeenSet)
  {
   payload.WithString("Delimiter", m_delimiter);

  }

  if(m_quoteSymbolHasBeenSet)
  {
   payload.WithString("QuoteSymbol", m_quoteSymbol);

  }

  if(m_containsHeaderHasBeenSet)
  {
   payload.WithString("ContainsHeader", CsvHeaderOptionMapper::GetNameForCsvHeaderOption(m_containsHeader));
  }

  if(m_headerHasBeenSet)
  {
   Array<JsonValue> headerJsonList(m_header.size());
   for(unsigned headerIndex = 0; headerIndex < headerJsonList.GetLength(); ++headerIndex)
   {
     headerJsonList[headerIndex].AsString(m_header[headerIndex]);
   }
   payload.WithArray("Header", std::move(headerJsonList));

  }

  if(m_disableValueTrimmingHasBeenSet)
  {
   payload.WithBool("DisableValueTrimming", m_disableValueTrimming);

  }

  if(m_allowSingleColumnHasBeenSet)
  {
   payload.WithBool("AllowSingleColumn", m_allowSingleColumn);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
