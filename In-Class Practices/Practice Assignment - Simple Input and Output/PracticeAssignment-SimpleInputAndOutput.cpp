#include <iostream>

// Namespace for student ID
namespace student {
    int id;
}
// Namespace for course ID
namespace course {
    int id;
}

// Main function for input and output
int main(void) {
    std::cout << "Enter student ID: " << std::endl;
    std::cin >> student::id;

    std::cout << "Enter course ID: " << std::endl;
    std::cin >> course::id;

    std::cout << "\n---Registration Information---" << std::endl;
    std::cout << "Student ID: " << student::id << std::endl;
    std::cout << "Course ID: " << course::id << std::endl;

    return 0;
}