add_executable(calc main.c)
include_directories(../libcalc)
target_link_libraries(calc libcalc readline)

# install
install(TARGETS calc RUNTIME DESTINATION bin)
