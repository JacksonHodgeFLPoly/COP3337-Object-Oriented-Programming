#include <iostream>

int main(void) {
    // Casting from one type into another
    // static_cast<new_type>(expression)

    int number = 21;
    double pi = 3.1415;

    // Void pointer
    void* ptr = nullptr;

    // Assign with the address of int
    ptr = &number;

    std::cout << "Int value " << *static_cast<int*>(ptr) << std::endl;

    ptr = &pi;
    std::cout << "Double value " << *static_cast<double*>(ptr) << std::endl;

    return 0;
}