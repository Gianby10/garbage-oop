#include <iostream>
#include <memory>
#include "Garbage.hpp"
#include "OrganicGarbage.hpp"
#include "PaperGarbage.hpp"
#include "GarbageBin.hpp"
#include "GarbageSorter.hpp"
#include <PlasticGarbage.hpp>
#include <MetalGarbage.hpp>


int main() {
    std::cout << std::boolalpha;
    auto plasticBin = std::make_shared<GarbageBin>();
    auto organicBin = std::make_shared<GarbageBin>();
    auto paperBin = std::make_shared<GarbageBin>();

    
    GarbageSorter sorter;
    sorter.setPlasticBin(plasticBin);
    sorter.setOrganicBin(organicBin);
    sorter.setPaperBin(paperBin);

   
    auto plastic = std::make_shared<PlasticGarbage>("Plastic Bottle", 0.2,true ,true);
    auto paper = std::make_shared<PaperGarbage>("Paper Cup", 0.1, true,false);
    auto organic = std::make_shared<OrganicGarbage>("Food Scraps", 0.5, true,3);
    auto metal = std::make_shared<MetalGarbage>("Cola can", 0.3, true,true);

    
    auto nonRecyclable = std::make_shared<PlasticGarbage>("Plastic Bag", 0.3,false, false);

    
    sorter.sort(plastic);
    sorter.sort(paper);
    sorter.sort(organic);
    sorter.sort(nonRecyclable);  

    
    std::cout << "Plastic Bin contains: " << std::endl;
    plasticBin->listGarbage(); 

    std::cout << "\nOrganic Bin contains: " << std::endl;
    organicBin->listGarbage();  

    std::cout << "\nPaper Bin contains: " << std::endl;
    paperBin->listGarbage();  

    std::cout << "\nAttempting to recycle non-recyclable item..." << std::endl;
    
    if (!nonRecyclable->isRecyclable()) {
        std::cout << nonRecyclable->getName() << " is not recyclable!" << std::endl;
    }

   
    plasticBin->emptyBin();
    organicBin->emptyBin();
    paperBin->emptyBin();

    
    std::cout << "\nPlastic Bin after emptying: " << std::endl;
    plasticBin->listGarbage();  

    std::cout << "\nOrganic Bin after emptying: " << std::endl;
    organicBin->listGarbage();  

    std::cout << "\nPaper Bin after emptying: " << std::endl;
    paperBin->listGarbage();  

    return 0;
}
