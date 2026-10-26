#ifndef "Box.hpp"


//Template class
template <typename T>
class Box {
public:
    Box(const T& v) : value(v) {

    }

    // Setter
    void setValue(const T& val);

    // Getter
    const T& getValue() const;

private:
    T value;
};

#include "Box.tpp"

#endif