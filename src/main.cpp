#include <raylib.h>
#include <engine/window.hpp>
#include "program.hpp"

int main() {
    Window window(800, 450, "basic window");
    init();

    while (!WindowShouldClose()) {
        update();

        BeginDrawing();
        draw();
        EndDrawing();
    }

    deinit();

    return 0;
}
