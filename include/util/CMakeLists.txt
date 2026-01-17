add_library(util STATIC)

target_sources(util
        PUBLIC
        src/gmath.cpp
)

target_include_directories(util
        PUBLIC
        include
)

target_link_libraries(util PUBLIC)
