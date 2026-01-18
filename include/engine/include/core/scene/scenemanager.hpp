#pragma once
#include <core/scene/scene.hpp>
#include <span>
#include <types.hpp>

class SceneManager {
    std::vector<Scene> scenes;
    Scene &current_scene;
public:
    explicit SceneManager(std::span<Scene> _scenes);
    void update(f32 _delta_time);
    void draw();

    void switch_scene(i32 _index);
};
