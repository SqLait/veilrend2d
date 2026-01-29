#include "testscene.hpp"
#include "core/components/vtransform.hpp"
#include "ecs/componentpool.hpp"
#include "ecs/entity.hpp"
#include "raylib.h"
#include "systems/physics.hpp"
#include "types.hpp"
#include <iostream>

ComponentPool<Texture2D> textures;

void TestScene::init() {
    Entity player = new_entity();
    entities.push_back(player);
    textures.add(player, LoadTexture("assets/viktor.png"));
}

void TestScene::update(f32 time) {
}

void TestScene::draw() {
    for (u32 i = 0; i < textures.data.size(); i++) {
        DrawTextureEx(textures.data[i], Vector2(200, 200), 0, 1, WHITE);
    }
}

void TestScene::deinit() {
}
