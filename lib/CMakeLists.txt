set(BUILD_SHARED_LIBS OFF)

#--------------------------------
# LUA
# Scripting language
#--------------------------------
add_subdirectory(lua)

#--------------------------------
# sol2
# Extended C++ support of LUA
#--------------------------------
add_subdirectory(sol2)
