cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C)

include(GNUInstallDirs)

set(CTOF ${CMAKE_CURRENT_SOURCE_DIR}/mfi CACHE STRING "CTOF")
set(BBH_SYSTEM LINUX CACHE STRING "BBH_SYSTEM")

# find perl
find_program(PERL perl REQUIRED)
find_program(YACC yacc REQUIRED)
find_program(LEX lex REQUIRED)

set(SOURCES bbhutil.c sdf.c cliser.c)

add_library(bbhutil STATIC ${SOURCES})
target_include_directories(bbhutil PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
set(HEADERS bbhutil.h bbhutil_f.h bbhutil_f.i sdf.h sdf_f.h sdf_priv.h cliser.h gpar.h)
set_target_properties(bbhutil
    PUBLIC_HEADER ${HEADERS})
get_target_property(bbhutil_compile_opts bbhutil COMPILE_OPTIONS)

add_custom_command(
    OUTPUT bbhutil_f.c
    COMMAND ${CMAKE_C_COMPILER} ${CMAKE_C_FLAGS}  ${bbhutil_compile_opts} -o bbhutil_f.c -E bbhutil.c
    COMMAND ${PERL} ${CTOF} bbhutil_f.i bbhutil_f.c ${BBH_SYSTEM} bbhutil
)
add_custom_command(
    OUTPUT sdf_f.c
    COMMAND ${CMAKE_C_COMPILER} ${CMAKE_C_FLAGS}  ${bbhutil_compile_opts} -o sdf_f.c -E sdf.c
    COMMAND ${PERL} ${CTOF} sdf_f.i sdf_f.c ${BBH_SYSTEM} sdf
)
set_property(SOURCE sdf_f.i PROPERTY LANGUAGE C)
set_property(SOURCE bbhutil_f.i PROPERTY LANGUAGE C)

target_sources(bbhutil PRIVATE bbhutil_f.c sdf_f.c bbhutil_f.i sdf_f.i)

add_custom_command(
    OUTPUT gpar.tab.c
    COMMAND ${YACC} -b gpar -p gpar -d gpar.y
)

add_custom_command(
    OUTPUT lex.gpar.c
    COMMAND ${LEX} -Pgpar gpar.l
)

target_sources(bbhutil PRIVATE gpar.tab.h gpar.tab.c lex.gpar.c)

install(
  TARGETS bbhutil
  EXPORT bbhutilTargets
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
