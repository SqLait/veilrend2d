#pragma once
#include "raylib.h"
#include "types.hpp"
#include <vector>

struct Scene {
    std::vector<Texture2D> objects;
    virtual void update(f32 delta_time);
    virtual void draw();
};
