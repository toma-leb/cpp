cmake_minimum_required(VERSION 3.0)

# set the project name
project(cartesian_vector_param)

set(CMAKE_CXX_STANDARD 14)

# add the executable
add_executable(main vector.cpp main.cpp)