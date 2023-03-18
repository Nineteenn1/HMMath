cmake_minimum_required(VERSION 3.24)

project(HMMath)

file(GLOB_RECURSE HMMATH_SOURCES include/**.h)

add_library(${PROJECT_NAME} STATIC ${HMMATH_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_precompile_headers(${PROJECT_NAME} PUBLIC include/Precompiled.h)