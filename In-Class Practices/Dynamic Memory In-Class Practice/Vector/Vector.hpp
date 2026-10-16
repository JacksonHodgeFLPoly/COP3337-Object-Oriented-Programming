#ifndef VECTOR_HPP
#define VECTOR_HPP

class Vector {
public:
    Vector(int capacity = 10);
    Vector(const Vector& other);

    ~Vector();

    void push_back(int val);
    void print() const;

    void pop_back();
    bool empty() const;
    int at(int index) const;

private:
    bool full() const;
    void allocateMemory(int new_capacity);

    int* data;      // Array of integers
    int size;       // The current number of elements
    int capacity;    // The max number of elements vector can hold
};

#endif