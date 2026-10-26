
#ifndef VECTOR_HPP
#define VECTOR_HPP

template<typename T>
class Vector {
public:
    Vector(int capacity = 10);

    ~Vector();

    // Copy constructor
    Vector(const Vector<T>& other);

    void push_back(const T& val);

    bool empty() const; 

    void print() const;

    void pop_back();            // Delete the last element from the vector

    T& at(int index) const;    // Returns the value at the given index

    int getSize() const;
    
    int getCapacity() const;
    
    void clear();
    
    void push_front(const T& value);
    
    void insert(int pos, const T& value);

    /*
        if new_size > size - fill in the vector with value elements until size = r
        if new_size < size - remove the extra elements from the end
        if new_size > capacity - allocate the memory
    */

    void resize(int new_size, const T& value);

private:
    void allocateMemory(int new_capacity);      // Allocate a new array of a given capacity
    bool full() const;
    T* data;          // array of int elements
    int size;           // the number of elements in the array
    int capacity;       // the max number of elements array can hold
};

#include "Vector.tpp"

#endif
