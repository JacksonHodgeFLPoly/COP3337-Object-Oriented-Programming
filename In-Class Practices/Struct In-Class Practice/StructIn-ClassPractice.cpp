#include <iostream>
#include <string>
#include <iomanip>

// Define our own type of data (structure)
struct Lecture {
    std::string title;
    int duration;

    // Define the print method
    void print() {
        std::cout << std::setw(15) << std::left << "Title:";
        std::cout << title << std::endl;
        std::cout << std::setw(15) << std::left << "Duration:";
        std::cout << duration / 60 << " minutes and ";
        std::cout << duration % 60 << " seconds" << std::endl;
        std::cout << std::setw(15) << std::left << "Long lecture:";
        std::cout << (isLong() ? "YES" : "NO") << std::endl;
    }

    bool isLong() {
        return (duration > 60 * 60);
    }

    void extend(int minutes, int seconds) {
        duration += minutes * 60 + seconds;
    }
};

void printLecture(const Lecture& lec);

int main(void) {
    int a; // Creates a variable (object) of type int named a

    Lecture oop; // Creates a varible (object) of type Lecture named oop

    // Initialize the properties of oop varible
    oop.title = "Classes and Objects";
    oop.duration = 50 * 60;

    std::cout << oop.title << " " << oop.duration << std::endl;

    // Create and initialize
    Lecture math {"Graphs", 75 * 60};

    // Pass the Lecture object to the function
    // printLecture(math);
    math.print();

    Lecture english {"Alphabet", 35 * 60};
    english.print();
    // Extend english lecture by 30 minutes 10 seconds
    english.extend(30, 10);
    english.print();

    return 0;
}

void printLecture(const Lecture& lec) {
    std::cout << std::setw(15) << std::left << "Title:";
    std::cout << lec.title << std::endl;
    std::cout << std::setw(15) << std::left << "Duration:";
    std::cout << lec.duration / 60 << " minutes and ";
    std::cout << lec.duration % 60 << " seconds" << std::endl;
}