#ifndef POINT_HPP
#define POINT_HPP
#include<iostream>
#include<string>

class Point {
public:
    Point(int x, int y);
    std::string toString() const;

    // Logical Operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // Subscript operator
    int& operator[](int index);

    // Arithmitic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;

private:
    int x, y;
};

#endif