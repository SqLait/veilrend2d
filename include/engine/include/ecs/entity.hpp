#pragma once
#include "core/components/vtransform.hpp"
#include <cstdint>

using Entity = u32;
constexpr u32 INVALID_ENTRY = UINT32_MAX;

u32 new_entity();
