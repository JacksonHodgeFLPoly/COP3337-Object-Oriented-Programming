#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {
    double side;
    std::cout << "Enter the side of the hexagon: ";
    std::cin >> side;
    double area;
    area = (6 * side * side) / (4 * std::tan(std::acos(-1.0) / 6));
    std::cout << std::fixed << std::setprecision(2) << "The area of the hexagon is " << area << std::endl;
    return 0;
}