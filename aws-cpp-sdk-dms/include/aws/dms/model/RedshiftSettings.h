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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/EncryptionModeValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RedshiftSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API RedshiftSettings
  {
  public:
    RedshiftSettings();
    RedshiftSettings(Aws::Utils::Json::JsonView jsonValue);
    RedshiftSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A value that indicates to allow any date format, including invalid formats
     * such as 00/00/00 00:00:00, to be loaded without generating an error. You can
     * choose <code>true</code> or <code>false</code> (the default).</p> <p>This
     * parameter applies only to TIMESTAMP and DATE columns. Always use ACCEPTANYDATE
     * with the DATEFORMAT parameter. If the date format for the data doesn't match the
     * DATEFORMAT specification, Amazon Redshift inserts a NULL value into that field.
     * </p>
     */
    inline bool GetAcceptAnyDate() const{ return m_acceptAnyDate; }

    /**
     * <p>A value that indicates to allow any date format, including invalid formats
     * such as 00/00/00 00:00:00, to be loaded without generating an error. You can
     * choose <code>true</code> or <code>false</code> (the default).</p> <p>This
     * parameter applies only to TIMESTAMP and DATE columns. Always use ACCEPTANYDATE
     * with the DATEFORMAT parameter. If the date format for the data doesn't match the
     * DATEFORMAT specification, Amazon Redshift inserts a NULL value into that field.
     * </p>
     */
    inline bool AcceptAnyDateHasBeenSet() const { return m_acceptAnyDateHasBeenSet; }

    /**
     * <p>A value that indicates to allow any date format, including invalid formats
     * such as 00/00/00 00:00:00, to be loaded without generating an error. You can
     * choose <code>true</code> or <code>false</code> (the default).</p> <p>This
     * parameter applies only to TIMESTAMP and DATE columns. Always use ACCEPTANYDATE
     * with the DATEFORMAT parameter. If the date format for the data doesn't match the
     * DATEFORMAT specification, Amazon Redshift inserts a NULL value into that field.
     * </p>
     */
    inline void SetAcceptAnyDate(bool value) { m_acceptAnyDateHasBeenSet = true; m_acceptAnyDate = value; }

    /**
     * <p>A value that indicates to allow any date format, including invalid formats
     * such as 00/00/00 00:00:00, to be loaded without generating an error. You can
     * choose <code>true</code> or <code>false</code> (the default).</p> <p>This
     * parameter applies only to TIMESTAMP and DATE columns. Always use ACCEPTANYDATE
     * with the DATEFORMAT parameter. If the date format for the data doesn't match the
     * DATEFORMAT specification, Amazon Redshift inserts a NULL value into that field.
     * </p>
     */
    inline RedshiftSettings& WithAcceptAnyDate(bool value) { SetAcceptAnyDate(value); return *this;}


    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline const Aws::String& GetAfterConnectScript() const{ return m_afterConnectScript; }

    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline bool AfterConnectScriptHasBeenSet() const { return m_afterConnectScriptHasBeenSet; }

    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline void SetAfterConnectScript(const Aws::String& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = value; }

    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline void SetAfterConnectScript(Aws::String&& value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript = std::move(value); }

    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline void SetAfterConnectScript(const char* value) { m_afterConnectScriptHasBeenSet = true; m_afterConnectScript.assign(value); }

    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline RedshiftSettings& WithAfterConnectScript(const Aws::String& value) { SetAfterConnectScript(value); return *this;}

    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline RedshiftSettings& WithAfterConnectScript(Aws::String&& value) { SetAfterConnectScript(std::move(value)); return *this;}

    /**
     * <p>Code to run after connecting. This parameter should contain the code itself,
     * not the name of a file containing the code.</p>
     */
    inline RedshiftSettings& WithAfterConnectScript(const char* value) { SetAfterConnectScript(value); return *this;}


    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline const Aws::String& GetBucketFolder() const{ return m_bucketFolder; }

    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline bool BucketFolderHasBeenSet() const { return m_bucketFolderHasBeenSet; }

    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline void SetBucketFolder(const Aws::String& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = value; }

    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline void SetBucketFolder(Aws::String&& value) { m_bucketFolderHasBeenSet = true; m_bucketFolder = std::move(value); }

    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline void SetBucketFolder(const char* value) { m_bucketFolderHasBeenSet = true; m_bucketFolder.assign(value); }

    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline RedshiftSettings& WithBucketFolder(const Aws::String& value) { SetBucketFolder(value); return *this;}

    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline RedshiftSettings& WithBucketFolder(Aws::String&& value) { SetBucketFolder(std::move(value)); return *this;}

    /**
     * <p>The location where the comma-separated value (.csv) files are stored before
     * being uploaded to the S3 bucket. </p>
     */
    inline RedshiftSettings& WithBucketFolder(const char* value) { SetBucketFolder(value); return *this;}


    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline RedshiftSettings& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline RedshiftSettings& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket you want to use</p>
     */
    inline RedshiftSettings& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>A value that sets the amount of time to wait (in milliseconds) before timing
     * out, beginning from when you initially establish a connection.</p>
     */
    inline int GetConnectionTimeout() const{ return m_connectionTimeout; }

    /**
     * <p>A value that sets the amount of time to wait (in milliseconds) before timing
     * out, beginning from when you initially establish a connection.</p>
     */
    inline bool ConnectionTimeoutHasBeenSet() const { return m_connectionTimeoutHasBeenSet; }

    /**
     * <p>A value that sets the amount of time to wait (in milliseconds) before timing
     * out, beginning from when you initially establish a connection.</p>
     */
    inline void SetConnectionTimeout(int value) { m_connectionTimeoutHasBeenSet = true; m_connectionTimeout = value; }

    /**
     * <p>A value that sets the amount of time to wait (in milliseconds) before timing
     * out, beginning from when you initially establish a connection.</p>
     */
    inline RedshiftSettings& WithConnectionTimeout(int value) { SetConnectionTimeout(value); return *this;}


    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline RedshiftSettings& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline RedshiftSettings& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Redshift data warehouse (service) that you are working
     * with.</p>
     */
    inline RedshiftSettings& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline const Aws::String& GetDateFormat() const{ return m_dateFormat; }

    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline bool DateFormatHasBeenSet() const { return m_dateFormatHasBeenSet; }

    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline void SetDateFormat(const Aws::String& value) { m_dateFormatHasBeenSet = true; m_dateFormat = value; }

    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline void SetDateFormat(Aws::String&& value) { m_dateFormatHasBeenSet = true; m_dateFormat = std::move(value); }

    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline void SetDateFormat(const char* value) { m_dateFormatHasBeenSet = true; m_dateFormat.assign(value); }

    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline RedshiftSettings& WithDateFormat(const Aws::String& value) { SetDateFormat(value); return *this;}

    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline RedshiftSettings& WithDateFormat(Aws::String&& value) { SetDateFormat(std::move(value)); return *this;}

    /**
     * <p>The date format that you are using. Valid values are <code>auto</code>
     * (case-sensitive), your date format string enclosed in quotes, or NULL. If this
     * parameter is left unset (NULL), it defaults to a format of 'YYYY-MM-DD'. Using
     * <code>auto</code> recognizes most strings, even some that aren't supported when
     * you use a date format string. </p> <p>If your date and time values use formats
     * different from each other, set this to <code>auto</code>. </p>
     */
    inline RedshiftSettings& WithDateFormat(const char* value) { SetDateFormat(value); return *this;}


    /**
     * <p>A value that specifies whether AWS DMS should migrate empty CHAR and VARCHAR
     * fields as NULL. A value of <code>true</code> sets empty CHAR and VARCHAR fields
     * to null. The default is <code>false</code>.</p>
     */
    inline bool GetEmptyAsNull() const{ return m_emptyAsNull; }

    /**
     * <p>A value that specifies whether AWS DMS should migrate empty CHAR and VARCHAR
     * fields as NULL. A value of <code>true</code> sets empty CHAR and VARCHAR fields
     * to null. The default is <code>false</code>.</p>
     */
    inline bool EmptyAsNullHasBeenSet() const { return m_emptyAsNullHasBeenSet; }

    /**
     * <p>A value that specifies whether AWS DMS should migrate empty CHAR and VARCHAR
     * fields as NULL. A value of <code>true</code> sets empty CHAR and VARCHAR fields
     * to null. The default is <code>false</code>.</p>
     */
    inline void SetEmptyAsNull(bool value) { m_emptyAsNullHasBeenSet = true; m_emptyAsNull = value; }

    /**
     * <p>A value that specifies whether AWS DMS should migrate empty CHAR and VARCHAR
     * fields as NULL. A value of <code>true</code> sets empty CHAR and VARCHAR fields
     * to null. The default is <code>false</code>.</p>
     */
    inline RedshiftSettings& WithEmptyAsNull(bool value) { SetEmptyAsNull(value); return *this;}


    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. To use <code>SSE_S3</code>, create an AWS
     * Identity and Access Management (IAM) role with a policy that allows
     * <code>"arn:aws:s3:::*"</code> to use the following actions:
     * <code>"s3:PutObject", "s3:ListBucket"</code> </p>
     */
    inline const EncryptionModeValue& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. To use <code>SSE_S3</code>, create an AWS
     * Identity and Access Management (IAM) role with a policy that allows
     * <code>"arn:aws:s3:::*"</code> to use the following actions:
     * <code>"s3:PutObject", "s3:ListBucket"</code> </p>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. To use <code>SSE_S3</code>, create an AWS
     * Identity and Access Management (IAM) role with a policy that allows
     * <code>"arn:aws:s3:::*"</code> to use the following actions:
     * <code>"s3:PutObject", "s3:ListBucket"</code> </p>
     */
    inline void SetEncryptionMode(const EncryptionModeValue& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. To use <code>SSE_S3</code>, create an AWS
     * Identity and Access Management (IAM) role with a policy that allows
     * <code>"arn:aws:s3:::*"</code> to use the following actions:
     * <code>"s3:PutObject", "s3:ListBucket"</code> </p>
     */
    inline void SetEncryptionMode(EncryptionModeValue&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. To use <code>SSE_S3</code>, create an AWS
     * Identity and Access Management (IAM) role with a policy that allows
     * <code>"arn:aws:s3:::*"</code> to use the following actions:
     * <code>"s3:PutObject", "s3:ListBucket"</code> </p>
     */
    inline RedshiftSettings& WithEncryptionMode(const EncryptionModeValue& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p>The type of server-side encryption that you want to use for your data. This
     * encryption type is part of the endpoint settings or the extra connections
     * attributes for Amazon S3. You can choose either <code>SSE_S3</code> (the
     * default) or <code>SSE_KMS</code>. To use <code>SSE_S3</code>, create an AWS
     * Identity and Access Management (IAM) role with a policy that allows
     * <code>"arn:aws:s3:::*"</code> to use the following actions:
     * <code>"s3:PutObject", "s3:ListBucket"</code> </p>
     */
    inline RedshiftSettings& WithEncryptionMode(EncryptionModeValue&& value) { SetEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The number of threads used to upload a single file. This parameter accepts a
     * value from 1 through 64. It defaults to 10.</p>
     */
    inline int GetFileTransferUploadStreams() const{ return m_fileTransferUploadStreams; }

    /**
     * <p>The number of threads used to upload a single file. This parameter accepts a
     * value from 1 through 64. It defaults to 10.</p>
     */
    inline bool FileTransferUploadStreamsHasBeenSet() const { return m_fileTransferUploadStreamsHasBeenSet; }

    /**
     * <p>The number of threads used to upload a single file. This parameter accepts a
     * value from 1 through 64. It defaults to 10.</p>
     */
    inline void SetFileTransferUploadStreams(int value) { m_fileTransferUploadStreamsHasBeenSet = true; m_fileTransferUploadStreams = value; }

    /**
     * <p>The number of threads used to upload a single file. This parameter accepts a
     * value from 1 through 64. It defaults to 10.</p>
     */
    inline RedshiftSettings& WithFileTransferUploadStreams(int value) { SetFileTransferUploadStreams(value); return *this;}


    /**
     * <p>The amount of time to wait (in milliseconds) before timing out, beginning
     * from when you begin loading.</p>
     */
    inline int GetLoadTimeout() const{ return m_loadTimeout; }

    /**
     * <p>The amount of time to wait (in milliseconds) before timing out, beginning
     * from when you begin loading.</p>
     */
    inline bool LoadTimeoutHasBeenSet() const { return m_loadTimeoutHasBeenSet; }

    /**
     * <p>The amount of time to wait (in milliseconds) before timing out, beginning
     * from when you begin loading.</p>
     */
    inline void SetLoadTimeout(int value) { m_loadTimeoutHasBeenSet = true; m_loadTimeout = value; }

    /**
     * <p>The amount of time to wait (in milliseconds) before timing out, beginning
     * from when you begin loading.</p>
     */
    inline RedshiftSettings& WithLoadTimeout(int value) { SetLoadTimeout(value); return *this;}


    /**
     * <p>The maximum size (in KB) of any .csv file used to transfer data to Amazon
     * Redshift. This accepts a value from 1 through 1,048,576. It defaults to 32,768
     * KB (32 MB).</p>
     */
    inline int GetMaxFileSize() const{ return m_maxFileSize; }

    /**
     * <p>The maximum size (in KB) of any .csv file used to transfer data to Amazon
     * Redshift. This accepts a value from 1 through 1,048,576. It defaults to 32,768
     * KB (32 MB).</p>
     */
    inline bool MaxFileSizeHasBeenSet() const { return m_maxFileSizeHasBeenSet; }

    /**
     * <p>The maximum size (in KB) of any .csv file used to transfer data to Amazon
     * Redshift. This accepts a value from 1 through 1,048,576. It defaults to 32,768
     * KB (32 MB).</p>
     */
    inline void SetMaxFileSize(int value) { m_maxFileSizeHasBeenSet = true; m_maxFileSize = value; }

    /**
     * <p>The maximum size (in KB) of any .csv file used to transfer data to Amazon
     * Redshift. This accepts a value from 1 through 1,048,576. It defaults to 32,768
     * KB (32 MB).</p>
     */
    inline RedshiftSettings& WithMaxFileSize(int value) { SetMaxFileSize(value); return *this;}


    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline RedshiftSettings& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline RedshiftSettings& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the user named in the <code>username</code> property.</p>
     */
    inline RedshiftSettings& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The port number for Amazon Redshift. The default value is 5439.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number for Amazon Redshift. The default value is 5439.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number for Amazon Redshift. The default value is 5439.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number for Amazon Redshift. The default value is 5439.</p>
     */
    inline RedshiftSettings& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>A value that specifies to remove surrounding quotation marks from strings in
     * the incoming data. All characters within the quotation marks, including
     * delimiters, are retained. Choose <code>true</code> to remove quotation marks.
     * The default is <code>false</code>.</p>
     */
    inline bool GetRemoveQuotes() const{ return m_removeQuotes; }

    /**
     * <p>A value that specifies to remove surrounding quotation marks from strings in
     * the incoming data. All characters within the quotation marks, including
     * delimiters, are retained. Choose <code>true</code> to remove quotation marks.
     * The default is <code>false</code>.</p>
     */
    inline bool RemoveQuotesHasBeenSet() const { return m_removeQuotesHasBeenSet; }

    /**
     * <p>A value that specifies to remove surrounding quotation marks from strings in
     * the incoming data. All characters within the quotation marks, including
     * delimiters, are retained. Choose <code>true</code> to remove quotation marks.
     * The default is <code>false</code>.</p>
     */
    inline void SetRemoveQuotes(bool value) { m_removeQuotesHasBeenSet = true; m_removeQuotes = value; }

    /**
     * <p>A value that specifies to remove surrounding quotation marks from strings in
     * the incoming data. All characters within the quotation marks, including
     * delimiters, are retained. Choose <code>true</code> to remove quotation marks.
     * The default is <code>false</code>.</p>
     */
    inline RedshiftSettings& WithRemoveQuotes(bool value) { SetRemoveQuotes(value); return *this;}


    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline const Aws::String& GetReplaceInvalidChars() const{ return m_replaceInvalidChars; }

    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline bool ReplaceInvalidCharsHasBeenSet() const { return m_replaceInvalidCharsHasBeenSet; }

    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline void SetReplaceInvalidChars(const Aws::String& value) { m_replaceInvalidCharsHasBeenSet = true; m_replaceInvalidChars = value; }

    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline void SetReplaceInvalidChars(Aws::String&& value) { m_replaceInvalidCharsHasBeenSet = true; m_replaceInvalidChars = std::move(value); }

    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline void SetReplaceInvalidChars(const char* value) { m_replaceInvalidCharsHasBeenSet = true; m_replaceInvalidChars.assign(value); }

    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline RedshiftSettings& WithReplaceInvalidChars(const Aws::String& value) { SetReplaceInvalidChars(value); return *this;}

    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline RedshiftSettings& WithReplaceInvalidChars(Aws::String&& value) { SetReplaceInvalidChars(std::move(value)); return *this;}

    /**
     * <p>A list of characters that you want to replace. Use with
     * <code>ReplaceChars</code>.</p>
     */
    inline RedshiftSettings& WithReplaceInvalidChars(const char* value) { SetReplaceInvalidChars(value); return *this;}


    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline const Aws::String& GetReplaceChars() const{ return m_replaceChars; }

    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline bool ReplaceCharsHasBeenSet() const { return m_replaceCharsHasBeenSet; }

    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline void SetReplaceChars(const Aws::String& value) { m_replaceCharsHasBeenSet = true; m_replaceChars = value; }

    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline void SetReplaceChars(Aws::String&& value) { m_replaceCharsHasBeenSet = true; m_replaceChars = std::move(value); }

    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline void SetReplaceChars(const char* value) { m_replaceCharsHasBeenSet = true; m_replaceChars.assign(value); }

    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline RedshiftSettings& WithReplaceChars(const Aws::String& value) { SetReplaceChars(value); return *this;}

    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline RedshiftSettings& WithReplaceChars(Aws::String&& value) { SetReplaceChars(std::move(value)); return *this;}

    /**
     * <p>A value that specifies to replaces the invalid characters specified in
     * <code>ReplaceInvalidChars</code>, substituting the specified characters instead.
     * The default is <code>"?"</code>.</p>
     */
    inline RedshiftSettings& WithReplaceChars(const char* value) { SetReplaceChars(value); return *this;}


    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline const Aws::String& GetServerName() const{ return m_serverName; }

    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline void SetServerName(const Aws::String& value) { m_serverNameHasBeenSet = true; m_serverName = value; }

    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline void SetServerName(Aws::String&& value) { m_serverNameHasBeenSet = true; m_serverName = std::move(value); }

    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline void SetServerName(const char* value) { m_serverNameHasBeenSet = true; m_serverName.assign(value); }

    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline RedshiftSettings& WithServerName(const Aws::String& value) { SetServerName(value); return *this;}

    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline RedshiftSettings& WithServerName(Aws::String&& value) { SetServerName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Redshift cluster you are using.</p>
     */
    inline RedshiftSettings& WithServerName(const char* value) { SetServerName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline const Aws::String& GetServiceAccessRoleArn() const{ return m_serviceAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline bool ServiceAccessRoleArnHasBeenSet() const { return m_serviceAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline void SetServiceAccessRoleArn(const Aws::String& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline void SetServiceAccessRoleArn(Aws::String&& value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline void SetServiceAccessRoleArn(const char* value) { m_serviceAccessRoleArnHasBeenSet = true; m_serviceAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline RedshiftSettings& WithServiceAccessRoleArn(const Aws::String& value) { SetServiceAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline RedshiftSettings& WithServiceAccessRoleArn(Aws::String&& value) { SetServiceAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that has access to the Amazon
     * Redshift service.</p>
     */
    inline RedshiftSettings& WithServiceAccessRoleArn(const char* value) { SetServiceAccessRoleArn(value); return *this;}


    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline const Aws::String& GetServerSideEncryptionKmsKeyId() const{ return m_serverSideEncryptionKmsKeyId; }

    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline bool ServerSideEncryptionKmsKeyIdHasBeenSet() const { return m_serverSideEncryptionKmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const Aws::String& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = value; }

    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline void SetServerSideEncryptionKmsKeyId(Aws::String&& value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline void SetServerSideEncryptionKmsKeyId(const char* value) { m_serverSideEncryptionKmsKeyIdHasBeenSet = true; m_serverSideEncryptionKmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline RedshiftSettings& WithServerSideEncryptionKmsKeyId(const Aws::String& value) { SetServerSideEncryptionKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline RedshiftSettings& WithServerSideEncryptionKmsKeyId(Aws::String&& value) { SetServerSideEncryptionKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key ID. If you are using <code>SSE_KMS</code> for the
     * <code>EncryptionMode</code>, provide this key ID. The key that you use needs an
     * attached policy that enables IAM user permissions and allows use of the key.</p>
     */
    inline RedshiftSettings& WithServerSideEncryptionKmsKeyId(const char* value) { SetServerSideEncryptionKmsKeyId(value); return *this;}


    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline const Aws::String& GetTimeFormat() const{ return m_timeFormat; }

    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline bool TimeFormatHasBeenSet() const { return m_timeFormatHasBeenSet; }

    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline void SetTimeFormat(const Aws::String& value) { m_timeFormatHasBeenSet = true; m_timeFormat = value; }

    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline void SetTimeFormat(Aws::String&& value) { m_timeFormatHasBeenSet = true; m_timeFormat = std::move(value); }

    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline void SetTimeFormat(const char* value) { m_timeFormatHasBeenSet = true; m_timeFormat.assign(value); }

    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline RedshiftSettings& WithTimeFormat(const Aws::String& value) { SetTimeFormat(value); return *this;}

    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline RedshiftSettings& WithTimeFormat(Aws::String&& value) { SetTimeFormat(std::move(value)); return *this;}

    /**
     * <p>The time format that you want to use. Valid values are <code>auto</code>
     * (case-sensitive), <code>'timeformat_string'</code>, <code>'epochsecs'</code>, or
     * <code>'epochmillisecs'</code>. It defaults to 10. Using <code>auto</code>
     * recognizes most strings, even some that aren't supported when you use a time
     * format string. </p> <p>If your date and time values use formats different from
     * each other, set this parameter to <code>auto</code>. </p>
     */
    inline RedshiftSettings& WithTimeFormat(const char* value) { SetTimeFormat(value); return *this;}


    /**
     * <p>A value that specifies to remove the trailing white space characters from a
     * VARCHAR string. This parameter applies only to columns with a VARCHAR data type.
     * Choose <code>true</code> to remove unneeded white space. The default is
     * <code>false</code>.</p>
     */
    inline bool GetTrimBlanks() const{ return m_trimBlanks; }

    /**
     * <p>A value that specifies to remove the trailing white space characters from a
     * VARCHAR string. This parameter applies only to columns with a VARCHAR data type.
     * Choose <code>true</code> to remove unneeded white space. The default is
     * <code>false</code>.</p>
     */
    inline bool TrimBlanksHasBeenSet() const { return m_trimBlanksHasBeenSet; }

    /**
     * <p>A value that specifies to remove the trailing white space characters from a
     * VARCHAR string. This parameter applies only to columns with a VARCHAR data type.
     * Choose <code>true</code> to remove unneeded white space. The default is
     * <code>false</code>.</p>
     */
    inline void SetTrimBlanks(bool value) { m_trimBlanksHasBeenSet = true; m_trimBlanks = value; }

    /**
     * <p>A value that specifies to remove the trailing white space characters from a
     * VARCHAR string. This parameter applies only to columns with a VARCHAR data type.
     * Choose <code>true</code> to remove unneeded white space. The default is
     * <code>false</code>.</p>
     */
    inline RedshiftSettings& WithTrimBlanks(bool value) { SetTrimBlanks(value); return *this;}


    /**
     * <p>A value that specifies to truncate data in columns to the appropriate number
     * of characters, so that the data fits in the column. This parameter applies only
     * to columns with a VARCHAR or CHAR data type, and rows with a size of 4 MB or
     * less. Choose <code>true</code> to truncate data. The default is
     * <code>false</code>.</p>
     */
    inline bool GetTruncateColumns() const{ return m_truncateColumns; }

    /**
     * <p>A value that specifies to truncate data in columns to the appropriate number
     * of characters, so that the data fits in the column. This parameter applies only
     * to columns with a VARCHAR or CHAR data type, and rows with a size of 4 MB or
     * less. Choose <code>true</code> to truncate data. The default is
     * <code>false</code>.</p>
     */
    inline bool TruncateColumnsHasBeenSet() const { return m_truncateColumnsHasBeenSet; }

    /**
     * <p>A value that specifies to truncate data in columns to the appropriate number
     * of characters, so that the data fits in the column. This parameter applies only
     * to columns with a VARCHAR or CHAR data type, and rows with a size of 4 MB or
     * less. Choose <code>true</code> to truncate data. The default is
     * <code>false</code>.</p>
     */
    inline void SetTruncateColumns(bool value) { m_truncateColumnsHasBeenSet = true; m_truncateColumns = value; }

    /**
     * <p>A value that specifies to truncate data in columns to the appropriate number
     * of characters, so that the data fits in the column. This parameter applies only
     * to columns with a VARCHAR or CHAR data type, and rows with a size of 4 MB or
     * less. Choose <code>true</code> to truncate data. The default is
     * <code>false</code>.</p>
     */
    inline RedshiftSettings& WithTruncateColumns(bool value) { SetTruncateColumns(value); return *this;}


    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline RedshiftSettings& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline RedshiftSettings& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>An Amazon Redshift user name for a registered user.</p>
     */
    inline RedshiftSettings& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The size of the write buffer to use in rows. Valid values range from 1
     * through 2,048. The default is 1,024. Use this setting to tune performance. </p>
     */
    inline int GetWriteBufferSize() const{ return m_writeBufferSize; }

    /**
     * <p>The size of the write buffer to use in rows. Valid values range from 1
     * through 2,048. The default is 1,024. Use this setting to tune performance. </p>
     */
    inline bool WriteBufferSizeHasBeenSet() const { return m_writeBufferSizeHasBeenSet; }

    /**
     * <p>The size of the write buffer to use in rows. Valid values range from 1
     * through 2,048. The default is 1,024. Use this setting to tune performance. </p>
     */
    inline void SetWriteBufferSize(int value) { m_writeBufferSizeHasBeenSet = true; m_writeBufferSize = value; }

    /**
     * <p>The size of the write buffer to use in rows. Valid values range from 1
     * through 2,048. The default is 1,024. Use this setting to tune performance. </p>
     */
    inline RedshiftSettings& WithWriteBufferSize(int value) { SetWriteBufferSize(value); return *this;}

  private:

    bool m_acceptAnyDate;
    bool m_acceptAnyDateHasBeenSet;

    Aws::String m_afterConnectScript;
    bool m_afterConnectScriptHasBeenSet;

    Aws::String m_bucketFolder;
    bool m_bucketFolderHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    int m_connectionTimeout;
    bool m_connectionTimeoutHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_dateFormat;
    bool m_dateFormatHasBeenSet;

    bool m_emptyAsNull;
    bool m_emptyAsNullHasBeenSet;

    EncryptionModeValue m_encryptionMode;
    bool m_encryptionModeHasBeenSet;

    int m_fileTransferUploadStreams;
    bool m_fileTransferUploadStreamsHasBeenSet;

    int m_loadTimeout;
    bool m_loadTimeoutHasBeenSet;

    int m_maxFileSize;
    bool m_maxFileSizeHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    int m_port;
    bool m_portHasBeenSet;

    bool m_removeQuotes;
    bool m_removeQuotesHasBeenSet;

    Aws::String m_replaceInvalidChars;
    bool m_replaceInvalidCharsHasBeenSet;

    Aws::String m_replaceChars;
    bool m_replaceCharsHasBeenSet;

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet;

    Aws::String m_serviceAccessRoleArn;
    bool m_serviceAccessRoleArnHasBeenSet;

    Aws::String m_serverSideEncryptionKmsKeyId;
    bool m_serverSideEncryptionKmsKeyIdHasBeenSet;

    Aws::String m_timeFormat;
    bool m_timeFormatHasBeenSet;

    bool m_trimBlanks;
    bool m_trimBlanksHasBeenSet;

    bool m_truncateColumns;
    bool m_truncateColumnsHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    int m_writeBufferSize;
    bool m_writeBufferSizeHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
