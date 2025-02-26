#sol
#include <iostream>
using namespace std;

// Optimized function to calculate Σi F(i)
int sumOfSumOfDivisors(int n) {
    int totalSum = 0;
    for (int d = 1; d <= n; d++) {
        totalSum += d * (n / d);
    }
    return totalSum;
}
