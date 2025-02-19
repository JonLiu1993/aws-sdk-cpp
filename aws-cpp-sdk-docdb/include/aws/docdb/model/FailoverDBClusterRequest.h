﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>FailoverDBCluster</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/FailoverDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API FailoverDBClusterRequest : public DocDBRequest
  {
  public:
    FailoverDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A cluster identifier to force a failover for. This parameter is not case
     * sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing <code>DBCluster</code>.</p> </li> </ul>
     */
    inline FailoverDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline const Aws::String& GetTargetDBInstanceIdentifier() const{ return m_targetDBInstanceIdentifier; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline bool TargetDBInstanceIdentifierHasBeenSet() const { return m_targetDBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const Aws::String& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = value; }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(Aws::String&& value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier = std::move(value); }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline void SetTargetDBInstanceIdentifier(const char* value) { m_targetDBInstanceIdentifierHasBeenSet = true; m_targetDBInstanceIdentifier.assign(value); }

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(const Aws::String& value) { SetTargetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(Aws::String&& value) { SetTargetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the instance to promote to the primary instance.</p> <p>You must
     * specify the instance identifier for an Amazon DocumentDB replica in the cluster.
     * For example, <code>mydbcluster-replica1</code>.</p>
     */
    inline FailoverDBClusterRequest& WithTargetDBInstanceIdentifier(const char* value) { SetTargetDBInstanceIdentifier(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDBInstanceIdentifier;
    bool m_targetDBInstanceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
