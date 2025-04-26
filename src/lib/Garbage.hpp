#ifndef GARBAGE_HPP
#define GARBAGE_HPP

#include <string>
// Abstract base class representing a piece of garbage.
class Garbage {
public:
    Garbage(const std::string& name, double weight,bool isRecyclable);
    virtual ~Garbage() = default;

    std::string getName() const;
    double getWeight() const;
    bool isRecyclable() const;

    virtual void dispose() const = 0; 

private:
    std::string m_name;
    double m_weight;
    bool m_isRecyclable;
};

#endif 
