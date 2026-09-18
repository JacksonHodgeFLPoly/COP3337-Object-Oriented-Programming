#include <iostream>
#include <string>

// Define Route structure
class Route {
public:
    // Constructor is called when the object is created
    // Constructor has no return type (not even void)
    // Constructor is named the same as the structure (class)
    Route(const std::string& src, const std::string& dest, int len) {
        source = src;
        destination = dest;
        length = len;
    }

    void print() {
        std::cout << "{ " << source << " -> " << destination << ", " << length << " miles }\n";
    }

    // Setters (mutator function)
    void setDestination(const std::string& dest) {
        destination = dest;
    }

private:
    std::string source;
    std::string destination;
    int length;
};

int main(void) {
    // Create an object of the Routh data type
    Route trip("Lakeland", "Orlando", 45);
    //trip.source = "Lakeland";
    //trip.destination = "Orlando";
    //trip.length = 45;

    trip.print();

    Route summer_trip("Lakeland", "Paris", 6000);
    //summer_trip.source = "Lakeland";
    summer_trip.setDestination("Rome");

    summer_trip.print();

    return 0;
}