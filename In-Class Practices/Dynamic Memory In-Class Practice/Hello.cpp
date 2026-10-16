#include <iostream>
#include <string>

class Hello {
public:
    // No-arg constructor
    Hello() : size(0), messages(nullptr) {
        std::cout << "No arg constructor for " << this << std::endl;
    }

    // Constructor with arguments
    Hello(int size) {
        this->size = size;

        // TODO
        // Create a dynamic array of string of 'size' elements
        // Store the address of an array in messages
        // Initialize the messages with random strings
        messages = new std::string[size];
        for (int i = 0; i < size; i++) {
            messages[i] = (i % 2) ? "Welcome!" : "Goodbye!";
        }
    }

    // Deconstructor
    ~Hello() {
        std::cout << "Deconstructor for " << this << std::endl;
        if (messages != nullptr) {
            delete [] messages;         // Deallocate the memory
        }
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
    Hello* hello = new Hello[5];

    // Call bye method for hi
    hi->bye();

    // Deallocate the memory (destroy an object)
    delete hi;
    delete hello;

    return 0;
}