#ifndef PLASTIC_GARBAGE_HPP
#define PLASTIC_GARBAGE_HPP

#include "Garbage.hpp"
// Class representing plastic garbage.  
class PlasticGarbage : public Garbage {
public:
    PlasticGarbage(const std::string& name, double weight, bool isRecyclable, bool isBiodegradable);

    bool isBiodegradable() const;

    void dispose() const override;

private:
    bool m_isBiodegradable;
};

#endif 