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

#include <aws/ec2/model/TransitGatewayAttachmentAssociation.h>
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

TransitGatewayAttachmentAssociation::TransitGatewayAttachmentAssociation() : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_state(TransitGatewayAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

TransitGatewayAttachmentAssociation::TransitGatewayAttachmentAssociation(const XmlNode& xmlNode) : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_state(TransitGatewayAssociationState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayAttachmentAssociation& TransitGatewayAttachmentAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayRouteTableIdNode = resultNode.FirstChild("transitGatewayRouteTableId");
    if(!transitGatewayRouteTableIdNode.IsNull())
    {
      m_transitGatewayRouteTableId = transitGatewayRouteTableIdNode.GetText();
      m_transitGatewayRouteTableIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayAssociationStateMapper::GetTransitGatewayAssociationStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayAttachmentAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayAssociationStateMapper::GetNameForTransitGatewayAssociationState(m_state) << "&";
  }

}

void TransitGatewayAttachmentAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayAssociationStateMapper::GetNameForTransitGatewayAssociationState(m_state) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
