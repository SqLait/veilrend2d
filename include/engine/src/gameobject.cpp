#include <core/gameobject.hpp>

GameObject::GameObject(const char *_name) : Object(_name) {

}

void GameObject::update(f32 _time) {
    for (i32 i = 0; i < updaters.size(); i++) {
        updaters[i].update(_time);
    }
}

void GameObject::draw() {
    for (i32 i = 0; i < drawers.size(); i++) {
        drawers[i].draw();
    }
}
