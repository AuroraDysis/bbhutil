cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C)

include(GNUInstallDirs)

file(GLOB HEADERS "*.h")
file(GLOB I_HEADERS "*.i")
file(GLOB SOURCES "*.c")

add_library(bbhutil STATIC ${SOURCES})
target_include_directories(bbhutil PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS bbhutil DESTINATION ${CMAKE_INSTALL_LIBDIR})
install(FILES ${HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(FILES ${I_HEADERS} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
