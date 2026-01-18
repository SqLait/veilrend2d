#pragma once
#include <core/components/vtransform.hpp>

VTransform::VTransform(Vector2 _position, Vector2 _scale, Vector2 _origin, f32 _rotation) {
    position = _position;
    scale = _scale;
    origin = _origin;
    rotation = _rotation;
}

void VTransform::translate(Vector2 _position) {
    position.x += _position.x;
    position.y += _position.y;
}

void VTransform::set_position(Vector2 _position) {
    position.x = _position.x;
    position.y = _position.y;
}

void VTransform::rotate_around(f32 _radian) {
    rotation += _radian;
}

void VTransform::set_rotate(f32 _radian) {
    rotation = _radian;
}

void VTransform::set_scale(Vector2 _scale) {
    scale.x = _scale.x;
    scale.x = _scale.x;
}

void VTransform::scale_by(Vector2 _scale) {
    scale.x += _scale.x;
    scale.y += _scale.y;
}

void VTransform::scale_by(f32 _scale) {
    scale.x += _scale;
    scale.y += _scale;
}

void VTransform::set_origin(Vector2 _origin) {
    origin = _origin;
}

Vector2 VTransform::get_origin() {
    return origin;
}
