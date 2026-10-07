// .hpp header file. Keeps the description of the class. No implementation.
// Inclusion guard
#ifndef CAR_HPP
#define CAR_HPP

#include <string>

class Car {
public:
    // No arg constructor
    Car();
    Car(const std::string& mk, const std::string& mdl, int y, double car_mpg);

    // printInfo method
    void printInfo() const;

    // Getters
    std::string getMake() const;
    std::string getModel() const;
    int         getYear() const;
    double      getMPG() const;

    // Setters
    void        setMake(const std::string& mk);
    void        setModel(const std::string& md);
    void        setYear(int y);
    void        setMPG(double new_mpg);

private:
    std::string make;
    std::string model;
    int year;
    double mpg;
};

#endif
