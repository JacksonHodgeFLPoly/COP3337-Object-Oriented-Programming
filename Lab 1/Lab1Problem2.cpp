#include <iostream>
#include <string>

int main(void) {
    // Get first and last name
    std::string firstName, lastName;
    std::cout << "Enter your first name: ";
    getline(std::cin, firstName);
    std::cout << "Enter your last name: ";
    getline(std::cin, lastName);

    // Display first and last name
    std::cout << "-----------------" << "\n";
    std::cout << "First name: " << firstName << "\n";
    std::cout << "Last name: " << lastName << "\n";

    // Initialize varibales for seconds spent studying
    int weeks = 16;
    int lecturesPerWeek = 3;
    int minutesPerLecture = 50;
    double studyPerWeek = 4.5;
    int canceledLectures = 5;

    // Calculate seconds spent studying
    int totalLectures = (weeks * lecturesPerWeek) - canceledLectures;
    int totalLectureMinutes = totalLectureMinutes * minutesPerLecture;
    int studyMinutes = weeks * (studyPerWeek * 60);
    int totalSeconds = (totalLectureMinutes + studyMinutes) * 60;

    // Display seconds spent studying
    std::cout << "I am supposed to spend " << totalSeconds << " seconds studying C++ programming.";

    return 0;
}