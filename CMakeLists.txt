cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C VERSION 1.0.0)

include(GNUInstallDirs)

set(CTOF "${CMAKE_CURRENT_SOURCE_DIR}/mfi" CACHE STRING "CTOF")
set(BBH_SYSTEM LINUX CACHE STRING "BBH_SYSTEM")

find_library(MATH_LIBRARY m REQUIRED)

# find perl
find_program(PERL perl REQUIRED)
find_program(YACC yacc REQUIRED)
find_program(LEX lex REQUIRED)

add_custom_command(
    OUTPUT gpar.tab.c
    COMMAND "${YACC}" -b gpar -p gpar -d "${CMAKE_CURRENT_SOURCE_DIR}/gpar.y"
)

add_custom_command(
    OUTPUT lex.gpar.c
    COMMAND "${LEX}" -Pgpar "${CMAKE_CURRENT_SOURCE_DIR}/gpar.l"
)

set(SOURCES bbhutil.c sdf.c cliser.c "${CMAKE_CURRENT_BINARY_DIR}/gpar.tab.c" "${CMAKE_CURRENT_BINARY_DIR}/lex.gpar.c")

add_library(bbhutil STATIC ${SOURCES})
target_include_directories(bbhutil PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
set(HEADERS bbhutil.h bbhutil_f.h sdf.h sdf_f.h sdf_priv.h cliser.h gpar.h "${CMAKE_CURRENT_BINARY_DIR}/gpar.tab.h")
set_target_properties(bbhutil PROPERTIES
    PUBLIC_HEADER "${HEADERS}")

add_custom_command(
    OUTPUT bbhutil_f.c
    COMMAND "${CMAKE_C_COMPILER}" -E "${CMAKE_C_FLAGS}" -I "${CMAKE_CURRENT_SOURCE_DIR}" -o "${CMAKE_CURRENT_BINARY_DIR}/bbhutil_f.i" "${CMAKE_CURRENT_SOURCE_DIR}/bbhutil_f.h"
    COMMAND "${PERL}" "${CTOF}" "${CMAKE_CURRENT_BINARY_DIR}/bbhutil_f.i" "${CMAKE_CURRENT_BINARY_DIR}/bbhutil_f.c" "${BBH_SYSTEM}" "bbhutil"
    VERBATIM COMMAND_EXPAND_LISTS
)
add_custom_command(
    OUTPUT sdf_f.c
    COMMAND "${CMAKE_C_COMPILER}" -E "${CMAKE_C_FLAGS}" -I "${CMAKE_CURRENT_SOURCE_DIR}" -o "${CMAKE_CURRENT_BINARY_DIR}/sdf_f.i" "${CMAKE_CURRENT_SOURCE_DIR}/sdf_f.h"
    COMMAND "${PERL}" "${CTOF}" "${CMAKE_CURRENT_BINARY_DIR}/sdf_f.i" "${CMAKE_CURRENT_BINARY_DIR}/sdf_f.c" "${BBH_SYSTEM}" "sdf"
    VERBATIM COMMAND_EXPAND_LISTS
)
target_sources(bbhutil PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/bbhutil_f.c ${CMAKE_CURRENT_BINARY_DIR}/sdf_f.c)

# Create the config and version files.
include(CMakePackageConfigHelpers)
configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/bbhutilConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/bbhutilConfig.cmake"
  INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/bbhutil"
)
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/bbhutilConfigVersion.cmake"
  VERSION "${PROJECT_VERSION}"
  COMPATIBILITY SameMajorVersion
)

install(
  TARGETS bbhutil
  EXPORT bbhutilTargets
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

# Use a namespace because CMake provides better diagnostics for namespaced imported targets.
export(
  TARGETS bbhutil
  NAMESPACE bbhutil::
  FILE "${CMAKE_CURRENT_BINARY_DIR}/bbhutilTargets.cmake"
)

# Install version, config and target files.
install(
  FILES
    "${CMAKE_CURRENT_BINARY_DIR}/bbhutilConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/bbhutilConfigVersion.cmake"
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/bbhutil"
)

install(
  EXPORT bbhutilTargets
  NAMESPACE bbhutil::
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/bbhutil"
)
