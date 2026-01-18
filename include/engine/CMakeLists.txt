add_library(engine STATIC)

target_sources(engine
        PUBLIC
        src/window.cpp
        src/scenemanager.cpp
        src/scene.cpp
)

target_include_directories(engine
        PUBLIC
        include
)

target_link_libraries(engine PUBLIC util raylib)
