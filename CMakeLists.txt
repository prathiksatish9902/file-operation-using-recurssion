cmake_minimum_required(VERSION 3.16)

project(fo_reverse_recurssion LANGUAGES C)

add_executable(fo_reverse_recurssion main.c)

include(GNUInstallDirs)
install(TARGETS fo_reverse_recurssion
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
