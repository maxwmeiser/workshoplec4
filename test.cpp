#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("JOIN TEST"){
    std::vector<std::string> stringVec = {"az","az"};
    std::string luhGlue = "B";
    REQUIRE (Join(stringVec,luhGlue) == "azBaz");
}

TEST_CASE("REMOVE 2s TEST"){
    REQUIRE(RemoveTwos(7) == 7);
    REQUIRE(RemoveTwos(8) == 1);
}

TEST_CASE("EVEN MASK"){
    std::vector<int> intIn = {1,2,3,5,6};
    std::vector<bool> expectedResult {false,true,false,true,false,true};
    REQUIRE(EvenMask(intIn) == expectedResult);
}