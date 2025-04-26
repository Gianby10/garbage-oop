#include "catch_amalgamated.hpp"
#include "MetalGarbage.hpp"

TEST_CASE("MetalGarbage class tests") {

    SECTION("Test MetalGarbage Attributes") {
        auto metal = std::make_shared<MetalGarbage>("Steel Can", 0.5, true, true);

        REQUIRE(metal->getName() == "Steel Can");
        REQUIRE(metal->getWeight() == 0.5);
        REQUIRE(metal->isRecyclable() == true);
        REQUIRE(metal->isMagnetic() == true);
    }
}
