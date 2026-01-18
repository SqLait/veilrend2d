#include <core/scene/scene.hpp>

Scene::Scene(std::span<GameObject> _objects) {
    for (i32 i = 0; i < _objects.size(); i++) {
        objects.push_back(_objects.data()[i]);
    }
}

void Scene::update(f32 _time) {
    for (i32 i = 0; i < objects.size(); i++) {
        objects[i].update(_time);
    }
}

void Scene::draw() {
    for (i32 i = 0; i < objects.size(); i++) {
        objects[i].draw();
    }
}
