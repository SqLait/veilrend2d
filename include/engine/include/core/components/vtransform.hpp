#pragma once
#include "raylib.h"
#include "raymath.h"
#include <types.hpp>

struct VTransform {
    Vector2 position;
    Vector2 scale;
    Vector2 origin;
    f32 rotation;

    VTransform(Vector2 _position = Vector2Zero(), Vector2 _scale = Vector2One(),
               Vector2 _origin = Vector2Zero(), f32 _rotation = 0);
    void translate(Vector2 _position);
    void set_position(Vector2 _position);
    void rotate_around(f32 _radian);
    void set_rotate(f32 _radian);
    void set_scale(Vector2 _scale);
    void scale_by(Vector2 _scale);
    void scale_by(f32 _scale);
    void set_origin(Vector2 _origin);
    Vector2 get_origin();
};
