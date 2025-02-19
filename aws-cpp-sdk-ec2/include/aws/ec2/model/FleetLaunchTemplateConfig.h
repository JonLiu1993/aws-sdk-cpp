﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetLaunchTemplateSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/FleetLaunchTemplateOverrides.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a launch template and overrides.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetLaunchTemplateConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API FleetLaunchTemplateConfig
  {
  public:
    FleetLaunchTemplateConfig();
    FleetLaunchTemplateConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    FleetLaunchTemplateConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The launch template.</p>
     */
    inline const FleetLaunchTemplateSpecification& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }

    /**
     * <p>The launch template.</p>
     */
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }

    /**
     * <p>The launch template.</p>
     */
    inline void SetLaunchTemplateSpecification(const FleetLaunchTemplateSpecification& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }

    /**
     * <p>The launch template.</p>
     */
    inline void SetLaunchTemplateSpecification(FleetLaunchTemplateSpecification&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }

    /**
     * <p>The launch template.</p>
     */
    inline FleetLaunchTemplateConfig& WithLaunchTemplateSpecification(const FleetLaunchTemplateSpecification& value) { SetLaunchTemplateSpecification(value); return *this;}

    /**
     * <p>The launch template.</p>
     */
    inline FleetLaunchTemplateConfig& WithLaunchTemplateSpecification(FleetLaunchTemplateSpecification&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}


    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline const Aws::Vector<FleetLaunchTemplateOverrides>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline void SetOverrides(const Aws::Vector<FleetLaunchTemplateOverrides>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline void SetOverrides(Aws::Vector<FleetLaunchTemplateOverrides>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfig& WithOverrides(const Aws::Vector<FleetLaunchTemplateOverrides>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfig& WithOverrides(Aws::Vector<FleetLaunchTemplateOverrides>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfig& AddOverrides(const FleetLaunchTemplateOverrides& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Any parameters that you specify override the same parameters in the launch
     * template.</p>
     */
    inline FleetLaunchTemplateConfig& AddOverrides(FleetLaunchTemplateOverrides&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }

  private:

    FleetLaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    Aws::Vector<FleetLaunchTemplateOverrides> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
