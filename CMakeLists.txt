cmake_minimum_required(VERSION 3.8)
project (BlocksGame VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(RESOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/resources)

add_subdirectory(external)
add_subdirectory(source)
add_subdirectory(tests)
