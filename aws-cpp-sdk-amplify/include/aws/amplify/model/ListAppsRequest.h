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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Amplify
{
namespace Model
{

  /**
   * <p> Request structure for an Amplify App list request. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListAppsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API ListAppsRequest : public AmplifyRequest
  {
  public:
    ListAppsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApps"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListAppsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListAppsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> Pagination token. If non-null pagination token is returned in a result, then
     * pass its value in another request to fetch more entries. </p>
     */
    inline ListAppsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Maximum number of records to list in a single response. </p>
     */
    inline ListAppsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
