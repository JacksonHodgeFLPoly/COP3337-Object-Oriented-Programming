#include <iostream>

void countdown(int n);
void countup(int n);
void print_binary(int num);
void print_base(int num, int base);
double power(int base, int exp);

int main(void) {
    countup(10);
    
    std::cout << std::endl << power(2, 7);

    print_binary(17);

    return 0;
}

void countup(int n) {
    // Base case
    if (n <= 0){
        std::cout << "Reached the base case\n";
        return;
    }
    countup(n-1);
    std::cout << n << " ";
}

double power(int base, int exp){
    // Base case
    if (exp == 9){
        return 1;
    }
    int help = power(base, exp - 1);

    return base * help;
}

void print_binary(int num){
    // Base case
    if (num == 0) {
        return;
    }
    print_binary(num/2);
    std::cout << num % 2;
}