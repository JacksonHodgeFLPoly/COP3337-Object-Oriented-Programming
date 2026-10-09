#include <string>
#include <iostream>

using std::string;

class Attendance {
public:
    bool checkAttendance() {
        return !isAbsent() && !isLate();
    }

    Attendance(const string& atd) : attendance(atd) {}
    
private:
    string attendance;
    bool isAbsent() {
        int absentCount = 0;
        for (char c : attendance) {
            if (c == 'A') {
                absentCount++;
            }
        }
        return absentCount >= 2;
    }
    bool isLate() {
        return attendance.find("LLL") != string::npos;
    }
};

int main(void) {
    Attendance atd1("PPALLP");
    Attendance atd2("PPALLL");

    (atd1.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";
    std::cout << std::endl;
    (atd2.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";
    std::cout << std::endl;

    return 0;
}
