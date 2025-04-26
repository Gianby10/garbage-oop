#include "catch_amalgamated.hpp"
#include "OrganicGarbage.hpp"

TEST_CASE("OrganicGarbage class tests") {

    SECTION("Test OrganicGarbage Attributes") {
        auto organic = std::make_shared<OrganicGarbage>("Banana Peel", 0.05, true, 7);

        REQUIRE(organic->getName() == "Banana Peel");
        REQUIRE(organic->getWeight() == 0.05);
        REQUIRE(organic->isRecyclable() == true);
        REQUIRE(organic->getDecayTimeDays() == 7);
    }
}
