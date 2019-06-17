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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppMesh
{
namespace Model
{

  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualNodeInput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API DescribeVirtualNodeRequest : public AppMeshRequest
  {
  public:
    DescribeVirtualNodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVirtualNode"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline const Aws::String& GetMeshName() const{ return m_meshName; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline bool MeshNameHasBeenSet() const { return m_meshNameHasBeenSet; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(const Aws::String& value) { m_meshNameHasBeenSet = true; m_meshName = value; }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(Aws::String&& value) { m_meshNameHasBeenSet = true; m_meshName = std::move(value); }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline void SetMeshName(const char* value) { m_meshNameHasBeenSet = true; m_meshName.assign(value); }

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline DescribeVirtualNodeRequest& WithMeshName(const Aws::String& value) { SetMeshName(value); return *this;}

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline DescribeVirtualNodeRequest& WithMeshName(Aws::String&& value) { SetMeshName(std::move(value)); return *this;}

    /**
     * <p>The name of the service mesh that the virtual node resides in.</p>
     */
    inline DescribeVirtualNodeRequest& WithMeshName(const char* value) { SetMeshName(value); return *this;}


    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline const Aws::String& GetVirtualNodeName() const{ return m_virtualNodeName; }

    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline bool VirtualNodeNameHasBeenSet() const { return m_virtualNodeNameHasBeenSet; }

    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline void SetVirtualNodeName(const Aws::String& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = value; }

    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline void SetVirtualNodeName(Aws::String&& value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName = std::move(value); }

    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline void SetVirtualNodeName(const char* value) { m_virtualNodeNameHasBeenSet = true; m_virtualNodeName.assign(value); }

    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline DescribeVirtualNodeRequest& WithVirtualNodeName(const Aws::String& value) { SetVirtualNodeName(value); return *this;}

    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline DescribeVirtualNodeRequest& WithVirtualNodeName(Aws::String&& value) { SetVirtualNodeName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual node to describe.</p>
     */
    inline DescribeVirtualNodeRequest& WithVirtualNodeName(const char* value) { SetVirtualNodeName(value); return *this;}

  private:

    Aws::String m_meshName;
    bool m_meshNameHasBeenSet;

    Aws::String m_virtualNodeName;
    bool m_virtualNodeNameHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
