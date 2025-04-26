#include "GarbageSorter.hpp"
#include "PlasticGarbage.hpp"
#include "OrganicGarbage.hpp"
#include "PaperGarbage.hpp"

void GarbageSorter::sort(std::shared_ptr<Garbage> garbage) {
    if (dynamic_cast<PlasticGarbage*>(garbage.get())) {
        if (plasticBin) {
            plasticBin->addGarbage(garbage);  
        }
    }
    else if (dynamic_cast<OrganicGarbage*>(garbage.get())) {
        if (organicBin) {
            organicBin->addGarbage(garbage);  
        }
    }
    else if (dynamic_cast<PaperGarbage*>(garbage.get())) {
        if (paperBin) {
            paperBin->addGarbage(garbage);  
        }
    }
}

void GarbageSorter::setPlasticBin(std::shared_ptr<GarbageBin> bin) {
    plasticBin = bin;
}

void GarbageSorter::setOrganicBin(std::shared_ptr<GarbageBin> bin) {
    organicBin = bin;
}

void GarbageSorter::setPaperBin(std::shared_ptr<GarbageBin> bin) {
    paperBin = bin;
}
