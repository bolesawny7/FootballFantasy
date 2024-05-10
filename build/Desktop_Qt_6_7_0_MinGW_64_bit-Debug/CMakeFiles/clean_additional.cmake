# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\FootballFantasy_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\FootballFantasy_autogen.dir\\ParseCache.txt"
  "FootballFantasy_autogen"
  )
endif()
