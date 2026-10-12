#include "Math.hpp"
#include <cmath>
#include <string>

int Math::square(int n) {
    return n * n;
}

int Math::add(int n1, int n2) {
    return n1 + n2;
}

int Math::isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int Math::power(int a, int b) {
    int result = 1;
    
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    
    return result;
}

int Math::parseInt(const std::string& s) {
    return std::stoi(s);
}