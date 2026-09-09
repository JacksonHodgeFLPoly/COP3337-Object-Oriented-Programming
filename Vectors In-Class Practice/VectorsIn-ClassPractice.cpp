#include <iostream>
#include <vector>

void print(const std::vector<int>&v);

int main(void) {
    std::vector<int>v;
    std::cout << "V: " << v.size() << std::endl;

    std::vector<int>v2{1,2,3,4};
    std::cout << "V2: " << v2.at(1) << std::endl;

    std::vector<int>v3(10,2);

    std::vector<int>v4(v2);

    print(v);
    print(v2);
    //print(v3);
    //print(v4);
}

void print(const std::vector<int>&v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v.at(i) << " ";
    }
}