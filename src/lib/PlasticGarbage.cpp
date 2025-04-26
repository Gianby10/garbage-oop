#include "PlasticGarbage.hpp"
#include <iostream>

PlasticGarbage::PlasticGarbage(const std::string& name, double weight, bool isRecyclable, bool isBiodegradable)
    : Garbage(name, weight,isRecyclable), m_isBiodegradable(isBiodegradable)
{
}

void PlasticGarbage::dispose() const {
    std::cout << "Disposing plastic garbage: " << getName()
        << " (" << getWeight() << " kg)"
        << " (" << (isRecyclable() ? "[Recyclable]" : "[Non-Recyclable]")
        << (m_isBiodegradable ? " [Biodegradable]" : " [Non-biodegradable]") << std::endl;
}

bool PlasticGarbage::isBiodegradable() const {
    return m_isBiodegradable;
}