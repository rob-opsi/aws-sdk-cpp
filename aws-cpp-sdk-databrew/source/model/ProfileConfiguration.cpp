﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ProfileConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

ProfileConfiguration::ProfileConfiguration() : 
    m_datasetStatisticsConfigurationHasBeenSet(false),
    m_profileColumnsHasBeenSet(false),
    m_columnStatisticsConfigurationsHasBeenSet(false)
{
}

ProfileConfiguration::ProfileConfiguration(JsonView jsonValue) : 
    m_datasetStatisticsConfigurationHasBeenSet(false),
    m_profileColumnsHasBeenSet(false),
    m_columnStatisticsConfigurationsHasBeenSet(false)
{
  *this = jsonValue;
}

ProfileConfiguration& ProfileConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetStatisticsConfiguration"))
  {
    m_datasetStatisticsConfiguration = jsonValue.GetObject("DatasetStatisticsConfiguration");

    m_datasetStatisticsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileColumns"))
  {
    Array<JsonView> profileColumnsJsonList = jsonValue.GetArray("ProfileColumns");
    for(unsigned profileColumnsIndex = 0; profileColumnsIndex < profileColumnsJsonList.GetLength(); ++profileColumnsIndex)
    {
      m_profileColumns.push_back(profileColumnsJsonList[profileColumnsIndex].AsObject());
    }
    m_profileColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnStatisticsConfigurations"))
  {
    Array<JsonView> columnStatisticsConfigurationsJsonList = jsonValue.GetArray("ColumnStatisticsConfigurations");
    for(unsigned columnStatisticsConfigurationsIndex = 0; columnStatisticsConfigurationsIndex < columnStatisticsConfigurationsJsonList.GetLength(); ++columnStatisticsConfigurationsIndex)
    {
      m_columnStatisticsConfigurations.push_back(columnStatisticsConfigurationsJsonList[columnStatisticsConfigurationsIndex].AsObject());
    }
    m_columnStatisticsConfigurationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProfileConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_datasetStatisticsConfigurationHasBeenSet)
  {
   payload.WithObject("DatasetStatisticsConfiguration", m_datasetStatisticsConfiguration.Jsonize());

  }

  if(m_profileColumnsHasBeenSet)
  {
   Array<JsonValue> profileColumnsJsonList(m_profileColumns.size());
   for(unsigned profileColumnsIndex = 0; profileColumnsIndex < profileColumnsJsonList.GetLength(); ++profileColumnsIndex)
   {
     profileColumnsJsonList[profileColumnsIndex].AsObject(m_profileColumns[profileColumnsIndex].Jsonize());
   }
   payload.WithArray("ProfileColumns", std::move(profileColumnsJsonList));

  }

  if(m_columnStatisticsConfigurationsHasBeenSet)
  {
   Array<JsonValue> columnStatisticsConfigurationsJsonList(m_columnStatisticsConfigurations.size());
   for(unsigned columnStatisticsConfigurationsIndex = 0; columnStatisticsConfigurationsIndex < columnStatisticsConfigurationsJsonList.GetLength(); ++columnStatisticsConfigurationsIndex)
   {
     columnStatisticsConfigurationsJsonList[columnStatisticsConfigurationsIndex].AsObject(m_columnStatisticsConfigurations[columnStatisticsConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ColumnStatisticsConfigurations", std::move(columnStatisticsConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
