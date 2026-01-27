#pragma once
#include "core/components/vtransform.hpp"

struct Entity {
    VTransform transform;
    Texture2D texture;

    Entity(VTransform _transform, Texture _texture);
    ~Entity();
};

u32 new_entity();
