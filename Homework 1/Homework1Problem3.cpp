#include <iostream>
#include <cmath>

int main() {
    int num;

    std::cout << "Enter an integer number to see if the given number is divisible by 4 or not: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "The program does not accept negative numbers";
    } else if (num <= 100) {
        if (num % 4 == 0) {
            std::cout << "The given number (" << num << ") is divisible by 4";
        } else std::cout << "The given number (" << num << ") is not divisible by 4";

        std::cout << "\nQuotient: " << num / 4;
        std::cout << "\nRemainder: " << num % 4;
    } else std::cout << "The entered number is greater than 100 and square root of the number is " << std::sqrt(num);

    return 0;
}