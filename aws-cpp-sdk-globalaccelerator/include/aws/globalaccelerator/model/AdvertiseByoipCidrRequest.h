﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class AWS_GLOBALACCELERATOR_API AdvertiseByoipCidrRequest : public GlobalAcceleratorRequest
  {
  public:
    AdvertiseByoipCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdvertiseByoipCidr"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline AdvertiseByoipCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline AdvertiseByoipCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline AdvertiseByoipCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
