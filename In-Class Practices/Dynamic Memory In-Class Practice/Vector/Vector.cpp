#include "Vector.hpp"
#include <iostream>

Vector::Vector(int cap) : capacity(cap), size(0) {
    std::cout << "Constructor " << this << std::endl;
    // Create a dynamic array
    data = new int[capacity];
}

Vector::Vector(const Vector& other) : capacity(other.capacity), size(other.size) {
    std::cout << "Copy Constructor " << this << std::endl;
    data = new int[capacity];
    // Copy the elements
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

Vector::~Vector() {
    std::cout << "Deconstructor " << this << std::endl;
    if (data) {
        delete [] data;
    }
}

void Vector::print() const {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << " ]\n";

}

void Vector::push_back(int val) {
    if (full()) {
        allocateMemory(capacity * 2);
    }
    data[size] = val;
    size++;
}

bool Vector::full() const {
    return size == capacity;
}

void Vector::allocateMemory(int new_capacity) {
    capacity = new_capacity;
    // Save the old data address
    int* old_data = data;

    // Create a new array
    data = new int[capacity];

    // Copy the data
    for (int i = 0; i < size; i++) {
        data[i] = old_data[i];
    }

    // Deallocate the old memory
    delete [] old_data;
}