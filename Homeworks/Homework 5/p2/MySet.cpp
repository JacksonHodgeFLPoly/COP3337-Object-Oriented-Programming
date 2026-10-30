#include "MySet.hpp"
#include <iostream>

MySet::MySet(unsigned int maxRange) {
    this->range = maxRange;
    this->size = 0;

    this->set = new bool[range + 1];

    for (unsigned int i = 0; i <= range; i++) {
        this->set[i] = false;
    }
}

MySet::MySet(const MySet& other) {
    this->range = other.range;
    this->size = other.size;

    this->set = new bool[range + 1];

    for (unsigned int i = 0; i <= range; i++) {
        this->set[i] = other.set[i];
    }
}

MySet::~MySet() {
    delete[] set;
}

void MySet::insertElement(int k) {
    if (k < 0 || k > range) {
        std::cout << "Warning: cannot insert element " << k << " into MySet, it is out of range (not between 0 and 20 inclusive)." << std::endl;
        return;
    }

    set[k] = true;

    if (!set[k]) {
        set[k] = true;
        size++;
    }
}

void MySet::deleteElement(int m) {
    if (m < 0 || m > range) {
        std::cout << "Warning: cannot delete element " << m << " from MySet, it is out of range (not between 0 and 20 inclusive)." << std::endl;
        return;
    }

    if (set[m]) {
        set[m] = false;
        size--;
    }
}

void MySet::printSet() const {
    bool isEmpty = true;
    for (unsigned int i = 0; i <= range; i++) {
        if (set[i]) {
            isEmpty = false;
            break;
        }
    }

    if (isEmpty) {
        std::cout << "{ --- }" << std::endl;
        return;
    }

    std::cout << "{ ";
    bool first = true;
    for (unsigned int i = 0; i <= range; i++) {
        if (set[i]) {
            if (!first) {
                std::cout << ", ";
            }
            std::cout << i;
            first = false;
        }
    }
    std::cout << " }" << std::endl;
}

bool MySet::isEqualTo(const MySet& other) const {
    if (range != other.range || size != other.size) {
        return false;
    }

    for (unsigned int i = 0; i <= range; i++) {
        if (set[i] != other.set[i]) {
            return false;
        }
    }

    return true;
}