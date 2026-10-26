#include <iostream>
#include <string>

// Template function
template <typename T>
T smallest(const T& v1, const T& v2, const T& v3) {
    if (v1 <= v2 && v1 <= v3) {
        return v1;
    }
    else if (v2 <= v3) {
        return v2;
    }
    else {
        return v3;
    }
}

template <typename T1, typename T2>
void displayPair (const T1& first, const T2& second) {
    std::cout << "(" << first << ": " << second << ")\n";
}

template <typename T>
T findMax(std::vector<T>& v) {
    if (v.empty()) {
        // Throw an exception
        throw std::string("findMax: empty vector");
    }
    T max = v.at(0);
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int main(void) {
    int i1 = -1, i2 = 10, i3 = 45;
    // Find the smallest value
    std::cout << "Smallest int: " << smallest(i1, i2, i3) << std::endl;

    double d1 = -1.6, d2 = -10.90, d3 = 45.1;
    // Find the smallest value
    std::cout << "Smallest double: " << smallest(d1, d2, d3) << std::endl;

    std::string s1 = "hi", s2 = "bye", s3 = "sigh";
    // Find the smallest value
    std::cout << "Smallest string: " << smallest(s1, s2, s3) << std::endl;

    // Test displayPair
    displayPair(i1, s3);
    displayPair(d1, d3);

    // Test findMax
    std::vector<int> v1 {1, 303, -1, 8291};
    std::cout << "findMax int: " << findMax(v1) << std::endl;

    std::vector<double> v2;
    std::cout << "findMax double: " << findMax(v2) << std::endl;

    return 0;
}