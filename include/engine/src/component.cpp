#include "ecs/componentpool.hpp"
#include "ecs/entity.hpp"
#include <core/components/component.hpp>

Component::Component(Entity _parent) {
    parent = _parent;
}
