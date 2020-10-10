add_executable(t_sol2_print_script main.cpp)
target_link_libraries(t_sol2_print_script lua sol2 stdc++fs)

add_test(NAME sol2_print_script COMMAND t_sol2_print_script)
