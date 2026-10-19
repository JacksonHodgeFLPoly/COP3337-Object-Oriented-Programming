#include "Card.hpp"
#include "Deck.hpp"
#include <vector>

class Hand {
private:
    std::vector<Card> hand;

public:
    void takeCards(Deck& deck);
    bool isFullHand()const;
    void print() const;
    bool hasPair() const;
    bool hasTwoPairs() const;
    bool hasThreeOfAKind() const;
};
