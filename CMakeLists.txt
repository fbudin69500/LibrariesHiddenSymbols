cmake_minimum_required(VERSION 3.0)
if(POLICY CMP0063)
  cmake_policy(SET CMP0063 NEW)
endif()

project(LibrariesHiddenSymbols)

add_library(baseclass STATIC baseclass.cpp)

set_target_properties(baseclass PROPERTIES CXX_VISIBILITY_PRESET hidden)
set_target_properties(baseclass PROPERTIES C_VISIBILITY_PRESET hidden)
set_target_properties(baseclass PROPERTIES VISIBILITY_INLINES_HIDDEN 1)


add_library(instantiate SHARED instantiate.cpp)

set_target_properties(instantiate PROPERTIES CXX_VISIBILITY_PRESET hidden)
set_target_properties(instantiate PROPERTIES C_VISIBILITY_PRESET hidden)
set_target_properties(instantiate PROPERTIES VISIBILITY_INLINES_HIDDEN 1)

target_link_libraries(instantiate baseclass)
