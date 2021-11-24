#include <iostream>
#include "Fruit.hpp"

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
    
    
    return 0;
}