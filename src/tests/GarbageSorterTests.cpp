#include "catch_amalgamated.hpp"
#include "GarbageSorter.hpp"
#include "GarbageBin.hpp"
#include "PlasticGarbage.hpp"
#include "OrganicGarbage.hpp"
#include "PaperGarbage.hpp"

TEST_CASE("GarbageSorter class tests") {
    auto plasticBin = std::make_shared<GarbageBin>();
    auto organicBin = std::make_shared<GarbageBin>();
    auto paperBin = std::make_shared<GarbageBin>();

    GarbageSorter sorter;
    sorter.setPlasticBin(plasticBin);
    sorter.setOrganicBin(organicBin);
    sorter.setPaperBin(paperBin);

    auto plastic = std::make_shared<PlasticGarbage>("Bottle", 0.5, true, false);
    auto organic = std::make_shared<OrganicGarbage>("Apple Core", 0.2, true, 3);
    auto paper = std::make_shared<PaperGarbage>("Paper Sheet", 0.05, true, true);

    SECTION("Sort Plastic Garbage") {
        REQUIRE_NOTHROW(sorter.sort(plastic));
    }

    SECTION("Sort Organic Garbage") {
        REQUIRE_NOTHROW(sorter.sort(organic));
    }

    SECTION("Sort Paper Garbage") {
        REQUIRE_NOTHROW(sorter.sort(paper));
    }
}
