#include "Vector.hpp"

int main(void) {
    Vector v;
    for (int i = 0; i < 5; i++) {
        v.push_back(i);
    }
    
    v.print();

    return 0;
}