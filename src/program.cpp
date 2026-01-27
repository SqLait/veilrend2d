#include "program.hpp"
#include "core/entity.hpp"
#include "raylib.h"
#include "types.hpp"
#include <types.hpp>
#include <vector>

void init(Game &game) {
    SetTargetFPS(60);
    game.scene_mg.init();
}

void update(Game &game) {
    game.scene_mg.update(GetFrameTime());
}

void draw(Game &game) {
    ClearBackground(Color(0, 170, 255, 0));
    game.scene_mg.draw();
}

void deinit(Game &game) {
    game.scene_mg.deinit();
}
