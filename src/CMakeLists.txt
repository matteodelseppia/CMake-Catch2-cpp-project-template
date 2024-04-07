include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(example example.cpp)
target_compile_options(example PRIVATE ${CMAKE_CXX_FLAGS})
