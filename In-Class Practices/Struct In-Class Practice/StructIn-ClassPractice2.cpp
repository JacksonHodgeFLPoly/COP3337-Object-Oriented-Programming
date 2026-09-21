/*
    TODO
    1. Print the info about route transport
    2. Create set method for the transport (Car, Train, Plane)
    3. Update constructor
    4. Create a train route from Chicago to Miami and print info about it
*/

#include <iostream>
#include <string>
#include <cstdlib> // rand
#include <ctime> // time

// Define Route structure
class Route {
public:
    // Constructor is called when the object is created
    // Constructor has no return type (not even void)
    // Constructor is named the same as the structure (class)
    Route(const std::string& src, const std::string& dest, const std::string& tr = "Car") {
        source = src;
        destination = dest;
        updateLength();
    }

    void print() {
        // source = "abc"; // Cannot do it in const method
        std::cout << "{ " << source << " -> " << destination << ", " << length << " miles }\n";
    }

    // Setters (mutator function)
    void setDestination(const std::string& dest) {
        destination = dest;
        updateLength();
    }

    void setSource(const std::string& src) {
        source = src;
        updateLength();
    }

    // Getters
    std::string getSource() const { // constant method cannot modify class atributes
        return source;
    }
    std::string getDestination() const {
        return destination;
    }
    int getLength() const {
        return length;
    }

private:    
    void updateLength() {
        // Imagine this is a complex method to calculate the length of the Route
        length = rand() % 1000 + 100;
    }

    std::string source;
    std::string destination;
    std::string transport;
    int length;
};

int main(void) {
    srand(time(0));
    // Create an object of the Routh data type
    Route trip("Lakeland", "Orlando");
    //trip.source = "Lakeland";
    //trip.destination = "Orlando";
    //trip.length = 45;

    trip.print();

    Route summer_trip("Lakeland", "Paris", "Plane");
    summer_trip.print();
    summer_trip.setDestination("Rome");
    summer_trip.print();

    std::cout << "Source: " << summer_trip.getSource() << std::endl;

    return 0;
}