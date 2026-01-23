#include <raylib.h>
#include <core/window.hpp>
#include "core/scenes/scenemanager.hpp"
#include "game.hpp"
#include "program.hpp"

int main() {
    Window window(800, 450, "basic window");
    Game game(&window);
    init(game);

    while (!WindowShouldClose()) {
        update();
        BeginDrawing();
        draw();
        EndDrawing();
    }

    deinit();

    return 0;
}
