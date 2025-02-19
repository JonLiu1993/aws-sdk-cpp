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
   * <p>Represents the input to
   * <a>RemoveSourceIdentifierFromSubscription</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/RemoveSourceIdentifierFromSubscriptionMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API RemoveSourceIdentifierFromSubscriptionRequest : public DocDBRequest
  {
  public:
    RemoveSourceIdentifierFromSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveSourceIdentifierFromSubscription"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon DocumentDB event notification subscription that you
     * want to remove a source identifier from.</p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}


    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p> The source identifier to be removed from the subscription, such as the
     * instance identifier for an instance, or the name of a security group. </p>
     */
    inline RemoveSourceIdentifierFromSubscriptionRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}

  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
