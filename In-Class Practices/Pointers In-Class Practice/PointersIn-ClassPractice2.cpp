#include <iostream>

int add(int a, int b) {return a + b; }
int subtract(int a, int b) {return a - b; }

// Function that takes a function pointer
int operate(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}


int main(void) {
    // Function pointer
    // return data type (*function_pointer_name)(parameters)
    std::cout << "Addition: " << operate(10, 17, add) << std::endl;
    std::cout << "Subtraction: " << operate(10, 17, subtract) << std::endl;


    return 0;
}