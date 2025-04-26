#include "OrganicGarbage.hpp"
#include <iostream>

OrganicGarbage::OrganicGarbage(const std::string& name, double weight, bool isRecyclable, int decayTimeDays)
    : Garbage(name, weight,isRecyclable), m_decayTimeDays(decayTimeDays)
{
}

void OrganicGarbage::dispose() const {
    std::cout << "Disposing organic garbage: " << getName()
        << " (" << getWeight() << " kg)"
        << " (" << (isRecyclable() ? "[Recyclable]" : "[Non-Recyclable]")
        << " [Decays in " << m_decayTimeDays << " days]" << std::endl;
}

int OrganicGarbage::getDecayTimeDays() const {
    return m_decayTimeDays;
}
