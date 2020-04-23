﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>The virtual private cloud (VPC) endpoint settings that are configured for
   * your file transfer protocol-enabled server. With a VPC endpoint, you can
   * restrict access to your server and resources only within your VPC. To control
   * incoming internet traffic, invoke the <code>UpdateServer</code> API and attach
   * an Elastic IP to your server's endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/EndpointDetails">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API EndpointDetails
  {
  public:
    EndpointDetails();
    EndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    EndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline const Aws::Vector<Aws::String>& GetAddressAllocationIds() const{ return m_addressAllocationIds; }

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline bool AddressAllocationIdsHasBeenSet() const { return m_addressAllocationIdsHasBeenSet; }

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline void SetAddressAllocationIds(const Aws::Vector<Aws::String>& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds = value; }

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline void SetAddressAllocationIds(Aws::Vector<Aws::String>&& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds = std::move(value); }

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline EndpointDetails& WithAddressAllocationIds(const Aws::Vector<Aws::String>& value) { SetAddressAllocationIds(value); return *this;}

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline EndpointDetails& WithAddressAllocationIds(Aws::Vector<Aws::String>&& value) { SetAddressAllocationIds(std::move(value)); return *this;}

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline EndpointDetails& AddAddressAllocationIds(const Aws::String& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds.push_back(value); return *this; }

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline EndpointDetails& AddAddressAllocationIds(Aws::String&& value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of address allocation IDs that are required to attach an Elastic IP
     * address to your file transfer protocol-enabled server's endpoint. This is only
     * valid in the <code>UpdateServer</code> API.</p> <note> <p>This property can only
     * be use when <code>EndpointType</code> is set to <code>VPC</code>.</p> </note>
     */
    inline EndpointDetails& AddAddressAllocationIds(const char* value) { m_addressAllocationIdsHasBeenSet = true; m_addressAllocationIds.push_back(value); return *this; }


    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline EndpointDetails& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline EndpointDetails& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline EndpointDetails& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline EndpointDetails& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet IDs that are required to host your file transfer
     * protocol-enabled server endpoint in your VPC.</p>
     */
    inline EndpointDetails& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline EndpointDetails& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline EndpointDetails& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline EndpointDetails& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline EndpointDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline EndpointDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC ID of the VPC in which a file transfer protocol-enabled server's
     * endpoint will be hosted.</p>
     */
    inline EndpointDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_addressAllocationIds;
    bool m_addressAllocationIdsHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
