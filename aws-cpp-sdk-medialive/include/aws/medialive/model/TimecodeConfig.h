﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TimecodeConfigSource.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Timecode Config<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TimecodeConfig">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API TimecodeConfig
  {
  public:
    TimecodeConfig();
    TimecodeConfig(Aws::Utils::Json::JsonView jsonValue);
    TimecodeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Identifies the source for the timecode that will be associated with the events
     * outputs.
-Embedded (embedded): Initialize the output timecode with timecode from
     * the the source.  If no embedded timecode is detected in the source, the system
     * falls back to using "Start at 0" (zerobased).
-System Clock (systemclock): Use
     * the UTC time.
-Start at 0 (zerobased): The time of the first frame of the event
     * will be 00:00:00:00.
     */
    inline const TimecodeConfigSource& GetSource() const{ return m_source; }

    /**
     * Identifies the source for the timecode that will be associated with the events
     * outputs.
-Embedded (embedded): Initialize the output timecode with timecode from
     * the the source.  If no embedded timecode is detected in the source, the system
     * falls back to using "Start at 0" (zerobased).
-System Clock (systemclock): Use
     * the UTC time.
-Start at 0 (zerobased): The time of the first frame of the event
     * will be 00:00:00:00.
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * Identifies the source for the timecode that will be associated with the events
     * outputs.
-Embedded (embedded): Initialize the output timecode with timecode from
     * the the source.  If no embedded timecode is detected in the source, the system
     * falls back to using "Start at 0" (zerobased).
-System Clock (systemclock): Use
     * the UTC time.
-Start at 0 (zerobased): The time of the first frame of the event
     * will be 00:00:00:00.
     */
    inline void SetSource(const TimecodeConfigSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * Identifies the source for the timecode that will be associated with the events
     * outputs.
-Embedded (embedded): Initialize the output timecode with timecode from
     * the the source.  If no embedded timecode is detected in the source, the system
     * falls back to using "Start at 0" (zerobased).
-System Clock (systemclock): Use
     * the UTC time.
-Start at 0 (zerobased): The time of the first frame of the event
     * will be 00:00:00:00.
     */
    inline void SetSource(TimecodeConfigSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * Identifies the source for the timecode that will be associated with the events
     * outputs.
-Embedded (embedded): Initialize the output timecode with timecode from
     * the the source.  If no embedded timecode is detected in the source, the system
     * falls back to using "Start at 0" (zerobased).
-System Clock (systemclock): Use
     * the UTC time.
-Start at 0 (zerobased): The time of the first frame of the event
     * will be 00:00:00:00.
     */
    inline TimecodeConfig& WithSource(const TimecodeConfigSource& value) { SetSource(value); return *this;}

    /**
     * Identifies the source for the timecode that will be associated with the events
     * outputs.
-Embedded (embedded): Initialize the output timecode with timecode from
     * the the source.  If no embedded timecode is detected in the source, the system
     * falls back to using "Start at 0" (zerobased).
-System Clock (systemclock): Use
     * the UTC time.
-Start at 0 (zerobased): The time of the first frame of the event
     * will be 00:00:00:00.
     */
    inline TimecodeConfig& WithSource(TimecodeConfigSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * Threshold in frames beyond which output timecode is resynchronized to the input
     * timecode. Discrepancies below this threshold are permitted to avoid unnecessary
     * discontinuities in the output timecode. No timecode sync when this is not
     * specified.
     */
    inline int GetSyncThreshold() const{ return m_syncThreshold; }

    /**
     * Threshold in frames beyond which output timecode is resynchronized to the input
     * timecode. Discrepancies below this threshold are permitted to avoid unnecessary
     * discontinuities in the output timecode. No timecode sync when this is not
     * specified.
     */
    inline bool SyncThresholdHasBeenSet() const { return m_syncThresholdHasBeenSet; }

    /**
     * Threshold in frames beyond which output timecode is resynchronized to the input
     * timecode. Discrepancies below this threshold are permitted to avoid unnecessary
     * discontinuities in the output timecode. No timecode sync when this is not
     * specified.
     */
    inline void SetSyncThreshold(int value) { m_syncThresholdHasBeenSet = true; m_syncThreshold = value; }

    /**
     * Threshold in frames beyond which output timecode is resynchronized to the input
     * timecode. Discrepancies below this threshold are permitted to avoid unnecessary
     * discontinuities in the output timecode. No timecode sync when this is not
     * specified.
     */
    inline TimecodeConfig& WithSyncThreshold(int value) { SetSyncThreshold(value); return *this;}

  private:

    TimecodeConfigSource m_source;
    bool m_sourceHasBeenSet = false;

    int m_syncThreshold;
    bool m_syncThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
