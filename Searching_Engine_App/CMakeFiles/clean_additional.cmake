# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\qt_Search_enging_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\qt_Search_enging_autogen.dir\\ParseCache.txt"
  "qt_Search_enging_autogen"
  )
endif()
