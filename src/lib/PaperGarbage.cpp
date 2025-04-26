#include "PaperGarbage.hpp"
#include <iostream>

PaperGarbage::PaperGarbage(const std::string& name, double weight, bool isRecyclable, bool isBiodegradable)
    : Garbage(name, weight,isRecyclable), m_isBiodegradable(isBiodegradable) {}

bool PaperGarbage::isBiodegradable() const {
    return m_isBiodegradable;
}

void PaperGarbage::dispose() const {
    std::cout << "Disposing paper garbage: " << getName()
        << " (" << getWeight() << " kg)"
        << " (" << (isRecyclable() ? "[Recyclable]" : "[Non-Recyclable]")
        << (m_isBiodegradable ? " [Biodegradable]" : " [Non-Biodegradable]") << std::endl;
}
