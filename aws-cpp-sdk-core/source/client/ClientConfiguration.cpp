/*
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

#include <aws/core/client/ClientConfiguration.h>

#include <aws/core/client/DefaultRetryStrategy.h>
#include <aws/core/platform/OSVersionInfo.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/Version.h>
#include <aws/core/config/AWSProfileConfigLoader.h>
#include <aws/core/utils/logging/LogMacros.h>

namespace Aws
{
namespace Auth
{
    AWS_CORE_API Aws::String GetConfigProfileFilename();
}
namespace Client
{

static const char* CLIENT_CONFIG_TAG = "ClientConfiguration";

AWS_CORE_API Aws::String ComputeUserAgentString()
{
  Aws::StringStream ss;
  ss << "aws-sdk-cpp/" << Version::GetVersionString() << " " <<  Aws::OSVersionInfo::ComputeOSVersionString()
      << " " << Version::GetCompilerVersionString();
  return ss.str();
}

ClientConfiguration::ClientConfiguration() :
    userAgent(ComputeUserAgentString()),
    scheme(Aws::Http::Scheme::HTTPS),
    region(Region::US_EAST_1),
    useDualStack(false),
    maxConnections(25),
    httpRequestTimeoutMs(0),
    requestTimeoutMs(3000),
    connectTimeoutMs(1000),
    enableTcpKeepAlive(true),
    tcpKeepAliveIntervalMs(30000),
    lowSpeedLimit(1),
    retryStrategy(Aws::MakeShared<DefaultRetryStrategy>(CLIENT_CONFIG_TAG)),
    proxyScheme(Aws::Http::Scheme::HTTP),
    proxyPort(0),
    executor(Aws::MakeShared<Aws::Utils::Threading::DefaultExecutor>(CLIENT_CONFIG_TAG)),
    verifySSL(true),
    writeRateLimiter(nullptr),
    readRateLimiter(nullptr),
    httpLibOverride(Aws::Http::TransferLibType::DEFAULT_CLIENT),
    followRedirects(true),
    disableExpectHeader(false),
    enableClockSkewAdjustment(true),
    enableHostPrefixInjection(true),
    enableEndpointDiscovery(false)
{
}

ClientConfiguration::ClientConfiguration(const char* profileName) : ClientConfiguration()
{
    Aws::String configFilename = Aws::Auth::GetConfigProfileFilename();
    Config::AWSConfigFileProfileConfigLoader configLoader(configFilename);
    if (!configLoader.Load())
    {
        AWS_LOGSTREAM_ERROR(CLIENT_CONFIG_TAG, "Failed to load/parse configuration file [" << configFilename <<
                "]. Falling back to region [" << region << "]");
        return;
    }

    const auto& profiles = configLoader.GetProfiles();
    auto it = profiles.find(profileName);
    if (it == profiles.end())
    {
        AWS_LOGSTREAM_ERROR(CLIENT_CONFIG_TAG, "Failed to load profile: [" << profileName <<
                "] from configuration file [" << configFilename << "]. Falling back to region [" << region << "]");
        return;
    }
    const Aws::Config::Profile& profile = it->second;
    region = profile.GetRegion();
}

} // namespace Client
} // namespace Aws
