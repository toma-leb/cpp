cmake_minimum_required(VERSION 3.0)

# set the project name
project(selection_sort_file_meta)

set(CMAKE_CXX_STANDARD 17)

# compiling optimisation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

# allow concepts
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fconcepts")

# add the executable
add_executable(main main.cc)