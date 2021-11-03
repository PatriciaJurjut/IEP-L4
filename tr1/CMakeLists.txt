add_library(
    tr1
    src/Fruit.cpp
    inc/Fruit.hpp
)

target_include_directories(tr1 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/inc")