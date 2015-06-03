/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /*
    <p>Contains information about a server certificate without its certificate body, certificate chain, and private key. </p> <p> This data type is used as a response element in the <a>UploadServerCertificate</a> and <a>ListServerCertificates</a> actions. </p>
  */
  class AWS_IAM_API ServerCertificateMetadata
  {
  public:
    ServerCertificateMetadata();
    ServerCertificateMetadata(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServerCertificateMetadata& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p> The path to the server certificate. For more information about paths, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline const Aws::String& GetPath() const{ return m_path; }
    /*
     <p> The path to the server certificate. For more information about paths, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline void SetPath(const Aws::String& value) { m_path = value; }

    /*
     <p> The path to the server certificate. For more information about paths, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline void SetPath(const char* value) { m_path.assign(value); }

    /*
     <p> The path to the server certificate. For more information about paths, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline ServerCertificateMetadata&  WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /*
     <p> The path to the server certificate. For more information about paths, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline ServerCertificateMetadata& WithPath(const char* value) { SetPath(value); return *this;}

    /*
     <p>The name that identifies the server certificate.</p>
    */
    inline const Aws::String& GetServerCertificateName() const{ return m_serverCertificateName; }
    /*
     <p>The name that identifies the server certificate.</p>
    */
    inline void SetServerCertificateName(const Aws::String& value) { m_serverCertificateName = value; }

    /*
     <p>The name that identifies the server certificate.</p>
    */
    inline void SetServerCertificateName(const char* value) { m_serverCertificateName.assign(value); }

    /*
     <p>The name that identifies the server certificate.</p>
    */
    inline ServerCertificateMetadata&  WithServerCertificateName(const Aws::String& value) { SetServerCertificateName(value); return *this;}

    /*
     <p>The name that identifies the server certificate.</p>
    */
    inline ServerCertificateMetadata& WithServerCertificateName(const char* value) { SetServerCertificateName(value); return *this;}

    /*
     <p> The stable and unique string identifying the server certificate. For more information about IDs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline const Aws::String& GetServerCertificateId() const{ return m_serverCertificateId; }
    /*
     <p> The stable and unique string identifying the server certificate. For more information about IDs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline void SetServerCertificateId(const Aws::String& value) { m_serverCertificateId = value; }

    /*
     <p> The stable and unique string identifying the server certificate. For more information about IDs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline void SetServerCertificateId(const char* value) { m_serverCertificateId.assign(value); }

    /*
     <p> The stable and unique string identifying the server certificate. For more information about IDs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline ServerCertificateMetadata&  WithServerCertificateId(const Aws::String& value) { SetServerCertificateId(value); return *this;}

    /*
     <p> The stable and unique string identifying the server certificate. For more information about IDs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline ServerCertificateMetadata& WithServerCertificateId(const char* value) { SetServerCertificateId(value); return *this;}

    /*
     <p> The Amazon Resource Name (ARN) specifying the server certificate. For more information about ARNs and how to use them in policies, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline const Aws::String& GetArn() const{ return m_arn; }
    /*
     <p> The Amazon Resource Name (ARN) specifying the server certificate. For more information about ARNs and how to use them in policies, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /*
     <p> The Amazon Resource Name (ARN) specifying the server certificate. For more information about ARNs and how to use them in policies, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /*
     <p> The Amazon Resource Name (ARN) specifying the server certificate. For more information about ARNs and how to use them in policies, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline ServerCertificateMetadata&  WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /*
     <p> The Amazon Resource Name (ARN) specifying the server certificate. For more information about ARNs and how to use them in policies, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM Identifiers</a> in the <i>Using IAM</i> guide. </p>
    */
    inline ServerCertificateMetadata& WithArn(const char* value) { SetArn(value); return *this;}

    /*
     <p>The date when the server certificate was uploaded.</p>
    */
    inline double GetUploadDate() const{ return m_uploadDate; }
    /*
     <p>The date when the server certificate was uploaded.</p>
    */
    inline void SetUploadDate(double value) { m_uploadDateHasBeenSet = true; m_uploadDate = value; }

    /*
     <p>The date when the server certificate was uploaded.</p>
    */
    inline ServerCertificateMetadata&  WithUploadDate(double value) { SetUploadDate(value); return *this;}

    /*
     <p>The date on which the certificate is set to expire.</p>
    */
    inline double GetExpiration() const{ return m_expiration; }
    /*
     <p>The date on which the certificate is set to expire.</p>
    */
    inline void SetExpiration(double value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /*
     <p>The date on which the certificate is set to expire.</p>
    */
    inline ServerCertificateMetadata&  WithExpiration(double value) { SetExpiration(value); return *this;}

  private:
    Aws::String m_path;
    Aws::String m_serverCertificateName;
    Aws::String m_serverCertificateId;
    Aws::String m_arn;
    double m_uploadDate;
    bool m_uploadDateHasBeenSet;
    double m_expiration;
    bool m_expirationHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws