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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API RestoreWorkspaceRequest : public WorkSpacesRequest
  {
  public:
    RestoreWorkspaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreWorkspace"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline RestoreWorkspaceRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline RestoreWorkspaceRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the WorkSpace.</p>
     */
    inline RestoreWorkspaceRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>Indicates whether to create snapshots of the root volume and user volume
     * before restoring the WorkSpace.</p>
     */
    inline bool GetSnapshotCurrentVolumes() const{ return m_snapshotCurrentVolumes; }

    /**
     * <p>Indicates whether to create snapshots of the root volume and user volume
     * before restoring the WorkSpace.</p>
     */
    inline bool SnapshotCurrentVolumesHasBeenSet() const { return m_snapshotCurrentVolumesHasBeenSet; }

    /**
     * <p>Indicates whether to create snapshots of the root volume and user volume
     * before restoring the WorkSpace.</p>
     */
    inline void SetSnapshotCurrentVolumes(bool value) { m_snapshotCurrentVolumesHasBeenSet = true; m_snapshotCurrentVolumes = value; }

    /**
     * <p>Indicates whether to create snapshots of the root volume and user volume
     * before restoring the WorkSpace.</p>
     */
    inline RestoreWorkspaceRequest& WithSnapshotCurrentVolumes(bool value) { SetSnapshotCurrentVolumes(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet;

    bool m_snapshotCurrentVolumes;
    bool m_snapshotCurrentVolumesHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
