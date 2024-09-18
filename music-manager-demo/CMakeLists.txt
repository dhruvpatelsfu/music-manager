cmake_minimum_required(VERSION 3.10)
project(music-manager)

# Configure the library to be tested
add_library(music-manager)
target_sources(music-manager
  PRIVATE
    src/MusicManager.cpp
)
target_include_directories(music-manager
  PUBLIC
    src/include/
)
set_target_properties(music-manager PROPERTIES
  LINKER_LANGUAGE CXX
  CXX_STANDARD 17
)

find_library(M_LIB m)
target_link_libraries(music-manager
  INTERFACE
    ${M_LIB}
)

add_subdirectory(test)
add_subdirectory(src)
