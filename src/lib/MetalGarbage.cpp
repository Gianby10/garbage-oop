#include "MetalGarbage.hpp"
#include <iostream>

MetalGarbage::MetalGarbage(const std::string& name, double weight, bool isRecyclable, bool isMagnetic)
    : Garbage(name, weight,isRecyclable), m_isMagnetic(isMagnetic)
{
}

void MetalGarbage::dispose() const {
    std::cout << "Disposing metal garbage: " << getName()
        << " (" << getWeight() << " kg)"
        << " (" << (isRecyclable() ? "[Recyclable]" : "[Non-Recyclable]")
        << (m_isMagnetic ? " [Magnetic]" : " [Non-magnetic]")
        << std::endl;
}

bool MetalGarbage::isMagnetic() const {
    return m_isMagnetic;
}
