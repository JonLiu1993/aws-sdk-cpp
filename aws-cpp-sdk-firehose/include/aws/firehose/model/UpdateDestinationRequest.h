﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/ExtendedS3DestinationUpdate.h>
#include <aws/firehose/model/RedshiftDestinationUpdate.h>
#include <aws/firehose/model/ElasticsearchDestinationUpdate.h>
#include <aws/firehose/model/AmazonopensearchserviceDestinationUpdate.h>
#include <aws/firehose/model/SplunkDestinationUpdate.h>
#include <aws/firehose/model/HttpEndpointDestinationUpdate.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class AWS_FIREHOSE_API UpdateDestinationRequest : public FirehoseRequest
  {
  public:
    UpdateDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDestination"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the delivery stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline UpdateDestinationRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline UpdateDestinationRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the delivery stream.</p>
     */
    inline UpdateDestinationRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}


    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline const Aws::String& GetCurrentDeliveryStreamVersionId() const{ return m_currentDeliveryStreamVersionId; }

    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline bool CurrentDeliveryStreamVersionIdHasBeenSet() const { return m_currentDeliveryStreamVersionIdHasBeenSet; }

    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline void SetCurrentDeliveryStreamVersionId(const Aws::String& value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId = value; }

    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline void SetCurrentDeliveryStreamVersionId(Aws::String&& value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId = std::move(value); }

    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline void SetCurrentDeliveryStreamVersionId(const char* value) { m_currentDeliveryStreamVersionIdHasBeenSet = true; m_currentDeliveryStreamVersionId.assign(value); }

    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(const Aws::String& value) { SetCurrentDeliveryStreamVersionId(value); return *this;}

    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(Aws::String&& value) { SetCurrentDeliveryStreamVersionId(std::move(value)); return *this;}

    /**
     * <p>Obtain this value from the <code>VersionId</code> result of
     * <a>DeliveryStreamDescription</a>. This value is required, and helps the service
     * perform conditional operations. For example, if there is an interleaving update
     * and this value is null, then the update destination fails. After the update is
     * successful, the <code>VersionId</code> value is updated. The service then
     * performs a merge of the old configuration with the new configuration.</p>
     */
    inline UpdateDestinationRequest& WithCurrentDeliveryStreamVersionId(const char* value) { SetCurrentDeliveryStreamVersionId(value); return *this;}


    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }

    /**
     * <p>The ID of the destination.</p>
     */
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }

    /**
     * <p>The ID of the destination.</p>
     */
    inline UpdateDestinationRequest& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline UpdateDestinationRequest& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the destination.</p>
     */
    inline UpdateDestinationRequest& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}


    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline const ExtendedS3DestinationUpdate& GetExtendedS3DestinationUpdate() const{ return m_extendedS3DestinationUpdate; }

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline bool ExtendedS3DestinationUpdateHasBeenSet() const { return m_extendedS3DestinationUpdateHasBeenSet; }

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline void SetExtendedS3DestinationUpdate(const ExtendedS3DestinationUpdate& value) { m_extendedS3DestinationUpdateHasBeenSet = true; m_extendedS3DestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline void SetExtendedS3DestinationUpdate(ExtendedS3DestinationUpdate&& value) { m_extendedS3DestinationUpdateHasBeenSet = true; m_extendedS3DestinationUpdate = std::move(value); }

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline UpdateDestinationRequest& WithExtendedS3DestinationUpdate(const ExtendedS3DestinationUpdate& value) { SetExtendedS3DestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon S3.</p>
     */
    inline UpdateDestinationRequest& WithExtendedS3DestinationUpdate(ExtendedS3DestinationUpdate&& value) { SetExtendedS3DestinationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline const RedshiftDestinationUpdate& GetRedshiftDestinationUpdate() const{ return m_redshiftDestinationUpdate; }

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline bool RedshiftDestinationUpdateHasBeenSet() const { return m_redshiftDestinationUpdateHasBeenSet; }

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationUpdate(const RedshiftDestinationUpdate& value) { m_redshiftDestinationUpdateHasBeenSet = true; m_redshiftDestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline void SetRedshiftDestinationUpdate(RedshiftDestinationUpdate&& value) { m_redshiftDestinationUpdateHasBeenSet = true; m_redshiftDestinationUpdate = std::move(value); }

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline UpdateDestinationRequest& WithRedshiftDestinationUpdate(const RedshiftDestinationUpdate& value) { SetRedshiftDestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon Redshift.</p>
     */
    inline UpdateDestinationRequest& WithRedshiftDestinationUpdate(RedshiftDestinationUpdate&& value) { SetRedshiftDestinationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline const ElasticsearchDestinationUpdate& GetElasticsearchDestinationUpdate() const{ return m_elasticsearchDestinationUpdate; }

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline bool ElasticsearchDestinationUpdateHasBeenSet() const { return m_elasticsearchDestinationUpdateHasBeenSet; }

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationUpdate(const ElasticsearchDestinationUpdate& value) { m_elasticsearchDestinationUpdateHasBeenSet = true; m_elasticsearchDestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline void SetElasticsearchDestinationUpdate(ElasticsearchDestinationUpdate&& value) { m_elasticsearchDestinationUpdateHasBeenSet = true; m_elasticsearchDestinationUpdate = std::move(value); }

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline UpdateDestinationRequest& WithElasticsearchDestinationUpdate(const ElasticsearchDestinationUpdate& value) { SetElasticsearchDestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Amazon ES.</p>
     */
    inline UpdateDestinationRequest& WithElasticsearchDestinationUpdate(ElasticsearchDestinationUpdate&& value) { SetElasticsearchDestinationUpdate(std::move(value)); return *this;}


    
    inline const AmazonopensearchserviceDestinationUpdate& GetAmazonopensearchserviceDestinationUpdate() const{ return m_amazonopensearchserviceDestinationUpdate; }

    
    inline bool AmazonopensearchserviceDestinationUpdateHasBeenSet() const { return m_amazonopensearchserviceDestinationUpdateHasBeenSet; }

    
    inline void SetAmazonopensearchserviceDestinationUpdate(const AmazonopensearchserviceDestinationUpdate& value) { m_amazonopensearchserviceDestinationUpdateHasBeenSet = true; m_amazonopensearchserviceDestinationUpdate = value; }

    
    inline void SetAmazonopensearchserviceDestinationUpdate(AmazonopensearchserviceDestinationUpdate&& value) { m_amazonopensearchserviceDestinationUpdateHasBeenSet = true; m_amazonopensearchserviceDestinationUpdate = std::move(value); }

    
    inline UpdateDestinationRequest& WithAmazonopensearchserviceDestinationUpdate(const AmazonopensearchserviceDestinationUpdate& value) { SetAmazonopensearchserviceDestinationUpdate(value); return *this;}

    
    inline UpdateDestinationRequest& WithAmazonopensearchserviceDestinationUpdate(AmazonopensearchserviceDestinationUpdate&& value) { SetAmazonopensearchserviceDestinationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline const SplunkDestinationUpdate& GetSplunkDestinationUpdate() const{ return m_splunkDestinationUpdate; }

    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline bool SplunkDestinationUpdateHasBeenSet() const { return m_splunkDestinationUpdateHasBeenSet; }

    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline void SetSplunkDestinationUpdate(const SplunkDestinationUpdate& value) { m_splunkDestinationUpdateHasBeenSet = true; m_splunkDestinationUpdate = value; }

    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline void SetSplunkDestinationUpdate(SplunkDestinationUpdate&& value) { m_splunkDestinationUpdateHasBeenSet = true; m_splunkDestinationUpdate = std::move(value); }

    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline UpdateDestinationRequest& WithSplunkDestinationUpdate(const SplunkDestinationUpdate& value) { SetSplunkDestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update for a destination in Splunk.</p>
     */
    inline UpdateDestinationRequest& WithSplunkDestinationUpdate(SplunkDestinationUpdate&& value) { SetSplunkDestinationUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline const HttpEndpointDestinationUpdate& GetHttpEndpointDestinationUpdate() const{ return m_httpEndpointDestinationUpdate; }

    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline bool HttpEndpointDestinationUpdateHasBeenSet() const { return m_httpEndpointDestinationUpdateHasBeenSet; }

    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline void SetHttpEndpointDestinationUpdate(const HttpEndpointDestinationUpdate& value) { m_httpEndpointDestinationUpdateHasBeenSet = true; m_httpEndpointDestinationUpdate = value; }

    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline void SetHttpEndpointDestinationUpdate(HttpEndpointDestinationUpdate&& value) { m_httpEndpointDestinationUpdateHasBeenSet = true; m_httpEndpointDestinationUpdate = std::move(value); }

    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline UpdateDestinationRequest& WithHttpEndpointDestinationUpdate(const HttpEndpointDestinationUpdate& value) { SetHttpEndpointDestinationUpdate(value); return *this;}

    /**
     * <p>Describes an update to the specified HTTP endpoint destination.</p>
     */
    inline UpdateDestinationRequest& WithHttpEndpointDestinationUpdate(HttpEndpointDestinationUpdate&& value) { SetHttpEndpointDestinationUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    Aws::String m_currentDeliveryStreamVersionId;
    bool m_currentDeliveryStreamVersionIdHasBeenSet = false;

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    ExtendedS3DestinationUpdate m_extendedS3DestinationUpdate;
    bool m_extendedS3DestinationUpdateHasBeenSet = false;

    RedshiftDestinationUpdate m_redshiftDestinationUpdate;
    bool m_redshiftDestinationUpdateHasBeenSet = false;

    ElasticsearchDestinationUpdate m_elasticsearchDestinationUpdate;
    bool m_elasticsearchDestinationUpdateHasBeenSet = false;

    AmazonopensearchserviceDestinationUpdate m_amazonopensearchserviceDestinationUpdate;
    bool m_amazonopensearchserviceDestinationUpdateHasBeenSet = false;

    SplunkDestinationUpdate m_splunkDestinationUpdate;
    bool m_splunkDestinationUpdateHasBeenSet = false;

    HttpEndpointDestinationUpdate m_httpEndpointDestinationUpdate;
    bool m_httpEndpointDestinationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
