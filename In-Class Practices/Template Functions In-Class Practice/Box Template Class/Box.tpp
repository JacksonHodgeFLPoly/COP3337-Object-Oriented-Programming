#include <iostream>
#include <string>
#include "Box.hpp"

template <typename T>
const T& Box<T>::getValue() const {
        return value;
}

template<typename T>
void Box<T>::setValue(const T& val) {
    value = val;
}