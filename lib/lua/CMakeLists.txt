cmake_minimum_required (VERSION 3.16)
project (lua C)

if(WIN32)
    add_definitions( -D_CRT_SECURE_NO_WARNINGS )
endif()

#--------------------------------
# Library
#--------------------------------
file(GLOB LUA_SOURCE ${PROJECT_SOURCE_DIR}/src/*.h ${PROJECT_SOURCE_DIR}/src/*.c)
add_library (lua STATIC ${LUA_SOURCE})
#set_target_properties(lua PROPERTIES OUTPUT_NAME "lua")
target_include_directories(lua PUBLIC ${PROJECT_SOURCE_DIR}/src/)
