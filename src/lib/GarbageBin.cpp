#include "GarbageBin.hpp"
#include <iostream>

void GarbageBin::addGarbage(std::shared_ptr<Garbage> garbage) {
    garbageList.push_back(garbage);
}

void GarbageBin::listGarbage() const {
    std::cout << "Garbage in the bin:" << std::endl;
    if (garbageList.empty()) {
        std::cout << "EMPTY";
        return;
    }
    for (const auto& garbage : garbageList) {
        std::cout 
        << " - " << garbage->getName() 
        << " (Weight: " << garbage->getWeight() 
        << " kg, Recyclable: "
        << garbage->isRecyclable() << ")" << std::endl;
    }
}

void GarbageBin::emptyBin() {
    garbageList.clear();
    std::cout << "The bin has been emptied." << std::endl;
}