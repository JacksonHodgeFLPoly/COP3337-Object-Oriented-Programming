#include "Vector.hpp"
#include <iostream>
#include <climits> 


Vector::Vector(int capacity) : size(0), capacity(capacity) {
    data = new int[capacity];
    std::cout << "constructor " << this << std::endl;
}

Vector::Vector(const Vector& other) : size(other.size), capacity(other.capacity) {
    std::cout << "copy constructor " << this << std::endl;
    data = new int[capacity];

    // Copy the elements from the vector other
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}   


Vector::~Vector() {
    std::cout << "destructor " << this << std::endl;
    if (data) {
        delete [] data;
    }
}

void Vector::print() const {
    std::cout << "[ ";
    // Print the elements
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << ' ';
    }
    std::cout << "]\n";
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

bool Vector::empty() const {
    return size == 0;
}

void Vector::allocateMemory(int new_capacity) {
    capacity = new_capacity;
    // Save the address of an old array
    int* old_data = data;

    // Allocate the new memory
    data = new int[capacity];
    
    // Copy the elements
    for (int i = 0; i < size; i++) {
        data[i] = old_data[i];
    }

    // Deallocate the old memory
    delete [] old_data;

}


void Vector::pop_back() {
    if (empty()) {
        return;
    }
    --size;
}


int Vector::at(int index) const {
    if (index < 0) {
        index = size + index;
    }

    if (index < 0 || index >= size) {
        std::cout << "at: out of boundaries\n";
        return INT_MIN;
    }
    return data[index];
}

int Vector::getSize() const {
    return size;
}

int Vector::getCapacity() const {
    return capacity;
}

void Vector::clear() {
    delete[] data;
    data = new int[10];
    capacity = 10;
    size = 0;
}

void Vector::push_front(int value) {
    insert(0, value);
}

void Vector::insert(int pos, int value) {
    if (pos < 0) {
        pos = size + (pos + 1);
    }

    if (full()) {
        allocateMemory(capacity * 2);
    }

    for (int i = size; i > pos; i--) {
        data[i] = data[i - 1];
    }

    data[pos] = value;
    size++;
}