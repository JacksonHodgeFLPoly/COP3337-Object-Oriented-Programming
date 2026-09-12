#include <string>
#include <cctype>
#include <algorithm>

bool isPalindrome(const std::string& s, int left, int right) {
    if (left >= right)
        return true;

    if (tolower(s[left]) != tolower(s[right]))
        return false;

    return isPalindrome(s, left + 1, right - 1);
}

int findMax(const int arr[], int size) {
    if (size == 0)
        return arr[0];

    int maxRest = findMax(arr, size - 1);
    return (arr[size] > maxRest) ? arr[size] : maxRest;
}