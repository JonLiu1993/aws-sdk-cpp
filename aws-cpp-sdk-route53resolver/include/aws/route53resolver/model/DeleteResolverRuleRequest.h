﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AWS_ROUTE53RESOLVER_API DeleteResolverRuleRequest : public Route53ResolverRequest
  {
  public:
    DeleteResolverRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResolverRule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline const Aws::String& GetResolverRuleId() const{ return m_resolverRuleId; }

    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline bool ResolverRuleIdHasBeenSet() const { return m_resolverRuleIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline void SetResolverRuleId(const Aws::String& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = value; }

    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline void SetResolverRuleId(Aws::String&& value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId = std::move(value); }

    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline void SetResolverRuleId(const char* value) { m_resolverRuleIdHasBeenSet = true; m_resolverRuleId.assign(value); }

    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline DeleteResolverRuleRequest& WithResolverRuleId(const Aws::String& value) { SetResolverRuleId(value); return *this;}

    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline DeleteResolverRuleRequest& WithResolverRuleId(Aws::String&& value) { SetResolverRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver rule that you want to delete.</p>
     */
    inline DeleteResolverRuleRequest& WithResolverRuleId(const char* value) { SetResolverRuleId(value); return *this;}

  private:

    Aws::String m_resolverRuleId;
    bool m_resolverRuleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
