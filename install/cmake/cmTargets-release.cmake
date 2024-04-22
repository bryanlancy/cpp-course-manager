#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "::cm" for configuration "Release"
set_property(TARGET ::cm APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(::cm PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcm.a"
  )

list(APPEND _cmake_import_check_targets ::cm )
list(APPEND _cmake_import_check_files_for_::cm "${_IMPORT_PREFIX}/lib/libcm.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
