cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C)

include(GNUInstallDirs)

set(CTOF ${CMAKE_CURRENT_SOURCE_DIR}/mfi CACHE STRING "CTOF")
set(BBH_SYSTEM LINUX CACHE STRING "BBH_SYSTEM")

# find perl
find_program(PERL perl REQUIRED)
find_program(YACC yacc REQUIRED)
find_program(LEX lex REQUIRED)

add_custom_command(
    OUTPUT gpar.tab.c
    COMMAND ${YACC} -b gpar -p gpar -d gpar.y
)

add_custom_command(
    OUTPUT lex.gpar.c
    COMMAND ${LEX} -Pgpar gpar.l
)

set(SOURCES bbhutil.c sdf.c cliser.c gpar.tab.c lex.gpar.c)

add_library(bbhutil STATIC ${SOURCES})
target_include_directories(bbhutil PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
set(HEADERS bbhutil.h bbhutil_f.h sdf.h sdf_f.h sdf_priv.h cliser.h gpar.h gpar.tab.h)
set_target_properties(bbhutil PROPERTIES
    PUBLIC_HEADER "${HEADERS}")
get_target_property(bbhutil_compile_opts bbhutil COMPILE_OPTIONS)

add_custom_command(
    OUTPUT bbhutil_f.c
    COMMAND "${CMAKE_C_COMPILER} ${CMAKE_C_FLAGS} ${bbhutil_compile_opts} -I${CMAKE_CURRENT_SOURCE_DIR} -o bbhutil_f.c -E ${CMAKE_CURRENT_SOURCE_DIR}/bbhutil.c"
    COMMAND "${PERL} ${CTOF} bbhutil_f.i bbhutil_f.c ${BBH_SYSTEM} bbhutil"
)
add_custom_command(
    OUTPUT sdf_f.c
    COMMAND "${CMAKE_C_COMPILER} ${CMAKE_C_FLAGS}  ${bbhutil_compile_opts} -I${CMAKE_CURRENT_SOURCE_DIR} -o sdf_f.c -E ${CMAKE_CURRENT_SOURCE_DIR}/sdf.c"
    COMMAND "${PERL} ${CTOF} sdf_f.i sdf_f.c ${BBH_SYSTEM} sdf"
)
target_sources(bbhutil PRIVATE bbhutil_f.c sdf_f.c)

install(
  TARGETS bbhutil
  EXPORT bbhutilTargets
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
