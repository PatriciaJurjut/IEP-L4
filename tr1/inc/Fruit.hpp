#pragma once

#include <iostream> 

class Fruit {
    private:
        std::string color;
        std::string name;
        double weight;
    public:
        Fruit(const std::string color, const std::string name, double weight); //constructor
        Fruit(const Fruit &frt); //copy constr
        void showDetails();
    
};