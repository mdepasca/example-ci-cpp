cmake_minimum_required(VERSION 3.19 FATAL_ERROR)
project(fizzbuzz VERSION 0.1)

add_executable(fizzbuzz)
set(source_files 
  PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/fizzbuzz.cpp"
  PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/fizzbuzz.hpp")
target_sources(fizzbuzz
  PRIVATE ${source_files})
install(TARGETS fizzbuzz
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
# TEST
add_executable(fizzbuzz_test)
target_sources(fizzbuzz_test
  PUBLIC  "${CMAKE_CURRENT_SOURCE_DIR}/test/test_fizzbuzz.cpp"
  PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/fizzbuzz.hpp"
  PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/catch2/catch.hpp")
target_include_directories(fizzbuzz_test
  PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/catch2/"
  PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/")

enable_testing()
add_test(fizzbuzz_test fizzbuzz_test)
