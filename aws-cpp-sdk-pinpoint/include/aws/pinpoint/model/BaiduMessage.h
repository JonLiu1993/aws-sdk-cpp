﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the settings for a one-time message that's sent directly to an
   * endpoint through the Baidu (Baidu Cloud Push) channel.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/BaiduMessage">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API BaiduMessage
  {
  public:
    BaiduMessage();
    BaiduMessage(Aws::Utils::Json::JsonView jsonValue);
    BaiduMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This action uses the deep-linking features of the Android
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This action uses the deep-linking features of the Android
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This action uses the deep-linking features of the Android
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This action uses the deep-linking features of the Android
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This action uses the deep-linking features of the Android
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline BaiduMessage& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>The action to occur if the recipient taps the push notification. Valid values
     * are:</p> <ul><li><p>OPEN_APP - Your app opens or it becomes the foreground app
     * if it was sent to the background. This is the default action.</p></li>
     * <li><p>DEEP_LINK - Your app opens and displays a designated user interface in
     * the app. This action uses the deep-linking features of the Android
     * platform.</p></li> <li><p>URL - The default mobile browser on the recipient's
     * device opens and loads the web page at a URL that you specify.</p></li></ul>
     */
    inline BaiduMessage& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The body of the notification message.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>The body of the notification message.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the notification message.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the notification message.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the notification message.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>The body of the notification message.</p>
     */
    inline BaiduMessage& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the notification message.</p>
     */
    inline BaiduMessage& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>The body of the notification message.</p>
     */
    inline BaiduMessage& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetData() const{ return m_data; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline void SetData(const Aws::Map<Aws::String, Aws::String>& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline void SetData(Aws::Map<Aws::String, Aws::String>&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& WithData(const Aws::Map<Aws::String, Aws::String>& value) { SetData(value); return *this;}

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& WithData(Aws::Map<Aws::String, Aws::String>&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& AddData(const Aws::String& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& AddData(Aws::String&& key, const Aws::String& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& AddData(const Aws::String& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& AddData(Aws::String&& key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& AddData(const char* key, Aws::String&& value) { m_dataHasBeenSet = true; m_data.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& AddData(Aws::String&& key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(std::move(key), value); return *this; }

    /**
     * <p>The JSON data payload to use for the push notification, if the notification
     * is a silent push notification. This payload is added to the
     * data.pinpoint.jsonBody object of the notification.</p>
     */
    inline BaiduMessage& AddData(const char* key, const char* value) { m_dataHasBeenSet = true; m_data.emplace(key, value); return *this; }


    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline const Aws::String& GetIconReference() const{ return m_iconReference; }

    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline bool IconReferenceHasBeenSet() const { return m_iconReferenceHasBeenSet; }

    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline void SetIconReference(const Aws::String& value) { m_iconReferenceHasBeenSet = true; m_iconReference = value; }

    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline void SetIconReference(Aws::String&& value) { m_iconReferenceHasBeenSet = true; m_iconReference = std::move(value); }

    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline void SetIconReference(const char* value) { m_iconReferenceHasBeenSet = true; m_iconReference.assign(value); }

    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline BaiduMessage& WithIconReference(const Aws::String& value) { SetIconReference(value); return *this;}

    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline BaiduMessage& WithIconReference(Aws::String&& value) { SetIconReference(std::move(value)); return *this;}

    /**
     * <p>The icon image name of the asset saved in your app.</p>
     */
    inline BaiduMessage& WithIconReference(const char* value) { SetIconReference(value); return *this;}


    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline const Aws::String& GetImageIconUrl() const{ return m_imageIconUrl; }

    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline bool ImageIconUrlHasBeenSet() const { return m_imageIconUrlHasBeenSet; }

    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline void SetImageIconUrl(const Aws::String& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = value; }

    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline void SetImageIconUrl(Aws::String&& value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl = std::move(value); }

    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline void SetImageIconUrl(const char* value) { m_imageIconUrlHasBeenSet = true; m_imageIconUrl.assign(value); }

    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline BaiduMessage& WithImageIconUrl(const Aws::String& value) { SetImageIconUrl(value); return *this;}

    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline BaiduMessage& WithImageIconUrl(Aws::String&& value) { SetImageIconUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the large icon image to display in the content view of the push
     * notification.</p>
     */
    inline BaiduMessage& WithImageIconUrl(const char* value) { SetImageIconUrl(value); return *this;}


    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline BaiduMessage& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline BaiduMessage& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of an image to display in the push notification.</p>
     */
    inline BaiduMessage& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline const Aws::String& GetRawContent() const{ return m_rawContent; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline bool RawContentHasBeenSet() const { return m_rawContentHasBeenSet; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline void SetRawContent(const Aws::String& value) { m_rawContentHasBeenSet = true; m_rawContent = value; }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline void SetRawContent(Aws::String&& value) { m_rawContentHasBeenSet = true; m_rawContent = std::move(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline void SetRawContent(const char* value) { m_rawContentHasBeenSet = true; m_rawContent.assign(value); }

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline BaiduMessage& WithRawContent(const Aws::String& value) { SetRawContent(value); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline BaiduMessage& WithRawContent(Aws::String&& value) { SetRawContent(std::move(value)); return *this;}

    /**
     * <p>The raw, JSON-formatted string to use as the payload for the notification
     * message. If specified, this value overrides all other content for the
     * message.</p>
     */
    inline BaiduMessage& WithRawContent(const char* value) { SetRawContent(value); return *this;}


    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration or
     * supporting phone home functionality.</p>
     */
    inline bool GetSilentPush() const{ return m_silentPush; }

    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration or
     * supporting phone home functionality.</p>
     */
    inline bool SilentPushHasBeenSet() const { return m_silentPushHasBeenSet; }

    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration or
     * supporting phone home functionality.</p>
     */
    inline void SetSilentPush(bool value) { m_silentPushHasBeenSet = true; m_silentPush = value; }

    /**
     * <p>Specifies whether the notification is a silent push notification, which is a
     * push notification that doesn't display on a recipient's device. Silent push
     * notifications can be used for cases such as updating an app's configuration or
     * supporting phone home functionality.</p>
     */
    inline BaiduMessage& WithSilentPush(bool value) { SetSilentPush(value); return *this;}


    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline const Aws::String& GetSmallImageIconUrl() const{ return m_smallImageIconUrl; }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline bool SmallImageIconUrlHasBeenSet() const { return m_smallImageIconUrlHasBeenSet; }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline void SetSmallImageIconUrl(const Aws::String& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = value; }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline void SetSmallImageIconUrl(Aws::String&& value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl = std::move(value); }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline void SetSmallImageIconUrl(const char* value) { m_smallImageIconUrlHasBeenSet = true; m_smallImageIconUrl.assign(value); }

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline BaiduMessage& WithSmallImageIconUrl(const Aws::String& value) { SetSmallImageIconUrl(value); return *this;}

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline BaiduMessage& WithSmallImageIconUrl(Aws::String&& value) { SetSmallImageIconUrl(std::move(value)); return *this;}

    /**
     * <p>The URL of the small icon image to display in the status bar and the content
     * view of the push notification.</p>
     */
    inline BaiduMessage& WithSmallImageIconUrl(const char* value) { SetSmallImageIconUrl(value); return *this;}


    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline const Aws::String& GetSound() const{ return m_sound; }

    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline bool SoundHasBeenSet() const { return m_soundHasBeenSet; }

    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline void SetSound(const Aws::String& value) { m_soundHasBeenSet = true; m_sound = value; }

    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline void SetSound(Aws::String&& value) { m_soundHasBeenSet = true; m_sound = std::move(value); }

    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline void SetSound(const char* value) { m_soundHasBeenSet = true; m_sound.assign(value); }

    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline BaiduMessage& WithSound(const Aws::String& value) { SetSound(value); return *this;}

    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline BaiduMessage& WithSound(Aws::String&& value) { SetSound(std::move(value)); return *this;}

    /**
     * <p>The sound to play when the recipient receives the push notification. You can
     * use the default stream or specify the file name of a sound resource that's
     * bundled in your app. On an Android platform, the sound file must reside in
     * /res/raw/.</p>
     */
    inline BaiduMessage& WithSound(const char* value) { SetSound(value); return *this;}


    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetSubstitutions() const{ return m_substitutions; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline bool SubstitutionsHasBeenSet() const { return m_substitutionsHasBeenSet; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_substitutionsHasBeenSet = true; m_substitutions = value; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline void SetSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_substitutionsHasBeenSet = true; m_substitutions = std::move(value); }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& WithSubstitutions(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetSubstitutions(value); return *this;}

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& WithSubstitutions(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetSubstitutions(std::move(value)); return *this;}

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& AddSubstitutions(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& AddSubstitutions(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& AddSubstitutions(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& AddSubstitutions(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& AddSubstitutions(const char* key, Aws::Vector<Aws::String>&& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The default message variables to use in the notification message. You can
     * override the default variables with individual address variables.</p>
     */
    inline BaiduMessage& AddSubstitutions(const char* key, const Aws::Vector<Aws::String>& value) { m_substitutionsHasBeenSet = true; m_substitutions.emplace(key, value); return *this; }


    /**
     * <p>The amount of time, in seconds, that the Baidu Cloud Push service should
     * store the message if the recipient's device is offline. The default value and
     * maximum supported time is 604,800 seconds (7 days).</p>
     */
    inline int GetTimeToLive() const{ return m_timeToLive; }

    /**
     * <p>The amount of time, in seconds, that the Baidu Cloud Push service should
     * store the message if the recipient's device is offline. The default value and
     * maximum supported time is 604,800 seconds (7 days).</p>
     */
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that the Baidu Cloud Push service should
     * store the message if the recipient's device is offline. The default value and
     * maximum supported time is 604,800 seconds (7 days).</p>
     */
    inline void SetTimeToLive(int value) { m_timeToLiveHasBeenSet = true; m_timeToLive = value; }

    /**
     * <p>The amount of time, in seconds, that the Baidu Cloud Push service should
     * store the message if the recipient's device is offline. The default value and
     * maximum supported time is 604,800 seconds (7 days).</p>
     */
    inline BaiduMessage& WithTimeToLive(int value) { SetTimeToLive(value); return *this;}


    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline BaiduMessage& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline BaiduMessage& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title to display above the notification message on the recipient's
     * device.</p>
     */
    inline BaiduMessage& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline BaiduMessage& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline BaiduMessage& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL to open in the recipient's default mobile browser, if a recipient
     * taps the push notification and the value of the Action property is URL.</p>
     */
    inline BaiduMessage& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_iconReference;
    bool m_iconReferenceHasBeenSet = false;

    Aws::String m_imageIconUrl;
    bool m_imageIconUrlHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    Aws::String m_rawContent;
    bool m_rawContentHasBeenSet = false;

    bool m_silentPush;
    bool m_silentPushHasBeenSet = false;

    Aws::String m_smallImageIconUrl;
    bool m_smallImageIconUrlHasBeenSet = false;

    Aws::String m_sound;
    bool m_soundHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_substitutions;
    bool m_substitutionsHasBeenSet = false;

    int m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
