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

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotthingsgraph/model/EntityDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTThingsGraph
{
namespace Model
{
  class AWS_IOTTHINGSGRAPH_API SearchEntitiesResult
  {
  public:
    SearchEntitiesResult();
    SearchEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SearchEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of descriptions for each entity returned in the search result.</p>
     */
    inline const Aws::Vector<EntityDescription>& GetDescriptions() const{ return m_descriptions; }

    /**
     * <p>An array of descriptions for each entity returned in the search result.</p>
     */
    inline void SetDescriptions(const Aws::Vector<EntityDescription>& value) { m_descriptions = value; }

    /**
     * <p>An array of descriptions for each entity returned in the search result.</p>
     */
    inline void SetDescriptions(Aws::Vector<EntityDescription>&& value) { m_descriptions = std::move(value); }

    /**
     * <p>An array of descriptions for each entity returned in the search result.</p>
     */
    inline SearchEntitiesResult& WithDescriptions(const Aws::Vector<EntityDescription>& value) { SetDescriptions(value); return *this;}

    /**
     * <p>An array of descriptions for each entity returned in the search result.</p>
     */
    inline SearchEntitiesResult& WithDescriptions(Aws::Vector<EntityDescription>&& value) { SetDescriptions(std::move(value)); return *this;}

    /**
     * <p>An array of descriptions for each entity returned in the search result.</p>
     */
    inline SearchEntitiesResult& AddDescriptions(const EntityDescription& value) { m_descriptions.push_back(value); return *this; }

    /**
     * <p>An array of descriptions for each entity returned in the search result.</p>
     */
    inline SearchEntitiesResult& AddDescriptions(EntityDescription&& value) { m_descriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline SearchEntitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline SearchEntitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to specify as <code>nextToken</code> when you request the next
     * page of results.</p>
     */
    inline SearchEntitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EntityDescription> m_descriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTThingsGraph
} // namespace Aws
