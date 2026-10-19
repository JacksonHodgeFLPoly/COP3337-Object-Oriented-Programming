#include "Hand.hpp"
#include <iostream>

void Hand::takeCards(Deck& deck) {
    hand.clear();
    for (int i = 0; i < 5; i++) {
        if (deck.moreCards()) {
            hand.push_back(deck.dealCard());
        }
    }
}

bool Hand::isFullHand() const {
    return hand.size() == 5;
}

void Hand::print() const {
    for (size_t i = 0; i < hand.size(); i++) {
        std::cout << hand[i].toString() << " ";
    }
    std::cout << std::endl;
}

bool Hand::hasPair() const {
    int counts[13] = {0};
    for (const auto& card : hand) {
        counts[card.getFace()]++;
    }
    int pairCount = 0;
    for (int i = 0; i < 13; i++) {
        if (counts[i] == 2) {
            pairCount++;
        }
    }
    return pairCount == 1;
}

bool Hand::hasThreeOfAKind() const {
    int counts[13] = {0};
    for (const auto& card : hand) {
        counts[card.getFace()]++;
    }
    for (int i = 0; i < 13; i++) {
        if (counts[i] == 3) {
            return true;
        }
    }
    return false;
}

bool Hand::hasTwoPairs() const {
    int counts[13] = {0};
    for (const auto& card : hand) {
        counts[card.getFace()]++;
    }
    int pairCount = 0;
    for (int i = 0; i < 13; i++) {
        if (counts[i] == 2) {
            pairCount++;
        }
    }
    return pairCount == 2;
}