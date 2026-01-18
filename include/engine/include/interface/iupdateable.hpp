#pragma once
#include <types.hpp>

struct IUpdateable {
    virtual void update(f32 delta_time);
};
