#pragma once
#include "ecs/componentpool.hpp"
#include "ecs/entity.hpp"

struct Component {
    Entity parent;

    Component(Entity _parent);

    template<typename T>
    T* get_component(ComponentPool<T> &pool) {
        return pool.get(parent);
    }

    template<typename T>
    std::vector<T*> get_components() {
        std::vector<T*> comps;
        return comps;
    }
};
