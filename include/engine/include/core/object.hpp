#pragma once
#include <string>

class Object {
protected:
    std::string name;
public:
    Object(const char *_name);
    Object clone();
};
