cmake_minimum_required(VERSION 3.0)

# set the project name
project(cartesian_vector_variable)

set(CMAKE_CXX_STANDARD 14)

# add the executable
add_executable(main main.cc vector.cc)

# compiling optimisation
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")