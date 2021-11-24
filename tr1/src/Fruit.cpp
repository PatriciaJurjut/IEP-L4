#include <iostream>
#include "Fruit.hpp"

Fruit::Fruit(const std::string name, const std::string color, double weight) {
    this->name = name;
    this->color = color;
    this->weight = weight;
}

Fruit& Fruit::operator=(const Fruit &source){ 
    std::cout << std::endl << "Overloaded assignment operator has been called ~~" << std::endl;
    this->name = "Another name!!";
    this->color = source.color;
    this->weight = source.weight;
    return *this;
}
void Fruit::showDetails() {
    std::cout << "Fruit name: " << name << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Weight: " << weight << " grams" << std::endl;
    std::cout << "-------------------------------" << std::endl;
}