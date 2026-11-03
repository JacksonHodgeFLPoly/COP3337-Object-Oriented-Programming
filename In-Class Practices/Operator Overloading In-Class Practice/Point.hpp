#ifndef POINT_HPP
#define POINT_HPP

#include <string>
class Point {
public:
    Point(int x = 0, int y = 0, const std::string& tag = "");
    std::string toString() const;

    // TODO
    // ~Point();
    // Point(const Point& other);
    // Point& operator=(const Point& other);

    // Logical operators
    bool operator==(const Point& other) const;
    bool operator!=(const Point& other) const;

    // Subscript operator
    int& operator[](int index);

    // Arithmetic operators
    Point operator+(const Point& other) const;
    Point operator*(const Point& other) const;

    // Arithmetic assignment operators
    Point& operator+=(const Point& other);
    Point& operator*=(const Point& other); // TODO

    // Preincrement operator
    Point& operator++();

    // Postincrement operator
    Point operator++(int);

    // Predecrement opertator
    Point& operator--();    // TODO

    // Postdecrement operator
    Point operator--(int);  // TODO

    // Insertion operator
    friend std::ostream& operator<<(std::ostream& out, const Point& other);
    friend std::istream& operator<<(std::istream& in, Point& other);

private:
    int x, y;
    char* tag;
};

#endif