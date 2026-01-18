#include "program.hpp"
#include "core/scene/scene.hpp"
#include "core/window.hpp"
#include "raylib.h"
#include "types.hpp"
#include <vector>

Texture2D text;
Vector2 position(100, 200);
Scene scene1;
Scene scene2;
Scene current_scene;

void init() {
    SetTargetFPS(60);
    text = LoadTexture("assets/viktor.png");
    scene1.objects.push_back(text);
    current_scene = scene1;
}

void update() {
    const f32 SPEED = 1;
    if (IsKeyDown(KEY_D)) {
        position.x += SPEED;
    }
    else if (IsKeyDown(KEY_A)) {
        position.x -= SPEED;
    }

    if (IsKeyDown(KEY_ONE)) {
        current_scene = scene1;
    }
    else if (IsKeyDown(KEY_TWO)) {
        current_scene = scene2;
    }
}

void draw() {
    ClearBackground(Color(0, 170, 255, 0));
    for (i32 i = 0; i < current_scene.objects.size(); i++) {
        DrawTextureEx(current_scene.objects[i], position, 0, 1, WHITE);
    }
}

void deinit() {
    UnloadTexture(text);
}
