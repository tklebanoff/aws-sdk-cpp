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

#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAWSDefaultServiceQuotasResult::ListAWSDefaultServiceQuotasResult()
{
}

ListAWSDefaultServiceQuotasResult::ListAWSDefaultServiceQuotasResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAWSDefaultServiceQuotasResult& ListAWSDefaultServiceQuotasResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Quotas"))
  {
    Array<JsonView> quotasJsonList = jsonValue.GetArray("Quotas");
    for(unsigned quotasIndex = 0; quotasIndex < quotasJsonList.GetLength(); ++quotasIndex)
    {
      m_quotas.push_back(quotasJsonList[quotasIndex].AsObject());
    }
  }



  return *this;
}
