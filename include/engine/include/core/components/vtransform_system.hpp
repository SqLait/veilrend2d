#pragma once
#include "types.hpp"
#include <raylib.h>
#include <vector>

// All the transform data that a entity can have
struct VTransformSystem {
    std::vector<Vector2> positions;
    std::vector<Vector2> scales;
    std::vector<Vector2> origins;
    std::vector<f32> rotations;
};

void translate(i32 id, VTransformSystem &transform_system);
