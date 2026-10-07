#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student {
public:
    Student(const std::string& n, double st_gpa);

    // Deconstructor
    ~Student();
    
    bool canGraduate() const;
    void printStudentInfo() const;

    static double getRequiredGPA();
    static double setRequiredGPA(double new_gpa);
    static double getAverageGPA();
    static int getTotalStudents();

private:
    std::string name;
    double gpa;
    std::string id;

    static double required_gpa;     // Graduation requirement
    static int total_students;
    static int next_id;
    static double total_gpa;
};

#endif