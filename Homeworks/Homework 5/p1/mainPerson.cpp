#include "Person.hpp"
#include <iostream>

int main(void) {
    Person* pPer = new Person("Clementine", 21);
    Person* pPer2 = new Person(*pPer);
    delete pPer;
    pPer2->display();
    delete pPer2;
    
    return 0;
}