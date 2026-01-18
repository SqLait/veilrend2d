#include "program.hpp"
#include "core/scene/scene.hpp"
#include "core/scene/scenemanager.hpp"
#include "core/window.hpp"
#include "raylib.h"
#include "types.hpp"
#include <vector>

Texture2D text;
Vector2 position(100, 200);

void init() {
    SetTargetFPS(60);
    text = LoadTexture("assets/viktor.png");
}

void update() {
    const f32 SPEED = 1;
    if (IsKeyDown(KEY_D)) {
        position.x += SPEED;
    }
    else if (IsKeyDown(KEY_A)) {
        position.x -= SPEED;
    }
}

void draw() {
    ClearBackground(Color(0, 170, 255, 0));
    DrawTextureEx(text, position, 0, 1, WHITE);
}

void deinit() {
    UnloadTexture(text);
}
