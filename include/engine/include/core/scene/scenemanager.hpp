#pragma once
#include <core/scene/scene.hpp>
#include <span>
#include <types.hpp>

class SceneManager {
    std::vector<Scene> scenes;
    Scene &current_scene;
public:
    explicit SceneManager(std::span<Scene> scenes);
    void update(f32 delta_time);
    void draw();

    void switch_scene(i32 index);
};
