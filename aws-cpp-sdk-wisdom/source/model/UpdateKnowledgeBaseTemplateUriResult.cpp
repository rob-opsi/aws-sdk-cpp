﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/UpdateKnowledgeBaseTemplateUriResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateKnowledgeBaseTemplateUriResult::UpdateKnowledgeBaseTemplateUriResult()
{
}

UpdateKnowledgeBaseTemplateUriResult::UpdateKnowledgeBaseTemplateUriResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateKnowledgeBaseTemplateUriResult& UpdateKnowledgeBaseTemplateUriResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("knowledgeBase"))
  {
    m_knowledgeBase = jsonValue.GetObject("knowledgeBase");

  }



  return *this;
}
