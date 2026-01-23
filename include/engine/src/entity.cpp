#include "core/components/vtransform.hpp"
#include "raylib.h"
#include <core/entity.hpp>

Entity::Entity(VTransform _transform, string _path) {
    transform = _transform;
    texture = LoadTexture(_path.c_str());
}

Entity::~Entity() {
    UnloadTexture(texture);
}
