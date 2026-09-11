#include <iostream>

int main(void) {
    int num;
    std::cout << "Enter the number of lines (from 1 to 15): ";
    std::cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int a = num; a > i; a--) {
            if (a >= 10) {
                std::cout << "    ";
            } else std::cout << "   ";
        }
        for (int b = i; b >= 1; b--) {
            std::cout << b;
            if (b != 1) {
                std::cout << "  ";
            }
        }
        for (int b = 2; b <= i; b++){
            std::cout << "  " << b;
        }
        std::cout << std::endl;
    }
    return 0;
}