cmake_minimum_required(VERSION 3.16)
project(LUA_Template C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)

cmake_policy(SET CMP0077 NEW) # set() overrides option()

#--------------------------------
# Debug Options
#--------------------------------

add_compile_options("$<$<CONFIG:DEBUG>:-DDEBUG>") # Define DEBUG in Debug builds

#--------------------------------
# Compiler configuration
#--------------------------------

if(MINGW)
    message(NOTICE "MinGW detected, setting compilation to Windows")
    set(WIN32 ON)
endif()

#--------------------------------
# External libraries
#--------------------------------

add_subdirectory(lib)

#--------------------------------
# Source
#--------------------------------

file(GLOB_RECURSE PROJECT_SOURCE src/*.hpp src/*.cpp src/*.h src/*.c)

add_library(LUA_Template STATIC ${PROJECT_SOURCE})
target_include_directories(LUA_Template PUBLIC src/)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_link_libraries(LUA_Template -static-libgcc -static-libstdc++)
endif()
target_link_libraries(LUA_Template lua sol2)

#--------------------------------
# Source
#--------------------------------

if(BUILD_TESTING)
    include(CTest)
    enable_testing()

    add_subdirectory(tests)
endif()
