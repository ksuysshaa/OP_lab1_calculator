# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/calculator_v2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/calculator_v2_autogen.dir/ParseCache.txt"
  "calculator_v2_autogen"
  )
endif()
