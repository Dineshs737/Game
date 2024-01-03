

project(Game
VERSION 0.0.1
DESCRIPTION "this is Snake game "
#LANGUAGE CXX_EXTENSIONS)
)
add_executable(Game "main.cpp")

target_compile_features(Game PRIVATE cxx_std_20)
target_compile_definitions(Game PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
