#include "Point.hpp"
#include <cstring>
#include <iostream>


Point::Point(int x, int y, const std::string& tag) : x(x), y(y) {
    this->tag = new char[tag.size() + 1];

    strcpy(this->tag, tag.c_str());
}

std::string Point::toString() const {
    return std::string(tag) + " : (" + std::to_string(x) + ", " + std::to_string(y) + ")";
}


bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const {
    //return x != other.x || y != other.y;

    return !(*this == other);
}

int& Point::operator[](int index) {
    return (index == 0) ? x : y;
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}

Point& Point::operator++() {
    x++;
    y++;

    return *this;
}

Point Point::operator++(int) {
    Point old(*this);
    x++;
    y++;

    return old;
}

Point& Point::operator+=(const Point& other) {
    x += other.x;
    y += other.y;

    return *this;
}

std::ostream& operator<<(std::ostream& out, const Point& point) {
    out << "{" << point.tag << ", " << point.x << ", " << point.y << "}";
    return out;
}

// TODO
std::istream& operator<<(std::istream& in, Point& other) {
    // Create the prompt (Enter the point coordinates and tag)

    // Scan the values into the given point object

    return in;
}