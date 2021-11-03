#include <iostream>
#include "Fruit.hpp"

int main() {
    Fruit wm = Fruit("watermelon", "green.. or red?", 1505.20);
    Fruit apple = Fruit("apple", "red", 105.24);
    Fruit orange = Fruit("orange", "definitely not orange", 108.9);
    Fruit banana = Fruit("banana", "yellow", 212.54);

    wm.showDetails(); apple.showDetails(); orange.showDetails(); banana.showDetails();
    return 0;
}