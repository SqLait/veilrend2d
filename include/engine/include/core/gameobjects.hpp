#pragma once
#include "core/components/component.hpp"
#include <vector>

struct GameObject {
    std::vector<Component> components;
};
