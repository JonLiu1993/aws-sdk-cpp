﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A request to get information about the current ClientCertificate
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetClientCertificateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetClientCertificateRequest : public APIGatewayRequest
  {
  public:
    GetClientCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetClientCertificate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }

    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }

    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }

    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }

    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }

    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline GetClientCertificateRequest& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}

    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline GetClientCertificateRequest& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the ClientCertificate resource to be described.</p>
     */
    inline GetClientCertificateRequest& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}

  private:

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
