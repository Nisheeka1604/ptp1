#solution
#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num, sum = 0, digits = 0;

    // Count the number of digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Calculate sum of digits each raised to the power of the number of digits
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // Check if sum equals the original number
    return (sum == originalNum);
}
