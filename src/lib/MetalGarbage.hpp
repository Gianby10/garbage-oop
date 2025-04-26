#ifndef METALGARBAGE_HPP
#define METALGARBAGE_HPP

#include "Garbage.hpp"
#include <string>

// Class representing metallic garbage.

class MetalGarbage : public Garbage {
public:
    MetalGarbage(const std::string& name, double weight,bool isRecyclable, bool isMagnetic);

    virtual void dispose() const override;

    bool isMagnetic() const;

private:
    bool m_isMagnetic;
};

#endif 
