#include <iostream>
#include "Fruit.hpp"
#include "AdvancedFruit.hpp"
#include "FruitFactory.hpp"
#include <memory>

int main() {
    
    auto frt = std::make_unique<Fruit>("Fruity", "fruitful", 1212);
    frt->showDetails();

    // auto frt2 = std::make_unique<Fruit>(frt);
    // frt2->showDetails(); // eroare - nu se permite apelarea de copy constructor

    auto frt3 = std::make_unique<Fruit>("Another one", "bright green", 1010);
    frt3->showDetails();
    //frt->showDetails(); -> will not be null, unlike auto_ptr


    return 0;
}