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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/KeyUsageType.h>
#include <aws/kms/model/OriginType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API CreateKeyRequest : public KMSRequest
  {
  public:
    CreateKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateKey"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline CreateKeyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline CreateKeyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The key policy to attach to the CMK.</p> <p>If you provide a key policy, it
     * must meet the following criteria:</p> <ul> <li> <p>If you don't set
     * <code>BypassPolicyLockoutSafetyCheck</code> to true, the key policy must allow
     * the principal that is making the <code>CreateKey</code> request to make a
     * subsequent <a>PutKeyPolicy</a> request on the CMK. This reduces the risk that
     * the CMK becomes unmanageable. For more information, refer to the scenario in the
     * <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section of the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </li> <li> <p>Each statement in the key policy must contain
     * one or more principals. The principals in the key policy must exist and be
     * visible to AWS KMS. When you create a new AWS principal (for example, an IAM
     * user or role), you might need to enforce a delay before including the new
     * principal in a key policy because the new principal might not be immediately
     * visible to AWS KMS. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/troubleshoot_general.html#troubleshoot_general_eventual-consistency">Changes
     * that I make are not always immediately visible</a> in the <i>AWS Identity and
     * Access Management User Guide</i>.</p> </li> </ul> <p>If you do not provide a key
     * policy, AWS KMS attaches a default key policy to the CMK. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default">Default
     * Key Policy</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>The key policy size limit is 32 kilobytes (32768 bytes).</p>
     */
    inline CreateKeyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline CreateKeyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline CreateKeyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the CMK.</p> <p>Use a description that helps you decide
     * whether the CMK is appropriate for a task.</p>
     */
    inline CreateKeyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline const KeyUsageType& GetKeyUsage() const{ return m_keyUsage; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline void SetKeyUsage(const KeyUsageType& value) { m_keyUsageHasBeenSet = true; m_keyUsage = value; }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline void SetKeyUsage(KeyUsageType&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::move(value); }

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline CreateKeyRequest& WithKeyUsage(const KeyUsageType& value) { SetKeyUsage(value); return *this;}

    /**
     * <p>The cryptographic operations for which you can use the CMK. The only valid
     * value is <code>ENCRYPT_DECRYPT</code>, which means you can use the CMK to
     * encrypt and decrypt data.</p>
     */
    inline CreateKeyRequest& WithKeyUsage(KeyUsageType&& value) { SetKeyUsage(std::move(value)); return *this;}


    /**
     * <p>The source of the key material for the CMK. You cannot change the origin
     * after you create the CMK.</p> <p>The default is <code>AWS_KMS</code>, which
     * means AWS KMS creates the key material in its own key store.</p> <p>When the
     * parameter value is <code>EXTERNAL</code>, AWS KMS creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>When the parameter value is <code>AWS_CLOUDHSM</code>, AWS KMS creates the
     * CMK in an AWS KMS <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and creates its key material in the associated AWS CloudHSM
     * cluster. You must also use the <code>CustomKeyStoreId</code> parameter to
     * identify the custom key store.</p>
     */
    inline const OriginType& GetOrigin() const{ return m_origin; }

    /**
     * <p>The source of the key material for the CMK. You cannot change the origin
     * after you create the CMK.</p> <p>The default is <code>AWS_KMS</code>, which
     * means AWS KMS creates the key material in its own key store.</p> <p>When the
     * parameter value is <code>EXTERNAL</code>, AWS KMS creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>When the parameter value is <code>AWS_CLOUDHSM</code>, AWS KMS creates the
     * CMK in an AWS KMS <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and creates its key material in the associated AWS CloudHSM
     * cluster. You must also use the <code>CustomKeyStoreId</code> parameter to
     * identify the custom key store.</p>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>The source of the key material for the CMK. You cannot change the origin
     * after you create the CMK.</p> <p>The default is <code>AWS_KMS</code>, which
     * means AWS KMS creates the key material in its own key store.</p> <p>When the
     * parameter value is <code>EXTERNAL</code>, AWS KMS creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>When the parameter value is <code>AWS_CLOUDHSM</code>, AWS KMS creates the
     * CMK in an AWS KMS <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and creates its key material in the associated AWS CloudHSM
     * cluster. You must also use the <code>CustomKeyStoreId</code> parameter to
     * identify the custom key store.</p>
     */
    inline void SetOrigin(const OriginType& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>The source of the key material for the CMK. You cannot change the origin
     * after you create the CMK.</p> <p>The default is <code>AWS_KMS</code>, which
     * means AWS KMS creates the key material in its own key store.</p> <p>When the
     * parameter value is <code>EXTERNAL</code>, AWS KMS creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>When the parameter value is <code>AWS_CLOUDHSM</code>, AWS KMS creates the
     * CMK in an AWS KMS <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and creates its key material in the associated AWS CloudHSM
     * cluster. You must also use the <code>CustomKeyStoreId</code> parameter to
     * identify the custom key store.</p>
     */
    inline void SetOrigin(OriginType&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>The source of the key material for the CMK. You cannot change the origin
     * after you create the CMK.</p> <p>The default is <code>AWS_KMS</code>, which
     * means AWS KMS creates the key material in its own key store.</p> <p>When the
     * parameter value is <code>EXTERNAL</code>, AWS KMS creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>When the parameter value is <code>AWS_CLOUDHSM</code>, AWS KMS creates the
     * CMK in an AWS KMS <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and creates its key material in the associated AWS CloudHSM
     * cluster. You must also use the <code>CustomKeyStoreId</code> parameter to
     * identify the custom key store.</p>
     */
    inline CreateKeyRequest& WithOrigin(const OriginType& value) { SetOrigin(value); return *this;}

    /**
     * <p>The source of the key material for the CMK. You cannot change the origin
     * after you create the CMK.</p> <p>The default is <code>AWS_KMS</code>, which
     * means AWS KMS creates the key material in its own key store.</p> <p>When the
     * parameter value is <code>EXTERNAL</code>, AWS KMS creates a CMK without key
     * material so that you can import key material from your existing key management
     * infrastructure. For more information about importing key material into AWS KMS,
     * see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">Importing
     * Key Material</a> in the <i>AWS Key Management Service Developer Guide</i>.</p>
     * <p>When the parameter value is <code>AWS_CLOUDHSM</code>, AWS KMS creates the
     * CMK in an AWS KMS <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and creates its key material in the associated AWS CloudHSM
     * cluster. You must also use the <code>CustomKeyStoreId</code> parameter to
     * identify the custom key store.</p>
     */
    inline CreateKeyRequest& WithOrigin(OriginType&& value) { SetOrigin(std::move(value)); return *this;}


    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline const Aws::String& GetCustomKeyStoreId() const{ return m_customKeyStoreId; }

    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline bool CustomKeyStoreIdHasBeenSet() const { return m_customKeyStoreIdHasBeenSet; }

    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline void SetCustomKeyStoreId(const Aws::String& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = value; }

    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline void SetCustomKeyStoreId(Aws::String&& value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId = std::move(value); }

    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline void SetCustomKeyStoreId(const char* value) { m_customKeyStoreIdHasBeenSet = true; m_customKeyStoreId.assign(value); }

    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline CreateKeyRequest& WithCustomKeyStoreId(const Aws::String& value) { SetCustomKeyStoreId(value); return *this;}

    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline CreateKeyRequest& WithCustomKeyStoreId(Aws::String&& value) { SetCustomKeyStoreId(std::move(value)); return *this;}

    /**
     * <p>Creates the CMK in the specified <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a> and the key material in its associated AWS CloudHSM cluster. To
     * create a CMK in a custom key store, you must also specify the
     * <code>Origin</code> parameter with a value of <code>AWS_CLOUDHSM</code>. The AWS
     * CloudHSM cluster that is associated with the custom key store must have at least
     * two active HSMs, each in a different Availability Zone in the Region.</p> <p>To
     * find the ID of a custom key store, use the <a>DescribeCustomKeyStores</a>
     * operation.</p> <p>The response includes the custom key store ID and the ID of
     * the AWS CloudHSM cluster.</p> <p>This operation is part of the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">Custom
     * Key Store feature</a> feature in AWS KMS, which combines the convenience and
     * extensive integration of AWS KMS with the isolation and control of a
     * single-tenant key store.</p>
     */
    inline CreateKeyRequest& WithCustomKeyStoreId(const char* value) { SetCustomKeyStoreId(value); return *this;}


    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the risk that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </important> <p>Use this parameter only when you include a
     * policy in the request and you intend to prevent the principal that is making the
     * request from making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p>
     * <p>The default value is false.</p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const{ return m_bypassPolicyLockoutSafetyCheck; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the risk that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </important> <p>Use this parameter only when you include a
     * policy in the request and you intend to prevent the principal that is making the
     * request from making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p>
     * <p>The default value is false.</p>
     */
    inline bool BypassPolicyLockoutSafetyCheckHasBeenSet() const { return m_bypassPolicyLockoutSafetyCheckHasBeenSet; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the risk that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </important> <p>Use this parameter only when you include a
     * policy in the request and you intend to prevent the principal that is making the
     * request from making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p>
     * <p>The default value is false.</p>
     */
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }

    /**
     * <p>A flag to indicate whether to bypass the key policy lockout safety check.</p>
     * <important> <p>Setting this value to true increases the risk that the CMK
     * becomes unmanageable. Do not set this value to true indiscriminately.</p> <p>For
     * more information, refer to the scenario in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html#key-policy-default-allow-root-enable-iam">Default
     * Key Policy</a> section in the <i> <i>AWS Key Management Service Developer
     * Guide</i> </i>.</p> </important> <p>Use this parameter only when you include a
     * policy in the request and you intend to prevent the principal that is making the
     * request from making a subsequent <a>PutKeyPolicy</a> request on the CMK.</p>
     * <p>The default value is false.</p>
     */
    inline CreateKeyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}


    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline CreateKeyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline CreateKeyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline CreateKeyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. Tag keys
     * and tag values are both required, but tag values can be empty (null)
     * strings.</p> <p>Use this parameter to tag the CMK when it is created.
     * Alternately, you can omit this parameter and instead tag the CMK after it is
     * created using <a>TagResource</a>.</p>
     */
    inline CreateKeyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    KeyUsageType m_keyUsage;
    bool m_keyUsageHasBeenSet;

    OriginType m_origin;
    bool m_originHasBeenSet;

    Aws::String m_customKeyStoreId;
    bool m_customKeyStoreIdHasBeenSet;

    bool m_bypassPolicyLockoutSafetyCheck;
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
