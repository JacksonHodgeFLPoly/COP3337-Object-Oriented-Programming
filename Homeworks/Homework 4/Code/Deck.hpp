#ifndef DECK_HPP
#define DECK_HPP
#include <iostream>
#include <vector>
#include "Card.hpp"

class Deck {
private:
    std::vector<Card> deck;
    int current_card;
    int shuffle_seed;

public:
    Deck(int seed);
    void shuffle();
    Card dealCard();
    bool moreCards() const;
};

#endif