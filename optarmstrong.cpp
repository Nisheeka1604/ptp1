#solution
#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    string numStr = to_string(num);
    int digits = numStr.length();  // Get the number of digits
    int sum = 0, temp = num;

    // Calculate sum of digits each raised to the power of the number of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return (sum == num);
}
