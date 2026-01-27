#include "core/components/vtransform.hpp"
#include "raylib.h"
#include <core/entity.hpp>
#include <vector>

Entity::Entity(VTransform _transform, Texture _texture) {
    transform = _transform;
    texture = _texture;
}

Entity::~Entity() {
}

u32 new_entity() {
    static u32 id = 0;
    return id++;
}
