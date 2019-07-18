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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorFilter.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class AWS_EC2_API ModifyTrafficMirrorFilterNetworkServicesResponse
  {
  public:
    ModifyTrafficMirrorFilterNetworkServicesResponse();
    ModifyTrafficMirrorFilterNetworkServicesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyTrafficMirrorFilterNetworkServicesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Traffic Mirror filter that the network service is associated with.</p>
     */
    inline const TrafficMirrorFilter& GetTrafficMirrorFilter() const{ return m_trafficMirrorFilter; }

    /**
     * <p>The Traffic Mirror filter that the network service is associated with.</p>
     */
    inline void SetTrafficMirrorFilter(const TrafficMirrorFilter& value) { m_trafficMirrorFilter = value; }

    /**
     * <p>The Traffic Mirror filter that the network service is associated with.</p>
     */
    inline void SetTrafficMirrorFilter(TrafficMirrorFilter&& value) { m_trafficMirrorFilter = std::move(value); }

    /**
     * <p>The Traffic Mirror filter that the network service is associated with.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesResponse& WithTrafficMirrorFilter(const TrafficMirrorFilter& value) { SetTrafficMirrorFilter(value); return *this;}

    /**
     * <p>The Traffic Mirror filter that the network service is associated with.</p>
     */
    inline ModifyTrafficMirrorFilterNetworkServicesResponse& WithTrafficMirrorFilter(TrafficMirrorFilter&& value) { SetTrafficMirrorFilter(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyTrafficMirrorFilterNetworkServicesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyTrafficMirrorFilterNetworkServicesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TrafficMirrorFilter m_trafficMirrorFilter;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
