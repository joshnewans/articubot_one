# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/winter24/gcamp_ros2_ws/install/robot_pose_publisher_ros2/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/winter24/gcamp_ros2_ws/install/robot_pose_publisher_ros2/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/home/winter24/gcamp_ros2_ws/install/robot_pose_publisher_ros2/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/home/winter24/gcamp_ros2_ws/install/robot_pose_publisher_ros2/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/home/winter24/.local/lib/python3.8/site-packages/cmake/data/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install("TARGETS" "robot_pose_publisher" "DESTINATION" "lib/robot_pose_publisher_ros2")
include("/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "launch" "DESTINATION" "share/robot_pose_publisher_ros2")
ament_cmake_symlink_install_directory("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" DIRECTORY "launch" "DESTINATION" "share/robot_pose_publisher_ros2")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/robot_pose_publisher_ros2" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/robot_pose_publisher_ros2" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/robot_pose_publisher_ros2" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/robot_pose_publisher_ros2" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/robot_pose_publisher_ros2/environment")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/robot_pose_publisher_ros2/environment")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/robot_pose_publisher_ros2/environment")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/robot_pose_publisher_ros2/environment")

# install(FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/robot_pose_publisher_ros2/environment")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/robot_pose_publisher_ros2/environment")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/robot_pose_publisher_ros2/environment")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/robot_pose_publisher_ros2/environment")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/robot_pose_publisher_ros2")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/robot_pose_publisher_ros2")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/robot_pose_publisher_ros2")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/robot_pose_publisher_ros2")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/robot_pose_publisher_ros2")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/robot_pose_publisher_ros2")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/robot_pose_publisher_ros2")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/robot_pose_publisher_ros2")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/robot_pose_publisher_ros2")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/robot_pose_publisher_ros2")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_index/share/ament_index/resource_index/packages/robot_pose_publisher_ros2" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_index/share/ament_index/resource_index/packages/robot_pose_publisher_ros2" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_core/robot_pose_publisher_ros2Config.cmake" "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_core/robot_pose_publisher_ros2Config-version.cmake" "DESTINATION" "share/robot_pose_publisher_ros2/cmake")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_core/robot_pose_publisher_ros2Config.cmake" "/home/winter24/gcamp_ros2_ws/build/robot_pose_publisher_ros2/ament_cmake_core/robot_pose_publisher_ros2Config-version.cmake" "DESTINATION" "share/robot_pose_publisher_ros2/cmake")

# install(FILES "/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2/package.xml" "DESTINATION" "share/robot_pose_publisher_ros2")
ament_cmake_symlink_install_files("/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2" FILES "/home/winter24/gcamp_ros2_ws/robot_pose_publisher_ros2/package.xml" "DESTINATION" "share/robot_pose_publisher_ros2")
