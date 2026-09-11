#include <iostream>
#include <vector>

void print(const std::vector<int>& v);
void print_backwards(const std::vector<int>& v);

int main(void) {
    // Create a vector
    std::vector<int> v; // Empty vector (dynamic array) of integers

    // Create and initialize
    std::vector<int> v2 {1, 2, 3, 10, 5, 6};
    print(v2);

    // Create and provide the size and default value
    std::vector<int> v3(10, 1);
    print(v3);

    // Copy from another vector
    std::vector<int> v4(v2);
    print(v4);

    // Get the size of the vector
    std::cout << "v4 size: " << v4.size() << std::endl;

    // Access first and last elements
    std::cout << "v4 first: " << v4.front() << std::endl;
    std::cout << "v4 last: " << v4.back() << std::endl;

    // Add the elemetns at the end
    v4.push_back(789);
    print(v4);

    // Iterator - object that points to the location of the vector
    // begin() - points to the first element in the vector
    // end() - points to the next after the last element
    std::cout << *v2.begin() << std::endl;
    std::cout << *(v2.begin() + 2) << std::endl;
    std::cout << *v2.end() << std::endl;

    // Insert (location (interator), value)
    v2.insert(v2.begin() + 1, 100);
    print(v2);

    // TODO insert 1000 into the middle

    // Erase (location)
    v2.erase(v2.begin() + 3);
    print(v2);

    return 0;
}

void print(const std::vector<int>& v) {
    for(int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}