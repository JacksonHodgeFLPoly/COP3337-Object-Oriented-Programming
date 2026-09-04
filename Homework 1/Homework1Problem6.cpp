#include <iostream>

int main(void){
    int num;
    std::cout << "Enter an integer between 0 and 1000000: ";
    std::cin >> num;
    int sum = 0;
    while (num > 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    std::cout << "The sum of the digits is " << sum << ".\n";
    num = sum;
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum = sum + (num % 10);
            num = num / 10;
        }
        num = sum;
    }
    std::cout << "The repeated sum of digits is " << num << ".";
    return 0;
}