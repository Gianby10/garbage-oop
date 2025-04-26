#ifndef GARBAGE_SORTER_HPP
#define GARBAGE_SORTER_HPP

#include <memory>
#include "Garbage.hpp"
#include "GarbageBin.hpp"


// Class representing a garbage sorter that sorts garbage into bins.

class GarbageSorter {
public:
    GarbageSorter() = default;
    ~GarbageSorter() = default;

    
    void sort(std::shared_ptr<Garbage> garbage);

    
    void setPlasticBin(std::shared_ptr<GarbageBin> bin);
    void setOrganicBin(std::shared_ptr<GarbageBin> bin);
    void setPaperBin(std::shared_ptr<GarbageBin> bin);

private:
    std::shared_ptr<GarbageBin> plasticBin;
    std::shared_ptr<GarbageBin> organicBin;
    std::shared_ptr<GarbageBin> paperBin;
};

#endif 
