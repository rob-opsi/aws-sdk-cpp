﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/ConnectorConfigRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EKS
{
namespace Model
{

  /**
   */
  class AWS_EKS_API RegisterClusterRequest : public EKSRequest
  {
  public:
    RegisterClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterCluster"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline RegisterClusterRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline RegisterClusterRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Define a unique name for this cluster within your AWS account.</p>
     */
    inline RegisterClusterRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The configuration settings required to connect the Kubernetes cluster to the
     * Amazon EKS control plane.</p>
     */
    inline const ConnectorConfigRequest& GetConnectorConfig() const{ return m_connectorConfig; }

    /**
     * <p>The configuration settings required to connect the Kubernetes cluster to the
     * Amazon EKS control plane.</p>
     */
    inline bool ConnectorConfigHasBeenSet() const { return m_connectorConfigHasBeenSet; }

    /**
     * <p>The configuration settings required to connect the Kubernetes cluster to the
     * Amazon EKS control plane.</p>
     */
    inline void SetConnectorConfig(const ConnectorConfigRequest& value) { m_connectorConfigHasBeenSet = true; m_connectorConfig = value; }

    /**
     * <p>The configuration settings required to connect the Kubernetes cluster to the
     * Amazon EKS control plane.</p>
     */
    inline void SetConnectorConfig(ConnectorConfigRequest&& value) { m_connectorConfigHasBeenSet = true; m_connectorConfig = std::move(value); }

    /**
     * <p>The configuration settings required to connect the Kubernetes cluster to the
     * Amazon EKS control plane.</p>
     */
    inline RegisterClusterRequest& WithConnectorConfig(const ConnectorConfigRequest& value) { SetConnectorConfig(value); return *this;}

    /**
     * <p>The configuration settings required to connect the Kubernetes cluster to the
     * Amazon EKS control plane.</p>
     */
    inline RegisterClusterRequest& WithConnectorConfig(ConnectorConfigRequest&& value) { SetConnectorConfig(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline RegisterClusterRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline RegisterClusterRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline RegisterClusterRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ConnectorConfigRequest m_connectorConfig;
    bool m_connectorConfigHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
