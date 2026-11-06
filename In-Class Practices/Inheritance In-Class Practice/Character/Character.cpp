#include <iostream>
#include <string>

class Character {
public:
    std::string name;
    int health;
    
    void printInfo() const;
private:
};

class Warrior : public Character {
public:
    int armor;
    
    void printInfo() const;
private:
};



int main(void) {

    // Create a Character object dynamically
    Character* character = new Character();
    // Set characters name and health
    character->name = "Gilbert";
    character->health = 1;

    character->printInfo();

    delete character;

    // Create a Warrior
    Warrior warrior;
    warrior.name = "John (aka The Warrior)";
    warrior.health = 100;
    warrior.armor = 50;

    warrior.printInfo();

    return 0;
}


void Character::printInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
}

void Warrior::printInfo() const {
    // Call the base class method
    Character::printInfo();
    std::cout << "Armor: " << armor << std::endl;
}