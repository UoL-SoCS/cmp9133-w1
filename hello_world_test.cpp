// test_hello_world.cpp
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "hello_world.cpp"

TEST_CASE("Hello World Function Test") {
    REQUIRE(getHelloWorld() == "Hello, World!");
}
