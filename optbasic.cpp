
#include <iostream>
using namespace std;

int countDividingDigitsOptimized(int n) {
    int count = 0, temp = n;

    while (temp > 0) {
        int digit = temp % 10;  // Extract last digit
        if (digit != 0 && n % digit == 0) {  // Check divisibility
            count++;
        }
        temp /= 10;  // Remove last digit
    }
    
    return count;
}