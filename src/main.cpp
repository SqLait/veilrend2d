#include <raylib.h>
#include <engine/window.hpp>

int main() {
    Window window(800, 450, "basic window");

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(Color(0, 170, 255, 0));


        EndDrawing();
    }

    return 0;
}
