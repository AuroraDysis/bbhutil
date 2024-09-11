cmake_minimum_required(VERSION 3.13)

project(bbhutil LANGUAGES C VERSION 1.0.0)

include(GNUInstallDirs)

option(USE_GENERATED_FILES "Use pregenerated files" OFF)

if (NOT USE_GENERATED_FILES)
find_program(PERL perl)
find_program(YACC yacc)
find_program(LEX lex)

message(STATUS "PERL: ${PERL}")
message(STATUS "YACC: ${YACC}")
message(STATUS "LEX: ${LEX}")

if (NOT PERL OR NOT YACC OR NOT LEX)
    message(WARNING "Perl or YACC or LEX not found, use pregenerated files")
    set(USE_GENERATED_FILES ON)
endif()

set(CTOF "${CMAKE_CURRENT_SOURCE_DIR}/mfi" CACHE STRING "CTOF")
set(BBH_SYSTEM LINUX CACHE STRING "BBH_SYSTEM")

add_custom_command(
    OUTPUT gpar.tab.c
    COMMAND "${YACC}" -b gpar -p gpar -d "${CMAKE_CURRENT_SOURCE_DIR}/gpar.y"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/gpar.y"
    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
)

add_custom_command(
    OUTPUT lex.gpar.c
    COMMAND "${LEX}" -Pgpar "${CMAKE_CURRENT_SOURCE_DIR}/gpar.l"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/gpar.l"
    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
)
else()
message(STATUS "Using pregenerated files")

set(GENERATED_FILES bbhutil_f.c bbhutil_f.i sdf_f.c sdf_f.i gpar.tab.c gpar.tab.h lex.gpar.c)
foreach(file ${GENERATED_FILES})
    configure_file("${CMAKE_CURRENT_SOURCE_DIR}/generated/${file}" "${CMAKE_CURRENT_BINARY_DIR}/${file}" COPYONLY)
endforeach()
endif()

set(SOURCES bbhutil.c sdf.c cliser.c "${CMAKE_CURRENT_BINARY_DIR}/gpar.tab.c" "${CMAKE_CURRENT_BINARY_DIR}/lex.gpar.c")

add_library(bbhutil STATIC ${SOURCES})
target_include_directories(bbhutil PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
set(HEADERS bbhutil.h bbhutil_f.h sdf.h sdf_f.h sdf_priv.h cliser.h gpar.h "${CMAKE_CURRENT_BINARY_DIR}/gpar.tab.h")
set_target_properties(bbhutil PROPERTIES
    PUBLIC_HEADER "${HEADERS}")

if (NOT USE_GENERATED_FILES)
add_custom_command(
    OUTPUT bbhutil_f.c
    COMMAND "${CMAKE_C_COMPILER}" -E "${CMAKE_C_FLAGS}" -I "${CMAKE_CURRENT_SOURCE_DIR}" -o "bbhutil_f.i" "${CMAKE_CURRENT_SOURCE_DIR}/bbhutil_f.h"
    COMMAND "${PERL}" "${CTOF}" "bbhutil_f.i" "bbhutil_f.c" "${BBH_SYSTEM}" "bbhutil"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/bbhutil_f.h"
    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
    VERBATIM COMMAND_EXPAND_LISTS
)
add_custom_command(
    OUTPUT sdf_f.c
    COMMAND "${CMAKE_C_COMPILER}" -E "${CMAKE_C_FLAGS}" -I "${CMAKE_CURRENT_SOURCE_DIR}" -o "sdf_f.i" "${CMAKE_CURRENT_SOURCE_DIR}/sdf_f.h"
    COMMAND "${PERL}" "${CTOF}" "sdf_f.i" "sdf_f.c" "${BBH_SYSTEM}" "sdf"
    DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/sdf_f.h"
    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
    VERBATIM COMMAND_EXPAND_LISTS
)
endif()
target_sources(bbhutil PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/bbhutil_f.c ${CMAKE_CURRENT_BINARY_DIR}/sdf_f.c)

# Create the config and version files.
include(CMakePackageConfigHelpers)
configure_package_config_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/RNPLConfig.cmake.in"
  "${CMAKE_CURRENT_BINARY_DIR}/RNPLConfig.cmake"
  INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/RNPL"
)
write_basic_package_version_file(
  "${CMAKE_CURRENT_BINARY_DIR}/RNPLConfigVersion.cmake"
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
  NAMESPACE RNPL::
  FILE "${CMAKE_CURRENT_BINARY_DIR}/bbhutilTargets.cmake"
)

# Install version, config and target files.
install(
  FILES
    "${CMAKE_CURRENT_BINARY_DIR}/RNPLConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/RNPLConfigVersion.cmake"
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/RNPL"
)

install(
  EXPORT bbhutilTargets
  NAMESPACE RNPL::
  DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/RNPL"
)
