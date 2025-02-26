#optimal
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) 
        return false; // Negative numbers & numbers ending with 0 (except 0) are not palindromes
    
    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    
    return x == reversed || x == reversed / 10; // Compare first half and reversed second half
}

