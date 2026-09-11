#include <iostream>
#include <string>

int main(void) {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    for (int i = 1; i < text.length(); i+=2) { 
        std::cout << text[i];
    }
    return 0;
}