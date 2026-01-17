#pragma once
#include <types.hpp>

struct Window {
    i16 width;
    i16 height;

    Window(i16 width, i16 height, const char *title);
    ~Window();
};
