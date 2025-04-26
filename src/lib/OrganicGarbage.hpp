#ifndef ORGANIC_GARBAGE_HPP
#define ORGANIC_GARBAGE_HPP

#include "Garbage.hpp"

// Class representing organic garbage.

class OrganicGarbage : public Garbage {
public:
    ~OrganicGarbage() override = default;

    OrganicGarbage(const std::string& name, double weight, bool isRecyclable, int decayTimeDays);

    int getDecayTimeDays() const;

    void dispose() const override;

private:
    int m_decayTimeDays;
};

#endif 
