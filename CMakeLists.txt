cmake_minimum_required(VERSION 3.0)
if(POLICY CMP0063)
  cmake_policy(SET CMP0063 NEW)
endif()

project(LibrariesHiddenSymbols)

option(BUILD_SHARED_LIBS "Build ITK with shared libraries." OFF)
add_library(baseclass baseclass.cpp)

if(BUILD_SHARED_LIBS)
  set_target_properties(baseclass PROPERTIES CXX_VISIBILITY_PRESET hidden)
  set_target_properties(baseclass PROPERTIES C_VISIBILITY_PRESET hidden)
  set_target_properties(baseclass PROPERTIES VISIBILITY_INLINES_HIDDEN 1)
endif()

add_library(instantiate SHARED instantiate.cpp)

set_target_properties(instantiate PROPERTIES CXX_VISIBILITY_PRESET hidden)
set_target_properties(instantiate PROPERTIES C_VISIBILITY_PRESET hidden)
set_target_properties(instantiate PROPERTIES VISIBILITY_INLINES_HIDDEN 1)

target_link_libraries(instantiate baseclass)
