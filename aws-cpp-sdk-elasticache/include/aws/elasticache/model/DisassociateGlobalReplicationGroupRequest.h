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
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class AWS_ELASTICACHE_API DisassociateGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    DisassociateGlobalReplicationGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateGlobalReplicationGroup"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const{ return m_globalReplicationGroupId; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const Aws::String& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = value; }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(Aws::String&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::move(value); }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline void SetGlobalReplicationGroupId(const char* value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId.assign(value); }

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const Aws::String& value) { SetGlobalReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(Aws::String&& value) { SetGlobalReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the Global Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(const char* value) { SetGlobalReplicationGroupId(value); return *this;}


    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline const Aws::String& GetReplicationGroupRegion() const{ return m_replicationGroupRegion; }

    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline bool ReplicationGroupRegionHasBeenSet() const { return m_replicationGroupRegionHasBeenSet; }

    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline void SetReplicationGroupRegion(const Aws::String& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = value; }

    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline void SetReplicationGroupRegion(Aws::String&& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = std::move(value); }

    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline void SetReplicationGroupRegion(const char* value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion.assign(value); }

    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithReplicationGroupRegion(const Aws::String& value) { SetReplicationGroupRegion(value); return *this;}

    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithReplicationGroupRegion(Aws::String&& value) { SetReplicationGroupRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region of secondary cluster you wish to remove from the Global
     * Datastore</p>
     */
    inline DisassociateGlobalReplicationGroupRequest& WithReplicationGroupRegion(const char* value) { SetReplicationGroupRegion(value); return *this;}

  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet;

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet;

    Aws::String m_replicationGroupRegion;
    bool m_replicationGroupRegionHasBeenSet;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
