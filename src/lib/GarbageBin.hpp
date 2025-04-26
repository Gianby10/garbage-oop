#ifndef GARBAGE_BIN_HPP
#define GARBAGE_BIN_HPP

#include <vector>
#include <memory>
#include "Garbage.hpp"


// Class representing a garbage bin that can hold multiple garbage items.

class GarbageBin {
public:
    GarbageBin() = default;
    ~GarbageBin() = default;

    void addGarbage(std::shared_ptr<Garbage> garbage);

    void listGarbage() const;
   
    void emptyBin();

private:
    std::vector<std::shared_ptr<Garbage>> garbageList;
};

#endif
