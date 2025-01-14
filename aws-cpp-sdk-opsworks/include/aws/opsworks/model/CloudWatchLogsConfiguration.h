﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/CloudWatchLogsLogStream.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes the Amazon CloudWatch logs configuration for a layer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloudWatchLogsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API CloudWatchLogsConfiguration
  {
  public:
    CloudWatchLogsConfiguration();
    CloudWatchLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether CloudWatch Logs is enabled for a layer.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Whether CloudWatch Logs is enabled for a layer.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Whether CloudWatch Logs is enabled for a layer.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Whether CloudWatch Logs is enabled for a layer.</p>
     */
    inline CloudWatchLogsConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline const Aws::Vector<CloudWatchLogsLogStream>& GetLogStreams() const{ return m_logStreams; }

    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline bool LogStreamsHasBeenSet() const { return m_logStreamsHasBeenSet; }

    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline void SetLogStreams(const Aws::Vector<CloudWatchLogsLogStream>& value) { m_logStreamsHasBeenSet = true; m_logStreams = value; }

    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline void SetLogStreams(Aws::Vector<CloudWatchLogsLogStream>&& value) { m_logStreamsHasBeenSet = true; m_logStreams = std::move(value); }

    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline CloudWatchLogsConfiguration& WithLogStreams(const Aws::Vector<CloudWatchLogsLogStream>& value) { SetLogStreams(value); return *this;}

    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline CloudWatchLogsConfiguration& WithLogStreams(Aws::Vector<CloudWatchLogsLogStream>&& value) { SetLogStreams(std::move(value)); return *this;}

    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline CloudWatchLogsConfiguration& AddLogStreams(const CloudWatchLogsLogStream& value) { m_logStreamsHasBeenSet = true; m_logStreams.push_back(value); return *this; }

    /**
     * <p>A list of configuration options for CloudWatch Logs.</p>
     */
    inline CloudWatchLogsConfiguration& AddLogStreams(CloudWatchLogsLogStream&& value) { m_logStreamsHasBeenSet = true; m_logStreams.push_back(std::move(value)); return *this; }

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<CloudWatchLogsLogStream> m_logStreams;
    bool m_logStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
