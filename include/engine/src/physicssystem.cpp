#include <systems/physics.hpp>

void PhysicsSystem::apply_gravity(std::vector<Vector2> &positions, f32 gravity) {
    for (i32 i = 0; i < positions.size(); i++) {
        positions[i].y += gravity;
    }
}
