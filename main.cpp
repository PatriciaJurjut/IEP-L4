#include <iostream>
#include "Fruit.hpp"
#include "AdvancedFruit.hpp"

int main() {
    
    Fruit wm = Fruit("watermelon", "green.. or red?", 1505.20);
    Fruit apple = Fruit("apple", "red", 105.24);
    Fruit orange = Fruit("orange", "definitely not orange", 108.9);
    Fruit banana = Fruit("banana", "yellow", 212.54);

    wm.showDetails(); apple.showDetails(); orange.showDetails(); banana.showDetails();
    //item 10...
    std::cout << std::endl << std::endl << "Item 10:" << std::endl;
    wm.showDetails(); 
    
    Fruit unidetifiedFruit = Fruit("some name", "some color?", 111);
    unidetifiedFruit = wm = apple;
    unidetifiedFruit.showDetails();
    wm.showDetails(); 

    //item 11...
    std::cout << std::endl << "Item 11: " << std::endl;
    wm = wm;
    
    //item 12...
    AdvancedFruit advancedOrange = AdvancedFruit("Advanced orange", "advanced orange", 
                                                 111, 10);
    std::cout << std::endl << "Item 12: " << std::endl;
    advancedOrange.AdvancedFruit::showDetails();

    AdvancedFruit advancedWatermelon = AdvancedFruit("Advanced watermelon", "advanced green",
                                                     1059.6, 400);

    AdvancedFruit anotherAdvancedWatermelon = AdvancedFruit(advancedWatermelon);
    anotherAdvancedWatermelon = advancedWatermelon = advancedOrange;
    anotherAdvancedWatermelon.showDetails();

    return 0;
}