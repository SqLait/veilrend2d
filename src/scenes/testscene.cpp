#include "testscene.hpp"
#include "core/components/vtransform.hpp"
#include "core/entity.hpp"
#include "raylib.h"
#include "systems/physics.hpp"
#include "types.hpp"

void TestScene::init() {
    entities.push_back(Entity(VTransform({300, 100}), LoadTexture("assets/viktor.png")));
    entities.push_back(Entity(VTransform({600, 100}), LoadTexture("assets/shippy.png")));
}

void TestScene::update(f32 time) {
}

void TestScene::draw() {
    for (u32 i = 0; i < entities.size(); i++) {
        DrawTextureEx(entities[i].texture, entities[i].transform.position, 0, 1, WHITE);
    }
}

void TestScene::deinit() {
}
