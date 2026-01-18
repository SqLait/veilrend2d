#include "raylib.h"
#include "types.hpp"
#include <core/scene/scenemanager.hpp>
#include <math/gmath.hpp>

SceneManager::SceneManager(std::span<Scene> scenes) : current_scene(scenes.data()[0]) {
    for (i32 i = 0; i < scenes.size(); i++) {
        this->scenes.push_back(scenes.data()[i]);
    }
}

void SceneManager::update(f32 delta_time) {
    auto &obj = current_scene.objects;
    for (i32 i = 0; i < obj.size(); i++) {
    }
}

void SceneManager::switch_scene(i32 index) {
    i32 i = GMath::clamp(index, 0, scenes.size());
    current_scene = scenes[i];
}
