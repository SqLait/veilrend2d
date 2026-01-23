add_library(engine STATIC)

target_sources(engine
        PUBLIC
        src/entity.cpp
        src/physicssystem.cpp
        src/scene.cpp
        src/scenemanager.cpp
        src/vtransform.cpp
        src/window.cpp
)

target_include_directories(engine
        PUBLIC
        include
)

target_link_libraries(engine PUBLIC util raylib)
