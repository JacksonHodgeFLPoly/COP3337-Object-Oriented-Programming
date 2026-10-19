#ifndef CAR_HPP
#define CAR_HPP
#include <string>

class Car {
public:
    //constructor
    Car();
    Car(std::string make_, std::string model_, int year_, double MPG_, double fuel_capacity_);
    
    //print method
    void printInfo() const;

    void setMake(const std::string& make);
    void setModel(const std::string& model);
    void setYear(int year);
    void setMPG(double MPG);

    void refuel(double gallons);
    void refuel (double distance);

    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;

    double getFuelLevel() const;
    double getFuelCapacity() const;
    double getFuelLevel() const;

private:
    std::string make;
    std::string model;
    int year;
    double mpg;

    double milage;
    double fuel_capacity;
    double fuel_level;
};

#endif
