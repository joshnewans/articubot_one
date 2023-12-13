# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_openslam_gmapping_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED openslam_gmapping_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(openslam_gmapping_FOUND FALSE)
  elseif(NOT openslam_gmapping_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(openslam_gmapping_FOUND FALSE)
  endif()
  return()
endif()
set(_openslam_gmapping_CONFIG_INCLUDED TRUE)

# output package information
if(NOT openslam_gmapping_FIND_QUIETLY)
  message(STATUS "Found openslam_gmapping: 0.1.2 (${openslam_gmapping_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'openslam_gmapping' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${openslam_gmapping_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(openslam_gmapping_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${openslam_gmapping_DIR}/${_extra}")
endforeach()
