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
