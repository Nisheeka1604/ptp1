#reverse
#include <iostream>
#include <string>
#include <limits.h>
using namespace std;

int reverse(int x) {
    string str = to_string(x);  // Convert number to string
    bool isNegative = (str[0] == '-');  // Check if negative

    // Reverse the string while ignoring the negative sign
    if (isNegative)
        std::reverse(str.begin() + 1, str.end());
    else
        std::reverse(str.begin(), str.end());

    // Convert back to integer
    try {
        int reversedNum = stoi(str);  // Convert reversed string to int
        return isNegative ? -reversedNum : reversedNum;
    } catch (out_of_range &e) {  
        return 0;  // Handle overflow case
    }
}

