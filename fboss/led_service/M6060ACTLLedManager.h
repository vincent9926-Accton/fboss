/*
 *  Copyright (c) 2018-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include "fboss/led_service/BspLedManager.h"
#include "fboss/lib/bsp/BspSystemContainer.h"

namespace facebook::fboss {

/*
 * M6060ACTLLedManager class definiton:
 *
 * The BspLedManager class managing all LED in the system. The object is spawned
 * by LED Service. This will subscribe to Fsdb to get Switch state update and
 * then update the LED in hardware
 */
class M6060ACTLLedManager : public BspLedManager {
 public:
  M6060ACTLLedManager();
  virtual ~M6060ACTLLedManager() override {}

  // Forbidden copy constructor and assignment operator
  M6060ACTLLedManager(M6060ACTLLedManager const&) = delete;
  M6060ACTLLedManager& operator=(M6060ACTLLedManager const&) = delete;
};

} // namespace facebook::fboss
