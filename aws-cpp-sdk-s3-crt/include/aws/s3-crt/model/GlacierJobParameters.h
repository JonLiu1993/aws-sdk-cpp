﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/Tier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Crt
{
namespace Model
{

  /**
   * <p>Container for S3 Glacier job parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/GlacierJobParameters">AWS
   * API Reference</a></p>
   */
  class AWS_S3CRT_API GlacierJobParameters
  {
  public:
    GlacierJobParameters();
    GlacierJobParameters(const Aws::Utils::Xml::XmlNode& xmlNode);
    GlacierJobParameters& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline const Tier& GetTier() const{ return m_tier; }

    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }

    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline void SetTier(const Tier& value) { m_tierHasBeenSet = true; m_tier = value; }

    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline void SetTier(Tier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }

    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline GlacierJobParameters& WithTier(const Tier& value) { SetTier(value); return *this;}

    /**
     * <p>Retrieval tier at which the restore will be processed.</p>
     */
    inline GlacierJobParameters& WithTier(Tier&& value) { SetTier(std::move(value)); return *this;}

  private:

    Tier m_tier;
    bool m_tierHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Crt
} // namespace Aws
