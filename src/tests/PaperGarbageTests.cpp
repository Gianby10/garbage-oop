#include "catch_amalgamated.hpp"
#include "PaperGarbage.hpp"

TEST_CASE("PaperGarbage class tests") {

    SECTION("Test PaperGarbage Attributes") {
        auto paper = std::make_shared<PaperGarbage>("Newspaper", 0.1, true, true);

        REQUIRE(paper->getName() == "Newspaper");
        REQUIRE(paper->getWeight() == 0.1);
        REQUIRE(paper->isRecyclable() == true);
        REQUIRE(paper->isBiodegradable() == true);
    }
}
