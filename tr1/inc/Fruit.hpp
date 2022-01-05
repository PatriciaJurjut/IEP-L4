#pragma once

#include <iostream> 

class Fruit {
    private:
        std::string color;
        std::string name;
        double weight;
    public:
        Fruit(); //default constructor - inheritance
        virtual ~Fruit();
        Fruit(const std::string color, const std::string name, double weight); 
        Fruit(const Fruit &frt); //copy constr
        // Fruit& operator = (const Fruit&) = delete; 
        virtual void showDetails();
        
        Fruit& operator= (const Fruit& frt);
        
        //Fruit& operator=(const Fruit &rhs);
};