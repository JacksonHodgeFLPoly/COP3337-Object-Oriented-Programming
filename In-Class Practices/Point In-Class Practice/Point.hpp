#ifndef POINT_HPP
#define POINT_HPP

#include <string>
class Point {
public:
    Point(int x, int y);
    std::string toString() const;

    // Logical operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // Subscript operator
    int& operator[](int index);

    // Arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;


private:
    int x, y;
};

#endif