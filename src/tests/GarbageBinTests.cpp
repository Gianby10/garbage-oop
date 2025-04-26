#include "catch_amalgamated.hpp"
#include "GarbageBin.hpp"
#include "PlasticGarbage.hpp"

TEST_CASE("GarbageBin class tests") {
    GarbageBin bin;

    auto plastic = std::make_shared<PlasticGarbage>("Plastic Cup", 0.1, true, true);

    SECTION("Add and list garbage") {
        bin.addGarbage(plastic);

        
        REQUIRE_NOTHROW(bin.listGarbage());
    }

    SECTION("Empty garbage bin") {
        bin.addGarbage(plastic);
        bin.emptyBin();
        
        REQUIRE_NOTHROW(bin.listGarbage());
    }
}
