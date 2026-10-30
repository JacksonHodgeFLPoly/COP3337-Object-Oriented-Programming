#include "Circle2D.hpp"
#include <iostream>
#include <cmath>

int Circle2D::numberOfCircles = 0;

Circle2D::Circle2D(double x, double y, double radius) {
    this->x = x;
    this->y = y;
    this->radius = radius;
    numberOfCircles++;
}

Circle2D::Circle2D(const Circle2D& circle) {
    this->x = circle.x;
    this->y = circle.y;
    this->radius = circle.radius;
    numberOfCircles++;
}

Circle2D::~Circle2D(){
    numberOfCircles--;
}

double Circle2D::getX() const {
    return x;
}

double Circle2D::getY() const {
    return y;
}

double Circle2D::getRadius() const {
    return radius;
}

int Circle2D::getNumberOfCircles() {
    return numberOfCircles;
}

bool Circle2D::overlaps(const Circle2D& circle) const {
    double distance = std::sqrt(std::pow(x - circle.x, 2) + std::pow(y - circle.y, 2));
    return (distance < (radius + circle.radius));
}