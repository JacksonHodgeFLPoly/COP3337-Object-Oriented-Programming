#include <iostream>

int evenCount(unsigned int value) {
    if (value == 0) {
        return 0; 
    }
    
    int lastDigit = value % 10;
    if (lastDigit % 2 == 0) {
        return 1 + evenCount(value / 10);
    } else {
        return evenCount(value / 10);
    }
}

int main() {
    unsigned int number;
    std::cout << "Enter the number ";
    std::cin >> number;
    
    if (number == 0) {
        std::cout << "The number of even digits is 1" << std::endl;
    } else {
        std::cout << "The number of even digits is " << evenCount(number) << std::endl;
    }
    
    return 0;
}