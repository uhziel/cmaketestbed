add_library(libcalc calc.c)
set_target_properties(libcalc PROPERTIES OUTPUT_NAME calc)

# install
install(FILES calc.h DESTINATION include)
install(TARGETS libcalc
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)
