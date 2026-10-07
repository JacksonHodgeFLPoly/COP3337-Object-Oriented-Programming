#include "Student.hpp"
#include <iostream>

int main(void) {
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;

    Student bob("Bob", 3.1);
    Student alice("Alice", 2.1);

    bob.printStudentInfo();
    alice.printStudentInfo();

    for (int i = 0; i < 10; i++) {
        Student test("Test", 1.0);
        // Working with test student...
    }

    std::cout << "Required GPA: " << Student::getRequiredGPA() << std::endl;
    std::cout << "Total students: " << Student::getTotalStudents() << std::endl;
    std::cout << "Average GPA: " << Student::getAverageGPA() << std::endl;

    return 0;
}