#----------------------------------------------------------------
# Generated CMake target import file for configuration "Debug".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SFML::System" for configuration "Debug"
set_property(TARGET SFML::System APPEND PROPERTY IMPORTED_CONFIGURATIONS DEBUG)
set_target_properties(SFML::System PROPERTIES
  IMPORTED_LOCATION_DEBUG "${_IMPORT_PREFIX}/lib/libsfml-system-d.3.0.0.dylib"
  IMPORTED_SONAME_DEBUG "@rpath/libsfml-system-d.3.0.dylib"
  )

list(APPEND _cmake_import_check_targets SFML::System )
list(APPEND _cmake_import_check_files_for_SFML::System "${_IMPORT_PREFIX}/lib/libsfml-system-d.3.0.0.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
