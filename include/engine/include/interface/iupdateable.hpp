#pragma once
#include <types.hpp>

struct IUpdateable {
    virtual void update(f32 _time) = 0;
    virtual ~IUpdateable() = default;
};
