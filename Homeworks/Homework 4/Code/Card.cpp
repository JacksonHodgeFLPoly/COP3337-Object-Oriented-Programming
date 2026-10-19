#include "Card.hpp"

std::vector<std::string> Card::faceNames = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
std::vector<std::string> Card::suitNames = {"♥", "♦", "♣", "♠"};

Card::Card(int face_num, int suit_num) {
    face = face_num;
    suit = suit_num;
}

int Card::getFace() const {
    return face;
}

int Card::getSuit() const {
    return suit;
}

std::string Card::toString() const {
    return faceNames[face] + suitNames[suit];
}