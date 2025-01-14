﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/OriginManifestType.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for DASH content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DashConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API DashConfiguration
  {
  public:
    DashConfiguration();
    DashConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DashConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline const Aws::String& GetManifestEndpointPrefix() const{ return m_manifestEndpointPrefix; }

    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline bool ManifestEndpointPrefixHasBeenSet() const { return m_manifestEndpointPrefixHasBeenSet; }

    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline void SetManifestEndpointPrefix(const Aws::String& value) { m_manifestEndpointPrefixHasBeenSet = true; m_manifestEndpointPrefix = value; }

    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline void SetManifestEndpointPrefix(Aws::String&& value) { m_manifestEndpointPrefixHasBeenSet = true; m_manifestEndpointPrefix = std::move(value); }

    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline void SetManifestEndpointPrefix(const char* value) { m_manifestEndpointPrefixHasBeenSet = true; m_manifestEndpointPrefix.assign(value); }

    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline DashConfiguration& WithManifestEndpointPrefix(const Aws::String& value) { SetManifestEndpointPrefix(value); return *this;}

    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline DashConfiguration& WithManifestEndpointPrefix(Aws::String&& value) { SetManifestEndpointPrefix(std::move(value)); return *this;}

    /**
     * <p>The URL generated by MediaTailor to initiate a playback session. The session
     * uses server-side reporting. This setting is ignored in PUT operations.</p>
     */
    inline DashConfiguration& WithManifestEndpointPrefix(const char* value) { SetManifestEndpointPrefix(value); return *this;}


    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline const Aws::String& GetMpdLocation() const{ return m_mpdLocation; }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline bool MpdLocationHasBeenSet() const { return m_mpdLocationHasBeenSet; }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline void SetMpdLocation(const Aws::String& value) { m_mpdLocationHasBeenSet = true; m_mpdLocation = value; }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline void SetMpdLocation(Aws::String&& value) { m_mpdLocationHasBeenSet = true; m_mpdLocation = std::move(value); }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline void SetMpdLocation(const char* value) { m_mpdLocationHasBeenSet = true; m_mpdLocation.assign(value); }

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline DashConfiguration& WithMpdLocation(const Aws::String& value) { SetMpdLocation(value); return *this;}

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline DashConfiguration& WithMpdLocation(Aws::String&& value) { SetMpdLocation(std::move(value)); return *this;}

    /**
     * <p>The setting that controls whether MediaTailor includes the Location tag in
     * DASH manifests. MediaTailor populates the Location tag with the URL for manifest
     * update requests, to be used by players that don't support sticky redirects.
     * Disable this if you have CDN routing rules set up for accessing MediaTailor
     * manifests, and you are either using client-side reporting or your players
     * support sticky HTTP redirects. Valid values are DISABLED and EMT_DEFAULT. The
     * EMT_DEFAULT setting enables the inclusion of the tag and is the default
     * value.</p>
     */
    inline DashConfiguration& WithMpdLocation(const char* value) { SetMpdLocation(value); return *this;}


    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD.</p>
     */
    inline const OriginManifestType& GetOriginManifestType() const{ return m_originManifestType; }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD.</p>
     */
    inline bool OriginManifestTypeHasBeenSet() const { return m_originManifestTypeHasBeenSet; }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD.</p>
     */
    inline void SetOriginManifestType(const OriginManifestType& value) { m_originManifestTypeHasBeenSet = true; m_originManifestType = value; }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD.</p>
     */
    inline void SetOriginManifestType(OriginManifestType&& value) { m_originManifestTypeHasBeenSet = true; m_originManifestType = std::move(value); }

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD.</p>
     */
    inline DashConfiguration& WithOriginManifestType(const OriginManifestType& value) { SetOriginManifestType(value); return *this;}

    /**
     * <p>The setting that controls whether MediaTailor handles manifests from the
     * origin server as multi-period manifests or single-period manifests. If your
     * origin server produces single-period manifests, set this to SINGLE_PERIOD. The
     * default setting is MULTI_PERIOD. For multi-period manifests, omit this setting
     * or set it to MULTI_PERIOD.</p>
     */
    inline DashConfiguration& WithOriginManifestType(OriginManifestType&& value) { SetOriginManifestType(std::move(value)); return *this;}

  private:

    Aws::String m_manifestEndpointPrefix;
    bool m_manifestEndpointPrefixHasBeenSet = false;

    Aws::String m_mpdLocation;
    bool m_mpdLocationHasBeenSet = false;

    OriginManifestType m_originManifestType;
    bool m_originManifestTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
