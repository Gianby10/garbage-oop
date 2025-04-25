#pragma once
#include <string>

class Garbage {
public:
    virtual ~Garbage() = default;

    virtual double getWeight() const = 0;
    virtual std::string getType() const = 0;
    virtual std::string getDisposalMethod() const = 0;
};

