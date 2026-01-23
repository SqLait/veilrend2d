#pragma once
#include "core/components/vtransform.hpp"

struct Entity {
    VTransform transform;
    Texture2D texture;

    Entity(VTransform _transform, string _path);
    ~Entity();
};
