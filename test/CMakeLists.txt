find_package(Catch2 3 REQUIRED)
add_executable(test_sum test_sum.cpp)
target_link_libraries(test_sum PRIVATE
    Catch2::Catch2WithMain
    library
)
set_target_properties(test_sum PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/tests_bin)
add_test(NAME sum_test COMMAND test_sum)
