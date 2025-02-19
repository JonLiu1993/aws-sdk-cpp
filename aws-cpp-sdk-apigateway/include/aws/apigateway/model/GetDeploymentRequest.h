﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Requests API Gateway to get information about a Deployment
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetDeploymentRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetDeploymentRequest : public APIGatewayRequest
  {
  public:
    GetDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeployment"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline GetDeploymentRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline GetDeploymentRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline GetDeploymentRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline GetDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline GetDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Deployment resource to get information about.</p>
     */
    inline GetDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEmbed() const{ return m_embed; }

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline bool EmbedHasBeenSet() const { return m_embedHasBeenSet; }

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline void SetEmbed(const Aws::Vector<Aws::String>& value) { m_embedHasBeenSet = true; m_embed = value; }

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline void SetEmbed(Aws::Vector<Aws::String>&& value) { m_embedHasBeenSet = true; m_embed = std::move(value); }

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline GetDeploymentRequest& WithEmbed(const Aws::Vector<Aws::String>& value) { SetEmbed(value); return *this;}

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline GetDeploymentRequest& WithEmbed(Aws::Vector<Aws::String>&& value) { SetEmbed(std::move(value)); return *this;}

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline GetDeploymentRequest& AddEmbed(const Aws::String& value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline GetDeploymentRequest& AddEmbed(Aws::String&& value) { m_embedHasBeenSet = true; m_embed.push_back(std::move(value)); return *this; }

    /**
     * <p>A query parameter to retrieve the specified embedded resources of the
     * returned Deployment resource in the response. In a REST API call, this
     * <code>embed</code> parameter value is a list of comma-separated strings, as in
     * <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=var1,var2</code>. The
     * SDK and other platform-dependent libraries might use a different format for the
     * list. Currently, this request supports only retrieval of the embedded API
     * summary this way. Hence, the parameter value must be a single-valued list
     * containing only the <code>"apisummary"</code> string. For example, <code>GET
     * /restapis/{restapi_id}/deployments/{deployment_id}?embed=apisummary</code>.</p>
     */
    inline GetDeploymentRequest& AddEmbed(const char* value) { m_embedHasBeenSet = true; m_embed.push_back(value); return *this; }

  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_embed;
    bool m_embedHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
