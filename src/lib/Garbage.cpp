#include "Garbage.hpp"

Garbage::Garbage(const std::string& name, double weight,bool isRecyclable)
    : m_name(name), m_weight(weight), m_isRecyclable(isRecyclable)
{
}

std::string Garbage::getName() const {
    return m_name;
}

double Garbage::getWeight() const {
    return m_weight;
}

bool Garbage::isRecyclable() const {
    return m_isRecyclable;
}