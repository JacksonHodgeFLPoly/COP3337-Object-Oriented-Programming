#include "Vector.hpp"
#include <iostream>
#include <climits> 

template <typename T>
Vector<T>::Vector(int capacity) : size(0), capacity(capacity) {
    data = new T[capacity];
    std::cout << "constructor " << this << std::endl;
}

// Vector::Vector(const Vector& other) : size(other.size), capacity(other.capacity) {
//     std::cout << "copy constructor " << this << std::endl;
//     data = new int[capacity];

//     // Copy the elements from the vector other
//     for (int i = 0; i < size; i++) {
//         data[i] = other.data[i];
//     }
// }   

template <typename T>
Vector<T>::~Vector() {
    std::cout << "destructor " << this << std::endl;
    if (data) {
        delete [] data;
    }
}

template <typename T>
void Vector<T>::print() const {
    std::cout << "[ ";
    // Print the elements
    for (int i = 0; i < size; i++) {
        std::cout << data[i] << ' ';
    }
    std::cout << "]\n";
}

template <typename T>
void Vector<T>::push_back(const T& val) {
    if (full()) {
        allocateMemory(capacity * 2);
    }
    
    data[size] = val;
    size++;

}

template <typename T>
bool Vector<T>::full() const {
    return size == capacity;
}

template <typename T>
bool Vector<T>::empty() const {
    return size == 0;
}

template <typename T>
void Vector<T>::allocateMemory(int new_capacity) {
    capacity = new_capacity;
    // Save the address of an old array
    T* old_data = data;

    // Allocate the new memory
    data = new T[capacity];
    
    // Copy the elements
    for (int i = 0; i < size; i++) {
        data[i] = old_data[i];
    }

    // Deallocate the old memory
    delete [] old_data;

}

template <typename T>
void Vector<T>::pop_back() {
    if (empty()) {
        return;
    }
    --size;
}

template <typename T>
T& Vector<T>::at(int index) const {
    if (index < 0) {
        index = size + index;
    }

    if (index < 0 || index >= size) {
        std::cout << "at: out of boundaries\n";
        return INT_MIN;
    }
    return data[index];
}

template <typename T>
int Vector<T>::getSize() const {
    return size;
}

template <typename T>
int Vector<T>::getCapacity() const {
    return capacity;
}

template <typename T>
void Vector<T>::clear() {
    delete[] data;
    data = new int[10];
    capacity = 10;
    size = 0;
}

template <typename T>
void Vector<T>::push_front(const T& value) {
    insert(0, value);
}

template <typename T>
void Vector<T>::insert(int pos, const T& value) {
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

template <typename T>
void Vector<T>::resize(int new_size, const T& value) {
    if (new_size > size) {
        
    }
    if (new_size < size) {
        
    }
    if (new_size > capacity) {
        
    }
}