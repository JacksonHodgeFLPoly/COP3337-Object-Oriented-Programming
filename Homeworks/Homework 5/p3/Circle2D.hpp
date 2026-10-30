#ifndef CIRCLE2D_HPP
#define CIRCLE2D_HPP

class Circle2D {
public:
    Circle2D(double x = 0.0, double y = 0.0, double radius = 1.0);
    Circle2D(const Circle2D& circle);
    ~Circle2D();

    double getX() const;
    double getY() const;
    double getRadius() const;

    static int getNumberOfCircles();

    bool overlaps(const Circle2D& circle) const;

private:
    double x;
    double y;
    double radius;
    static int numberOfCircles;

};

#endif