#pragma once
#include "scene.hpp"
#include <vector>

struct SceneManager {
    std::vector<Scene *> scenes;
    u32 current_scene;

    SceneManager(u32 _current_scene = 0);
    void switch_scene(u16 _index);
    void add_scene(Scene *scene);

    void init();
    void update(f32 time);
    void draw();
    void deinit();
};

