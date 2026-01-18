#pragma once
#include <raylib.h>
#include "types.hpp"
#include <core/gameobject.hpp>
#include <span>
#include <vector>

struct Scene {
private:
    std::vector<GameObject> objects;
public:
    explicit Scene(std::span<GameObject> _objects);
    virtual void update(f32 _time);
    virtual void draw();
};
