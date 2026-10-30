#include "MySet.hpp"
#include <iostream>

int main(void) {
    MySet set1(20);

    set1.insertElement(13);
    set1.insertElement(7);
    set1.insertElement(20);
    set1.insertElement(21);

    set1.printSet();

    set1.deleteElement(22);
    set1.deleteElement(13);

    set1.printSet();

    MySet set2(100);

    set2.printSet();

    MySet set3(set1);

    std::cout << "set3.isEqualTo(set) = " << set3.isEqualTo(set1);

    return 0;
}
