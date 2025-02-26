
#include <iostream>
#include <string>
using namespace std;

int countDividingDigits(int n) {
    int count = 0;
    string numStr = to_string(n);  // Convert number to string

    for (char c : numStr) {  
        int digit = c - '0';  // Convert character to integer
        if (digit != 0 && n % digit == 0) {  // Check divisibility
            count++;
        }
    }
    
    return count;
