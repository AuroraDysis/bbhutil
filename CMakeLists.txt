cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C)

set(CTOF ${CMAKE_CURRENT_SOURCE_DIR}/mfi CACHE STRING "CTOF")
set(BBH_SYSTEM LINUX CACHE STRING "BBH_SYSTEM")

# find perl
find_program(PERL perl REQUIRED)
find_program(YACC yacc REQUIRED)
find_program(LEX lex REQUIRED)

add_custom_command(
    OUTPUT bbhutil_f.c
    COMMAND ${PERL} ${CTOF} bbhutil_f.i bbhutil_f.c ${BBH_SYSTEM} bbhutil
)

add_custom_command(
    OUTPUT sdf_f.c
    COMMAND ${PERL} ${CTOF} sdf_f.i sdf_f.c ${BBH_SYSTEM} sdf
)

add_custom_command(
    OUTPUT gpar.tab.c
    COMMAND ${YACC} -b gpar -p gpar -d gpar.y
)

add_custom_command(
    OUTPUT lex.gpar.c
    COMMAND ${LEX} -Pgpar gpar.l
)

include(GNUInstallDirs)

set(SOURCES bbhutil.c bbhutil_f.c sdf.c sdf_f.c cliser.c gpar.tab.c lex.gpar.c)
add_library(bbhutil STATIC ${SOURCES})
target_include_directories(bbhutil PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
set(HEADERS bbhutil.h bbhutil_f.h bbhutil_f.i sdf.h sdf_f.h sdf_priv.h cliser.h gpar.h gpar.tab.h)
set_target_properties(bbhutil PROPERTIES PUBLIC_HEADER "${HEADERS}")

install(
  TARGETS bbhutil
  EXPORT bbhutilTargets
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)
