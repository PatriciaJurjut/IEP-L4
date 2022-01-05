#pragma once

#include <iostream>
#include "Fruit.hpp"

class AdvancedFruit: public Fruit {
    private:
        int numberOfSeeds;
    public:
        AdvancedFruit(const std::string color, const std::string name, double weight,
                      int numberOfSeeds) : Fruit(color, name, weight), numberOfSeeds(numberOfSeeds){}; 
        virtual ~AdvancedFruit();
        //Copy constructor
        //invoke constructor from the base class
        AdvancedFruit(const AdvancedFruit &frt) : Fruit(frt), numberOfSeeds(frt.numberOfSeeds){}; 
        AdvancedFruit& operator= (const AdvancedFruit& frt);
        void showDetails() override;
        //Fruit& operator=(const Fruit &rhs);
};