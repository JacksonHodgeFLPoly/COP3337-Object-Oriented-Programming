#include "Point.hpp"


Point::Point(int x, int y) : x(x), y(y) {

}

std::string Point::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}


bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

bool Point::operator!=(const Point& other) const {
    //return x != other.x || y != other.y;

    return !(*this == other);
}

int Point::operator[](int index) {
    return (index == 0) ? x : y;
}

Point Point::operator+(const Point& other) const {
    return Point(x + other.x, y + other.y);
}