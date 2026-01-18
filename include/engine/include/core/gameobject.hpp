#pragma once
#include "core/components/vtransform.hpp"
#include <interface/iupdateable.hpp>
#include <interface/idrawable.hpp>
#include "core/object.hpp"
#include "types.hpp"
#include <vector>

class GameObject : Object {
    VTransform transform;

    std::vector<IUpdateable> updaters;
    std::vector<IDrawable> drawers;
public:
    explicit GameObject(const char *_name);
    void update(f32 _time);
    void draw();
};
