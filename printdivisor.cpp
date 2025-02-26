#solution
#include <iostream>
using namespace std;

// Function to calculate sum of divisors of a number
int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum;
}

// Function to calculate Σi F(i) from 1 to n
int sumOfSumOfDivisors(int n) {
    int totalSum = 0;
    for (int i = 1; i <= n; i++) {
        totalSum += sumOfDivisors(i);
    }
    return totalSum;
}