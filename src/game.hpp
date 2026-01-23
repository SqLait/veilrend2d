#pragma once
#include "core/scenes/scenemanager.hpp"
#include "core/window.hpp"

struct Game {
    SceneManager scene_mg;
    Window *window;
    Game(Window *_window);
};
