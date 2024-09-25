set(TESTS t_get_param t_get_param_v t_get_str_param t_regex t_is_param_assigned)

foreach(TEST ${TESTS})
    add_executable(${TEST} ${TEST}.c)
    target_link_libraries(${TEST} PRIVATE bbhutil)
endforeach()

install(TARGETS ${TESTS} DESTINATION ${CMAKE_INSTALL_BINDIR})
