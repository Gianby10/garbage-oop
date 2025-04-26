#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"

#include "PlasticGarbage.hpp"

TEST_CASE("PlasticGarbage class tests") {

    SECTION("Test PlasticGarbage Constructor and Attributes") {
        auto plastic = std::make_shared<PlasticGarbage>("Plastic Bottle", 0.2, true, true);

        REQUIRE(plastic->getName() == "Plastic Bottle");
        REQUIRE(plastic->getWeight() == 0.2);
        REQUIRE(plastic->isRecyclable() == true);
        REQUIRE(plastic->isBiodegradable() == true);
    }

    SECTION("Test Non-Recyclable PlasticGarbage") {
        auto plastic = std::make_shared<PlasticGarbage>("Plastic Bag", 0.3, false, true);

        REQUIRE(plastic->isRecyclable() == false);
        REQUIRE(plastic->isBiodegradable() == true);
    }

    SECTION("Test Non-Biodegradable PlasticGarbage") {
        auto plastic = std::make_shared<PlasticGarbage>("Plastic Wrap", 0.1, false, false);

        REQUIRE(plastic->isBiodegradable() == false);
    }
}
