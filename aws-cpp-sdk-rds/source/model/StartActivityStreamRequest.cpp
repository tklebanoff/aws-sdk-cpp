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

#include <aws/rds/model/StartActivityStreamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

StartActivityStreamRequest::StartActivityStreamRequest() : 
    m_resourceArnHasBeenSet(false),
    m_mode(ActivityStreamMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false)
{
}

Aws::String StartActivityStreamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartActivityStream&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_modeHasBeenSet)
  {
    ss << "Mode=" << ActivityStreamModeMapper::GetNameForActivityStreamMode(m_mode) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StartActivityStreamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
