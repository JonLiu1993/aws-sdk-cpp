﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The input configuration for a canary deployment.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/DeploymentCanarySettings">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API DeploymentCanarySettings
  {
  public:
    DeploymentCanarySettings();
    DeploymentCanarySettings(Aws::Utils::Json::JsonView jsonValue);
    DeploymentCanarySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The percentage (0.0-100.0) of traffic routed to the canary deployment.</p>
     */
    inline double GetPercentTraffic() const{ return m_percentTraffic; }

    /**
     * <p>The percentage (0.0-100.0) of traffic routed to the canary deployment.</p>
     */
    inline bool PercentTrafficHasBeenSet() const { return m_percentTrafficHasBeenSet; }

    /**
     * <p>The percentage (0.0-100.0) of traffic routed to the canary deployment.</p>
     */
    inline void SetPercentTraffic(double value) { m_percentTrafficHasBeenSet = true; m_percentTraffic = value; }

    /**
     * <p>The percentage (0.0-100.0) of traffic routed to the canary deployment.</p>
     */
    inline DeploymentCanarySettings& WithPercentTraffic(double value) { SetPercentTraffic(value); return *this;}


    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariableOverrides() const{ return m_stageVariableOverrides; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline bool StageVariableOverridesHasBeenSet() const { return m_stageVariableOverridesHasBeenSet; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline void SetStageVariableOverrides(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides = value; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline void SetStageVariableOverrides(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides = std::move(value); }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& WithStageVariableOverrides(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariableOverrides(value); return *this;}

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& WithStageVariableOverrides(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariableOverrides(std::move(value)); return *this;}

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& AddStageVariableOverrides(const Aws::String& key, const Aws::String& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, value); return *this; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& AddStageVariableOverrides(Aws::String&& key, const Aws::String& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& AddStageVariableOverrides(const Aws::String& key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& AddStageVariableOverrides(Aws::String&& key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& AddStageVariableOverrides(const char* key, Aws::String&& value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& AddStageVariableOverrides(Aws::String&& key, const char* value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>A stage variable overrides used for the canary release deployment. They can
     * override existing stage variables or add new stage variables for the canary
     * release deployment. These stage variables are represented as a string-to-string
     * map between stage variable names and their values.</p>
     */
    inline DeploymentCanarySettings& AddStageVariableOverrides(const char* key, const char* value) { m_stageVariableOverridesHasBeenSet = true; m_stageVariableOverrides.emplace(key, value); return *this; }


    /**
     * <p>A Boolean flag to indicate whether the canary release deployment uses the
     * stage cache or not.</p>
     */
    inline bool GetUseStageCache() const{ return m_useStageCache; }

    /**
     * <p>A Boolean flag to indicate whether the canary release deployment uses the
     * stage cache or not.</p>
     */
    inline bool UseStageCacheHasBeenSet() const { return m_useStageCacheHasBeenSet; }

    /**
     * <p>A Boolean flag to indicate whether the canary release deployment uses the
     * stage cache or not.</p>
     */
    inline void SetUseStageCache(bool value) { m_useStageCacheHasBeenSet = true; m_useStageCache = value; }

    /**
     * <p>A Boolean flag to indicate whether the canary release deployment uses the
     * stage cache or not.</p>
     */
    inline DeploymentCanarySettings& WithUseStageCache(bool value) { SetUseStageCache(value); return *this;}

  private:

    double m_percentTraffic;
    bool m_percentTrafficHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariableOverrides;
    bool m_stageVariableOverridesHasBeenSet = false;

    bool m_useStageCache;
    bool m_useStageCacheHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
