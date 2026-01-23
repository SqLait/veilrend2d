#pragma once
#include "types.hpp"
#include <raylib.h>
#include <vector>

struct PhysicsSystem {
    void apply_gravity(std::vector<Vector2> &positions, f32 gravity);
};
