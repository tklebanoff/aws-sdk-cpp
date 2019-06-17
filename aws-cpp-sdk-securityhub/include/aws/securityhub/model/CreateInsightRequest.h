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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API CreateInsightRequest : public SecurityHubRequest
  {
  public:
    CreateInsightRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInsight"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline CreateInsightRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline CreateInsightRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The user-defined name that identifies the insight to create.</p>
     */
    inline CreateInsightRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A collection of attributes that are applied to all of the active findings
     * aggregated by Security Hub, and that result in a subset of findings that are
     * included in this insight.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A collection of attributes that are applied to all of the active findings
     * aggregated by Security Hub, and that result in a subset of findings that are
     * included in this insight.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A collection of attributes that are applied to all of the active findings
     * aggregated by Security Hub, and that result in a subset of findings that are
     * included in this insight.</p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A collection of attributes that are applied to all of the active findings
     * aggregated by Security Hub, and that result in a subset of findings that are
     * included in this insight.</p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A collection of attributes that are applied to all of the active findings
     * aggregated by Security Hub, and that result in a subset of findings that are
     * included in this insight.</p>
     */
    inline CreateInsightRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A collection of attributes that are applied to all of the active findings
     * aggregated by Security Hub, and that result in a subset of findings that are
     * included in this insight.</p>
     */
    inline CreateInsightRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline bool GroupByAttributeHasBeenSet() const { return m_groupByAttributeHasBeenSet; }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline CreateInsightRequest& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline CreateInsightRequest& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline CreateInsightRequest& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_groupByAttribute;
    bool m_groupByAttributeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
