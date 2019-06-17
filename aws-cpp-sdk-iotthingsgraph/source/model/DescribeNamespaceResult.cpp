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

#include <aws/iotthingsgraph/model/DescribeNamespaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNamespaceResult::DescribeNamespaceResult() : 
    m_trackingNamespaceVersion(0),
    m_namespaceVersion(0)
{
}

DescribeNamespaceResult::DescribeNamespaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_trackingNamespaceVersion(0),
    m_namespaceVersion(0)
{
  *this = result;
}

DescribeNamespaceResult& DescribeNamespaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("namespaceArn"))
  {
    m_namespaceArn = jsonValue.GetString("namespaceArn");

  }

  if(jsonValue.ValueExists("namespaceName"))
  {
    m_namespaceName = jsonValue.GetString("namespaceName");

  }

  if(jsonValue.ValueExists("trackingNamespaceName"))
  {
    m_trackingNamespaceName = jsonValue.GetString("trackingNamespaceName");

  }

  if(jsonValue.ValueExists("trackingNamespaceVersion"))
  {
    m_trackingNamespaceVersion = jsonValue.GetInt64("trackingNamespaceVersion");

  }

  if(jsonValue.ValueExists("namespaceVersion"))
  {
    m_namespaceVersion = jsonValue.GetInt64("namespaceVersion");

  }



  return *this;
}
