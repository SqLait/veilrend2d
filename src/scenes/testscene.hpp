#pragma once
#include <core/scenes/scene.hpp>

struct TestScene : public Scene {
    void init() override;
    void update(f32 time) override;
    void draw() override;
    void deinit() override;
};
