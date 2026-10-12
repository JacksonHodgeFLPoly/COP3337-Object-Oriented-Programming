#include <iostream>
#include <string>

class Hello {
public:
    // No-arg constructor
    Hello() {
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // Constructor with arguments
    Hello(int size) {
        this->size = size;

        // TODO
        // Create a dynamic array of string of 'size' elements
        // Store the address of an array in messages
        // Initialize the messages with random strings
    }

    // Deconstructor
    ~Hello() {
        std::cout << "Deconstructor for " << this << std::endl;
    }

    void bye() const {
        std::cout << "Bye!!!\n\n";
    }
private:
    int size;
    std::string* messages;

};

int main(void) {
    // Create an object dynamically
    Hello* hi = new Hello;

    // Call bye method for hi
    hi->bye();

    // Deallocate the memory (destroy an object)
    delete hi;

    return 0;
}