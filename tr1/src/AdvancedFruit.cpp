#include <iostream>
#include "AdvancedFruit.hpp"
#include "Fruit.hpp"

AdvancedFruit::~AdvancedFruit() {}

AdvancedFruit::AdvancedFruit(const AdvancedFruit &frt) {
    std::cout << "Copy constructor called!" << std::endl;
}

AdvancedFruit& AdvancedFruit::operator=(const AdvancedFruit &source){ 
    std::cout << std::endl << "Overloaded assignment operator has been called ~~" << std::endl;

    //Item 11: check for self
    if(this == &source) {
        std::cout << std::endl << "ASSIGNMENT TO SELF!" << std::endl;
        return *this;
    }

    Fruit::operator=(source); //assigning base class parts
    this->numberOfSeeds = source.numberOfSeeds;
    return *this;
}

void AdvancedFruit::showDetails() {
    Fruit::showDetails();
    std::cout << "Number of seeds: " << this->numberOfSeeds << std::endl;
}