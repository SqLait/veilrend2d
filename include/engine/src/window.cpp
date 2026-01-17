#include <engine/window.hpp>
#include <raylib.h>

Window::Window(i16 width, i16 height, const char *title) {
    this->width = width;
    this->height = height;

    InitWindow(width, height, title);
}

Window::~Window() {
    CloseWindow();
}
