#include "Vector.hpp"
#include <iostream>

void func(Vector vec) {
    std::cout << "I will do nothing\n";
}

int main(void) {
    Vector v;
    for (int i = 0; i < 5; i++) {
        v.push_back(i);
    }
    
    v.print();
    func(v);

    return 0;
}