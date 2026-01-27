#pragma once
#include "core/components/vtransform.hpp"
#include "raylib.h"
#include <vector>

struct TextureSystem {
    void draw_textures(std::vector<Texture2D> textures,
                       std::vector<VTransform> transforms);
};
