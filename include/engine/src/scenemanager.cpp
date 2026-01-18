#include "raylib.h"
#include "types.hpp"
#include <core/scene/scenemanager.hpp>
#include <math/gmath.hpp>

SceneManager::SceneManager(std::span<Scene> _scenes) : current_scene(_scenes.data()[0]) {
    for (i32 i = 0; i < _scenes.size(); i++) {
        scenes.push_back(_scenes.data()[i]);
    }
}

void SceneManager::update(f32 _delta_time) {
    current_scene.update(_delta_time);
}

void SceneManager::draw() {
    current_scene.draw();
}

void SceneManager::switch_scene(i32 _index) {
    i32 i = GMath::clamp(_index, 0, scenes.size());
    current_scene = scenes[i];
}
