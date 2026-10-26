#include <iostream>
#include <string>
#include "Box.hpp"

int main(void) {
    // Create an object of template Box class
    Box<double> box(2.5);
    Box<std::string> box_game("random game");

    std::cout << box.getValue() << std::endl;
    std::cout << box_game.getValue() << std::endl;

    return 0;
}