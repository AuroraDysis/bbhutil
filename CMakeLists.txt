cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C)

file(GLOB SOURCES_C "src/*.c")
file(GLOB HEADERS "include/*.h")

add_library(bbhutil STATIC ${SOURCES_C})

include(GNUInstallDirs)
