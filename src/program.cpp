#include "program.hpp"
#include "core/components/vtransform_system.hpp"
#include "core/window.hpp"
#include "raylib.h"
#include "types.hpp"
#include <cstdint>
#include <unordered_map>
#include <vector>
#include <types.hpp>

Texture2D text;
Vector2 position(100, 200);

VTransformSystem sys;
Entity player = 0;

// Dense holds the entities that currently have the matching component,
// packed contiguously.
std::vector<Entity> dense;
// Sparse maps an entity ID -> index into the dense (and component) arrays.
std::vector<i32> sparse;

// Component data is stored in a parallel array aligned with dense.
// data[index] = component for dense[index]
//
// entity ─┐
//         ▼
//     sparse[entity] ──► index
//                           │
//                           ▼
//                 dense[index] = entity
//                 data[index]  = component
//
// Let's say entities 1, 3, 7 have a Transform:
// Entity IDs:   0 1 2 3 4 5 6 7
// sparse:      - 0 - 1 - - - 2
// 
// dense:       [ 1, 3, 7 ]
// positions:   [ P1, P3, P7 ]
//
// So:
// get(7) → positions[sparse[7]] → positions[2]

void add(Entity e, Vector2 vec) {
    if (e >= sparse.size())
        sparse.resize(e + 1, UINT32_MAX);

    sparse[e] = dense.size();
    dense.push_back(e);
    sys.positions.push_back(vec);
}

Vector2 &get(Entity e) {
    return sys.positions[sparse[e]];
}

// Entities tie systems together, *not objects*

void init() {
    SetTargetFPS(60);
    text = LoadTexture("assets/viktor.png");
    // Create a vector position inside of the Transform system
    add(player, {100, 0});
}

void update() {
    // Loop over all the positions
    for (i32 i = 0; i < sys.positions.size(); i++) {
        sys.positions[i].x += 0.5f;
        sys.positions[i].y += 3;
    }
}

void draw() {
    ClearBackground(Color(0, 170, 255, 0));
    DrawTextureEx(text, get(player), 0, 1, WHITE);
}

void deinit() {
    UnloadTexture(text);
}
