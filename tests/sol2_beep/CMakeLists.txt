add_executable(t_sol2_beep main.cpp)
target_link_libraries(t_sol2_beep lua sol2)

add_test(NAME sol2_beep COMMAND t_sol2_beep)
