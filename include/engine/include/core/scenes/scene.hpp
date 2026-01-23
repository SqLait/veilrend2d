#pragma once
#include "core/entity.hpp"
#include <vector>

struct Scene {
    std::vector<Entity> entities;

    Scene(std::vector<Entity> _entities);
};
