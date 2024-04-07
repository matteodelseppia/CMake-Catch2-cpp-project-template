cmake_minimum_required(VERSION 3.5)
project(ProjectName VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_FLAGS "-Wall")
add_compile_options(${CMAKE_CXX_FLAGS})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include 
                    ${PROJECT_SOURCE_DIR}/src/include)
include(CTest)
add_subdirectory(src)
add_subdirectory(test)
