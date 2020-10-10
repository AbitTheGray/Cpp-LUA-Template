add_executable(t_sol2_print main.cpp)
target_link_libraries(t_sol2_print lua sol2)

add_test(NAME sol2_print COMMAND t_sol2_print)
