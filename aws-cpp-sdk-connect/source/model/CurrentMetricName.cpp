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

#include <aws/connect/model/CurrentMetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace CurrentMetricNameMapper
      {

        static const int AGENTS_ONLINE_HASH = HashingUtils::HashString("AGENTS_ONLINE");
        static const int AGENTS_AVAILABLE_HASH = HashingUtils::HashString("AGENTS_AVAILABLE");
        static const int AGENTS_ON_CALL_HASH = HashingUtils::HashString("AGENTS_ON_CALL");
        static const int AGENTS_NON_PRODUCTIVE_HASH = HashingUtils::HashString("AGENTS_NON_PRODUCTIVE");
        static const int AGENTS_AFTER_CONTACT_WORK_HASH = HashingUtils::HashString("AGENTS_AFTER_CONTACT_WORK");
        static const int AGENTS_ERROR_HASH = HashingUtils::HashString("AGENTS_ERROR");
        static const int AGENTS_STAFFED_HASH = HashingUtils::HashString("AGENTS_STAFFED");
        static const int CONTACTS_IN_QUEUE_HASH = HashingUtils::HashString("CONTACTS_IN_QUEUE");
        static const int OLDEST_CONTACT_AGE_HASH = HashingUtils::HashString("OLDEST_CONTACT_AGE");
        static const int CONTACTS_SCHEDULED_HASH = HashingUtils::HashString("CONTACTS_SCHEDULED");


        CurrentMetricName GetCurrentMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AGENTS_ONLINE_HASH)
          {
            return CurrentMetricName::AGENTS_ONLINE;
          }
          else if (hashCode == AGENTS_AVAILABLE_HASH)
          {
            return CurrentMetricName::AGENTS_AVAILABLE;
          }
          else if (hashCode == AGENTS_ON_CALL_HASH)
          {
            return CurrentMetricName::AGENTS_ON_CALL;
          }
          else if (hashCode == AGENTS_NON_PRODUCTIVE_HASH)
          {
            return CurrentMetricName::AGENTS_NON_PRODUCTIVE;
          }
          else if (hashCode == AGENTS_AFTER_CONTACT_WORK_HASH)
          {
            return CurrentMetricName::AGENTS_AFTER_CONTACT_WORK;
          }
          else if (hashCode == AGENTS_ERROR_HASH)
          {
            return CurrentMetricName::AGENTS_ERROR;
          }
          else if (hashCode == AGENTS_STAFFED_HASH)
          {
            return CurrentMetricName::AGENTS_STAFFED;
          }
          else if (hashCode == CONTACTS_IN_QUEUE_HASH)
          {
            return CurrentMetricName::CONTACTS_IN_QUEUE;
          }
          else if (hashCode == OLDEST_CONTACT_AGE_HASH)
          {
            return CurrentMetricName::OLDEST_CONTACT_AGE;
          }
          else if (hashCode == CONTACTS_SCHEDULED_HASH)
          {
            return CurrentMetricName::CONTACTS_SCHEDULED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CurrentMetricName>(hashCode);
          }

          return CurrentMetricName::NOT_SET;
        }

        Aws::String GetNameForCurrentMetricName(CurrentMetricName enumValue)
        {
          switch(enumValue)
          {
          case CurrentMetricName::AGENTS_ONLINE:
            return "AGENTS_ONLINE";
          case CurrentMetricName::AGENTS_AVAILABLE:
            return "AGENTS_AVAILABLE";
          case CurrentMetricName::AGENTS_ON_CALL:
            return "AGENTS_ON_CALL";
          case CurrentMetricName::AGENTS_NON_PRODUCTIVE:
            return "AGENTS_NON_PRODUCTIVE";
          case CurrentMetricName::AGENTS_AFTER_CONTACT_WORK:
            return "AGENTS_AFTER_CONTACT_WORK";
          case CurrentMetricName::AGENTS_ERROR:
            return "AGENTS_ERROR";
          case CurrentMetricName::AGENTS_STAFFED:
            return "AGENTS_STAFFED";
          case CurrentMetricName::CONTACTS_IN_QUEUE:
            return "CONTACTS_IN_QUEUE";
          case CurrentMetricName::OLDEST_CONTACT_AGE:
            return "OLDEST_CONTACT_AGE";
          case CurrentMetricName::CONTACTS_SCHEDULED:
            return "CONTACTS_SCHEDULED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CurrentMetricNameMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
