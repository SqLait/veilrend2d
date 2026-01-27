#include <raylib.h>
#include <core/window.hpp>
#include "core/scenes/scenemanager.hpp"
#include "game.hpp"
#include "program.hpp"
#include "scenes/testscene.hpp"

int main() {
    Window window(800, 450, "basic window");
    Game game(&window);
    TestScene s;
    game.scene_mg.add_scene(&s);
    init(game);

    while (!WindowShouldClose()) {
        update(game);
        BeginDrawing();
        draw(game);
        EndDrawing();
    }

    deinit(game);

    return 0;
}
