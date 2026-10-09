#ifndef SPACESHIP_HPP
#define SPACESHIP_HPP

#include <string>

class Spaceship {
private:
    int x;
    int y;
    std::string position;

public:
    Spaceship();
    Spaceship(const std::string& path);
    std::string getPosition() const;
};

#endif