#include "Vector.hpp"
#include <iostream>

void func(Vector vec) {
    std::cout << "I will do nothing\n";
}

int main(void) {
    Vector v;
    std::cout << v.empty() << std::endl;
    for (int i = 0; i < 50; i++) {
        v.push_back(i);
    }
    
    std::cout << v.at(2) << std::endl;
    v.print();
    func(v);

    return 0;
}