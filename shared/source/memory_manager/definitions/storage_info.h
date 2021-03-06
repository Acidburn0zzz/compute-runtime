/*
 * Copyright (C) 2019-2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#pragma once
#include <cstdint>
namespace NEO {
struct StorageInfo {
    uint32_t getNumBanks() const;
    uint32_t getMemoryBanks() const { return 0u; }
    bool multiStorage = false;
};
} // namespace NEO
