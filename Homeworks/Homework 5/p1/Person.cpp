#include "Person.hpp"
#include <iostream>

Person::Person(const char* name, int age) {
    this->age = age;

    // Find length
    int length = 0;
    while (name[length] != '\0') {
        length++;
    }
    
    // Allocate memory
    this->name = new char[length + 1];

    // Copy
    for (int i = 0; i < length; i++) {
        this->name[i] = name[i];
    }

    this->name[length] = '\0';
}

Person::Person(const Person& other) {
    this->age = other.age;

    // Find length
    int length = 0;
    while (other.name[length] != '\0') {
        length++;
    }
    
    // Allocate memory
    this->name = new char[length + 1];

    // Copy
    for (int i = 0; i < length; i++) {
        this->name[i] = other.name[i];
    }

    this->name[length] = '\0';
}

Person::~Person() {
    delete[] name;
}

void Person::display() const {
    std::cout << "Age: " << age << std::endl;
    std::cout << "Name: " << name << std::endl;
}