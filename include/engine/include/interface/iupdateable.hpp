#pragma once
#include <types.hpp>

struct IUpdateable {
    virtual void update(f32 _time);
    virtual ~IUpdateable();
};
