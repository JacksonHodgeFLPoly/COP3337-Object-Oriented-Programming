#include <iostream>
#include <string>

int main(void) {
    std::string name, animal;

    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter your favorite animal: ";
    getline(std::cin, animal);

    std::string introduction = "Agent " + name;
    introduction += ", also known as The " + animal + ".";

    std::cout << introduction << std::endl;
    std::cout << "Your identity contains " << introduction.size() << "characters.\n";

    return 0;
}