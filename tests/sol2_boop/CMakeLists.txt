add_executable(t_sol2_boop main.cpp)
target_link_libraries(t_sol2_boop lua sol2)

add_test(NAME sol2_boop COMMAND t_sol2_boop)
