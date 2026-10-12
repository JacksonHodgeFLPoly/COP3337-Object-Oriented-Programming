#ifndef MATH_HPP
#define MATH_HPP
#include <string>

class Math {
public:
    static int square(int n);
    static int add(int n1, int n2);
    static int isPrime(int n);
    static int power(int a, int b);
    static int parseInt(const std::string& s);

};

#endif
