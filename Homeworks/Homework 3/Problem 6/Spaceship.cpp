#include "Spaceship.hpp"
#include <string>

Spaceship::Spaceship() : x(0), y(0), position("{x: 0, y: 0, direction: 'up'}") {}

Spaceship::Spaceship(const std::string& path) : x(0), y(0) {
    int dir = 0;

    for (char c : path) {
        if (c == 'R') {
            dir = (dir + 1) % 4;
        } else if (c == 'L') {
            dir = (dir + 3) % 4;
        } else if (c == 'A') {
            if (dir == 0) {       // up
                y--;
            } else if (dir == 1) { // right
                x++;
            } else if (dir == 2) { // down
                y++;
            } else if (dir == 3) { // left
                x--;
            }
        }
    }

    std::string dirStr;
    if (dir == 0) dirStr = "up";
    else if (dir == 1) dirStr = "right";
    else if (dir == 2) dirStr = "down";
    else if (dir == 3) dirStr = "left";

    position = "{x: " + std::to_string(x) + ", y: " + std::to_string(y) + ", direction: '" + dirStr + "'}";
}

std::string Spaceship::getPosition() const {
    return position;
}