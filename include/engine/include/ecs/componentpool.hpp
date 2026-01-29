#pragma once
#include "ecs/entity.hpp"
#include <vector>

template<typename T>
struct ComponentPool {
    std::vector<Entity> dense;
    std::vector<u32> sparse;
    std::vector<T> data;

    bool contains(Entity e) const {
        if (e >= sparse.size())
            return false;
        u32 index = sparse[e];
        return index < dense.size() && dense[index] == e;
    }

    void remove_entity(Entity e) {
        u32 index = sparse[e];
        Entity last = dense.back();

        dense[index] = last;
        sparse[last] = index;

        dense.pop_back();
    }

    void ensure(Entity e) {
        if (e >= sparse.size())
            sparse.resize(e + 1, UINT32_MAX);
    }

    T& add(Entity e, const T& value) {
        ensure(e);

        sparse[e] = dense.size();
        dense.push_back(e);
        data.push_back(value);

        return data.back();
    }

    void remove(Entity e) {
        u32 index = sparse[e];
        u32 lastIndex = data.size() - 1;

        data[index] = std::move(data[lastIndex]);
        remove_entity(e);
        data.pop_back();
    }

    T* get(Entity e) {
        if (!contains(e)) return nullptr;
        return &data[sparse[e]];
    }
};

