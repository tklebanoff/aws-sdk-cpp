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

#include <aws/apigatewayv2/model/CreateAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAuthorizerRequest::CreateAuthorizerRequest() : 
    m_apiIdHasBeenSet(false),
    m_authorizerCredentialsArnHasBeenSet(false),
    m_authorizerResultTtlInSeconds(0),
    m_authorizerResultTtlInSecondsHasBeenSet(false),
    m_authorizerType(AuthorizerType::NOT_SET),
    m_authorizerTypeHasBeenSet(false),
    m_authorizerUriHasBeenSet(false),
    m_identitySourceHasBeenSet(false),
    m_identityValidationExpressionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_providerArnsHasBeenSet(false)
{
}

Aws::String CreateAuthorizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizerCredentialsArnHasBeenSet)
  {
   payload.WithString("authorizerCredentialsArn", m_authorizerCredentialsArn);

  }

  if(m_authorizerResultTtlInSecondsHasBeenSet)
  {
   payload.WithInteger("authorizerResultTtlInSeconds", m_authorizerResultTtlInSeconds);

  }

  if(m_authorizerTypeHasBeenSet)
  {
   payload.WithString("authorizerType", AuthorizerTypeMapper::GetNameForAuthorizerType(m_authorizerType));
  }

  if(m_authorizerUriHasBeenSet)
  {
   payload.WithString("authorizerUri", m_authorizerUri);

  }

  if(m_identitySourceHasBeenSet)
  {
   Array<JsonValue> identitySourceJsonList(m_identitySource.size());
   for(unsigned identitySourceIndex = 0; identitySourceIndex < identitySourceJsonList.GetLength(); ++identitySourceIndex)
   {
     identitySourceJsonList[identitySourceIndex].AsString(m_identitySource[identitySourceIndex]);
   }
   payload.WithArray("identitySource", std::move(identitySourceJsonList));

  }

  if(m_identityValidationExpressionHasBeenSet)
  {
   payload.WithString("identityValidationExpression", m_identityValidationExpression);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_providerArnsHasBeenSet)
  {
   Array<JsonValue> providerArnsJsonList(m_providerArns.size());
   for(unsigned providerArnsIndex = 0; providerArnsIndex < providerArnsJsonList.GetLength(); ++providerArnsIndex)
   {
     providerArnsJsonList[providerArnsIndex].AsString(m_providerArns[providerArnsIndex]);
   }
   payload.WithArray("providerArns", std::move(providerArnsJsonList));

  }

  return payload.View().WriteReadable();
}




