﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>The minimum and maximum number of network interfaces.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfaceCountRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API NetworkInterfaceCountRequest
  {
  public:
    NetworkInterfaceCountRequest();
    NetworkInterfaceCountRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkInterfaceCountRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum number of network interfaces. To specify no minimum limit, omit
     * this parameter.</p>
     */
    inline int GetMin() const{ return m_min; }

    /**
     * <p>The minimum number of network interfaces. To specify no minimum limit, omit
     * this parameter.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The minimum number of network interfaces. To specify no minimum limit, omit
     * this parameter.</p>
     */
    inline void SetMin(int value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The minimum number of network interfaces. To specify no minimum limit, omit
     * this parameter.</p>
     */
    inline NetworkInterfaceCountRequest& WithMin(int value) { SetMin(value); return *this;}


    /**
     * <p>The maximum number of network interfaces. To specify no maximum limit, omit
     * this parameter.</p>
     */
    inline int GetMax() const{ return m_max; }

    /**
     * <p>The maximum number of network interfaces. To specify no maximum limit, omit
     * this parameter.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum number of network interfaces. To specify no maximum limit, omit
     * this parameter.</p>
     */
    inline void SetMax(int value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum number of network interfaces. To specify no maximum limit, omit
     * this parameter.</p>
     */
    inline NetworkInterfaceCountRequest& WithMax(int value) { SetMax(value); return *this;}

  private:

    int m_min;
    bool m_minHasBeenSet = false;

    int m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
