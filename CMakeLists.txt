cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C)

include(GNUInstallDirs)

file(GLOB SOURCES "*.c")

message(STATUS "SOURCES: ${SOURCES}")

add_library(bbhutil STATIC ${SOURCES})
target_include_directories(bbhutil PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

