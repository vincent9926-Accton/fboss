// (c) Meta Platforms, Inc. and affiliates. Confidential and proprietary.

#include "fboss/led_service/M6060ACTLLedManager.h"
#include "fboss/lib/bsp/BspGenericSystemContainer.h"
#include "fboss/lib/bsp/m6060actl/M6060ACTLBspPlatformMapping.h"

namespace facebook::fboss {

/*
 * M6060ACTLLedManager ctor()
 *
 * M6060ACTLLedManager constructor will create the LedManager object for
 * M6060ACTL platform
 */
M6060ACTLLedManager::M6060ACTLLedManager() : BspLedManager() {
  init<M6060ACTLBspPlatformMapping>(PlatformType::PLATFORM_M6060ACTL);
  XLOG(INFO) << "Created M6060ACTL BSP LED Manager";
}

} // namespace facebook::fboss
