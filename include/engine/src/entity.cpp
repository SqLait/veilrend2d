#include "core/components/vtransform.hpp"
#include "raylib.h"
#include <ecs/entity.hpp>
#include <vector>

Entity new_entity() {
    static Entity id = 0;
    return id++;
}
