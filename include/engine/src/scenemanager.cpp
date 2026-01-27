#include "core/scenes/scene.hpp"
#include "math/gmath.hpp"
#include "raylib.h"
#include <core/scenes/scenemanager.hpp>

SceneManager::SceneManager(u32 _current_scene) {
    current_scene = _current_scene;
}

void SceneManager::switch_scene(u16 _index) {
    u32 len = scenes.size();
    current_scene = (u32)GMath::clamp(_index, 0, len);
}

void SceneManager::add_scene(Scene *scene) {
    scenes.push_back(scene);
}

void SceneManager::init() {
    for (u32 i = 0; i < scenes.size(); i++) {
        scenes[i]->init();
    }
}

void SceneManager::update(f32 time) {
    scenes[current_scene]->update(time);
}

void SceneManager::draw() {
    scenes[current_scene]->draw();
}

void SceneManager::deinit() {
    for (u32 i = 0; i < scenes.size(); i++) {
        scenes[i]->deinit();
    }
}
