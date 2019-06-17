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

#include <aws/ecs/model/CreateTaskSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTaskSetRequest::CreateTaskSetRequest() : 
    m_serviceHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateTaskSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_loadBalancersHasBeenSet)
  {
   Array<JsonValue> loadBalancersJsonList(m_loadBalancers.size());
   for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
   {
     loadBalancersJsonList[loadBalancersIndex].AsObject(m_loadBalancers[loadBalancersIndex].Jsonize());
   }
   payload.WithArray("loadBalancers", std::move(loadBalancersJsonList));

  }

  if(m_serviceRegistriesHasBeenSet)
  {
   Array<JsonValue> serviceRegistriesJsonList(m_serviceRegistries.size());
   for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
   {
     serviceRegistriesJsonList[serviceRegistriesIndex].AsObject(m_serviceRegistries[serviceRegistriesIndex].Jsonize());
   }
   payload.WithArray("serviceRegistries", std::move(serviceRegistriesJsonList));

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_scaleHasBeenSet)
  {
   payload.WithObject("scale", m_scale.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTaskSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.CreateTaskSet"));
  return headers;

}




