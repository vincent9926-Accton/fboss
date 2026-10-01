// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/lib/bsp/m6060actl/M6060ACTLBspPlatformMapping.h"

#include <thrift/lib/cpp2/protocol/Serializer.h>

namespace facebook::fboss {

M6060ACTLBspPlatformMapping::M6060ACTLBspPlatformMapping()
    : BspPlatformMapping("m6060actl") {}

M6060ACTLBspPlatformMapping::M6060ACTLBspPlatformMapping(
    const std::string& platformMappingStr)
    : BspPlatformMapping(
          apache::thrift::SimpleJSONSerializer::deserialize<
              BspPlatformMappingThrift>(platformMappingStr)) {}

} // namespace facebook::fboss
