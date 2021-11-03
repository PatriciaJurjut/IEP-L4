#include <iostream>
#include "Fruit.hpp"

Fruit::Fruit(const std::string name, const std::string color, double weight) {
    this->name = name;
    this->color = color;
    this->weight = weight;
}

void Fruit::showDetails() {
    std::cout << "Fruit name: " << name << std::endl;
    std::cout << "Color: " << color << std::endl;
    std::cout << "Weight: " << weight << " grams" << std::endl;
    std::cout << "-------------------------------" << std::endl;
}