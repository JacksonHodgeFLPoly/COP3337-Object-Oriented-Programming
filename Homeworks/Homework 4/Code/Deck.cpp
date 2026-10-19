#include <iostream>
#include "Deck.hpp"
#include <random>
#include <algorithm>

Deck::Deck(int seed) {
    shuffle_seed = seed;
    current_card = 0;

    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 4; j++) {
            deck.push_back(Card(i, j));
        }
    }
}

void Deck::shuffle() {
    std::mt19937 eng(shuffle_seed);
    std::uniform_int_distribution<int> dist(0, 51);
    for (int i = 0; i < 52; i++) {
        int randomIndex = dist(eng);
        std::swap(deck[i], deck[randomIndex]);
    }
    current_card = 0;
}

Card Deck::dealCard() {
    return deck[current_card++];
}

bool Deck::moreCards() const {
    return current_card < 52;
}