#include <catch2/catch_test_macros.hpp>
#include "library.hpp"

TEST_CASE( "Simple sum", "[sum]" ) {
    REQUIRE(sum(10, 20) == 30);
    REQUIRE(sum(2, -2) == 0);
}
