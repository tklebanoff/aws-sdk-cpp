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

#include <aws/ec2/model/SpotPlacement.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

SpotPlacement::SpotPlacement() : 
    m_availabilityZoneHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false)
{
}

SpotPlacement::SpotPlacement(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false)
{
  *this = xmlNode;
}

SpotPlacement& SpotPlacement::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = groupNameNode.GetText();
      m_groupNameHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = TenancyMapper::GetTenancyForName(StringUtils::Trim(tenancyNode.GetText().c_str()).c_str());
      m_tenancyHasBeenSet = true;
    }
  }

  return *this;
}

void SpotPlacement::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Tenancy=" << TenancyMapper::GetNameForTenancy(m_tenancy) << "&";
  }

}

void SpotPlacement::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_tenancyHasBeenSet)
  {
      oStream << location << ".Tenancy=" << TenancyMapper::GetNameForTenancy(m_tenancy) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
