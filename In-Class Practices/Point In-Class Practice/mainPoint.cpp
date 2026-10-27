#include "Point.hpp"
#include <iostream>

int main(void) {
    Point p1(4, 6);
    Point p2(4, 6);
    Point p3 (80, 69);

    std::cout << p2.toString() << std::endl;

    if (p1 != p2) {
        std::cout << (char) p3[0];
    }
    else {
        std::cout << (char) p3[1];
    }

    p1[0] = 30 + 26;
    std::cout << (char) p1[0];

    p1[1] = p1[1] + 4;
    p2[1] = p2[1] + 3;
    Point p4 = p1 * p2;
    std::cout << (char) (p4[1] - 15) << "H6";

    return 0;
}