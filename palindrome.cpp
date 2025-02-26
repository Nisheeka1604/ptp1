#palindrome
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0) return false; // Negative numbers are not palindromes

    string s = to_string(x);
    string rev_s = string(s.rbegin(), s.rend()); // Reverse the string

    return s == rev_s;
}
