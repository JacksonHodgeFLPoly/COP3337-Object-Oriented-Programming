#ifndef CARD_HPP
#define CARD_HPP
#include <iostream>
#include <vector>

class Card {
private:
    int face;
    int suit;
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;

public:
    Card(int face_num, int suit_num);
    int getFace() const;
    int getSuit() const;
    std::string toString()const;    
};

#endif