#pragma once
#include "core/entity.hpp"
#include <vector>

struct Scene {
    std::vector<Entity> entities;

    virtual void init() = 0;
    virtual void update(f32 time) = 0;
    virtual void draw() = 0;
    virtual void deinit() = 0;
};
