#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);
    ~Vector();

    void push_back(int val);
    void print() const;

    bool full() const;


private:
    int* data;      // Array of integers
    int size;       // The current number of elements
    int capacity;    // The max number of elements vector can hold
};

#endif