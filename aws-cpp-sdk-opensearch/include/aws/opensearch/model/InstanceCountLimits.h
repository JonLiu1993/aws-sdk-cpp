﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p> InstanceCountLimits represents the limits on the number of instances that
   * can be created in Amazon OpenSearch Service for a given InstanceType.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/InstanceCountLimits">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API InstanceCountLimits
  {
  public:
    InstanceCountLimits();
    InstanceCountLimits(Aws::Utils::Json::JsonView jsonValue);
    InstanceCountLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetMinimumInstanceCount() const{ return m_minimumInstanceCount; }

    
    inline bool MinimumInstanceCountHasBeenSet() const { return m_minimumInstanceCountHasBeenSet; }

    
    inline void SetMinimumInstanceCount(int value) { m_minimumInstanceCountHasBeenSet = true; m_minimumInstanceCount = value; }

    
    inline InstanceCountLimits& WithMinimumInstanceCount(int value) { SetMinimumInstanceCount(value); return *this;}


    
    inline int GetMaximumInstanceCount() const{ return m_maximumInstanceCount; }

    
    inline bool MaximumInstanceCountHasBeenSet() const { return m_maximumInstanceCountHasBeenSet; }

    
    inline void SetMaximumInstanceCount(int value) { m_maximumInstanceCountHasBeenSet = true; m_maximumInstanceCount = value; }

    
    inline InstanceCountLimits& WithMaximumInstanceCount(int value) { SetMaximumInstanceCount(value); return *this;}

  private:

    int m_minimumInstanceCount;
    bool m_minimumInstanceCountHasBeenSet = false;

    int m_maximumInstanceCount;
    bool m_maximumInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
