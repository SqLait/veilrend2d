#include "core/scenes/scene.hpp"
#include "math/gmath.hpp"
#include <core/scenes/scenemanager.hpp>

SceneManager::SceneManager(u32 _current_scene) {
    current_scene = _current_scene;
}

void SceneManager::switch_scene(u16 _index) {
    u32 len = scenes.size();
    current_scene = (u32)GMath::clamp(_index, 0, len);
}

void SceneManager::create_scene(std::vector<Entity> _entities) {
    scenes.push_back(Scene(_entities));
}
