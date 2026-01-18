#include <core/object.hpp>

Object::Object(const char *_name) {
    name = _name;
}

Object Object::clone() {
    return Object(name.c_str());
}
