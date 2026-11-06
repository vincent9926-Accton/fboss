// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#pragma once

#include "fboss/lib/bsp/BspPlatformMapping.h"

namespace facebook {
namespace fboss {

class M6060ACTLBspPlatformMapping : public BspPlatformMapping {
 public:
  M6060ACTLBspPlatformMapping();
  explicit M6060ACTLBspPlatformMapping(const std::string& platformMappingStr);
};

} // namespace fboss
} // namespace facebook
