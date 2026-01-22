#pragma once

struct IDrawable {
    virtual void draw() = 0;
    virtual ~IDrawable() = default;
};
