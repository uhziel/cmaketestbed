add_executable(calc main.c)
include_directories(../libcalc ${READLINE_INCLUDE_DIR})
target_link_libraries(calc libcalc ${READLINE_LIBRARY})

# install
install(TARGETS calc RUNTIME DESTINATION bin)
