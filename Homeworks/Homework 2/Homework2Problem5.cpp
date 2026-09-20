#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Standard Join Function
std::string my_join(const std::vector<std::string>& words, std::string separ) {
    if (words.empty()) return "";
    std::string result = words[0];
    for (size_t i = 1; i < words.size(); ++i) {
        result += separ + words[i];
    }
    return result;
}

// Bonus: Combination Join Function
void my_join_comb(std::vector<std::string> words, std::string separ) {
    // std::next_permutation requires the vector to be sorted initially
    std::sort(words.begin(), words.end());
    
    do {
        std::cout << my_join(words, separ) << std::endl;
    } while (std::next_permutation(words.begin(), words.end()));
}

int main() {
    std::vector<std::string> words;
    std::string word;
    
    std::cout << "Enter strings (\"exit\" to stop)" << std::endl;
    while (std::cin >> word && word != "exit") {
        words.push_back(word);
    }
    
    std::string separator;
    std::cout << "Enter the separator" << std::endl;
    std::cin >> separator;
    
    std::cout << "\n--- Standard Join ---" << std::endl;
    std::cout << my_join(words, separator) << std::endl;
    
    std::cout << "\n--- Bonus Combinations ---" << std::endl;
    my_join_comb(words, separator);
    
    return 0;
}