#
# Universidad de La Laguna; Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática (1º)
# 
# @author Adriano dos Santos Moreira <adriano.moreira.07@ull.edu.es> 
# @brief CMakeLists.txt for anagrams
#
# Usage:
# 1. Create a build folder and enter
# 2. Execute cmake ..
# 3. Execute make
# 4. Run the program
#

# Files
#    anagrams
#    anagrams_functions

cmake_minimum_required(VERSION 3.1)
project(anagrams
    VERSION 1.0
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -o0")
set(CMAKE_CXX_FLAGS_RELEASE "-o3")

add_executable(anagrams
    ${PROJECT_SOURCE_DIR}/src/anagrams_functions.cc
    ${PROJECT_SOURCE_DIR}/src/anagrams_functions.h
    ${PROJECT_SOURCE_DIR}/src/anagrams.cc)


