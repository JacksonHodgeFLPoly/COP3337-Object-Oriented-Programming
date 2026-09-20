#include <iostream>
#include <random>

int rollDice(std::mt19937& eng) {
    std::uniform_int_distribution<int> dist(1, 6);
    int die1 = dist(eng);
    int die2 = dist(eng);
    int sum = die1 + die2;
    std::cout << "You rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
    return sum;
}

int main() {
    int seed;
    std::cout << "Enter the seed ";
    std::cin >> seed;
    
    std::mt19937 eng(seed);
    int sum = rollDice(eng);
    
    if (sum == 7 || sum == 11) {
        std::cout << "You win" << std::endl;
    } else if (sum == 2 || sum == 3 || sum == 12) {
        std::cout << "You lose" << std::endl;
    } else {
        int point = sum;
        bool keepRolling = true;
        
        while (keepRolling) {
            sum = rollDice(eng);
            if (sum == point) {
                std::cout << "You win" << std::endl;
                keepRolling = false;
            } else if (sum == 7) {
                std::cout << "You lose" << std::endl;
                keepRolling = false;
            }
        }
    }
    return 0;
}