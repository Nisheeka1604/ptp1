#gcd
#include <iostream>
#include <vector>
using namespace std;

// Function to compute GCD using iteration
int gcdIterative(int a, int b) {
    int gcdValue = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcdValue = i;
        }
    }
    return gcdValue;
}

// Function to compute LCM and GCD
vector<int> lcmAndGcd(int a, int b) {
    int gcdValue = gcdIterative(a, b);
    int lcmValue = (a * b) / gcdValue;  // LCM formula
    return {lcmValue, gcdValue};
}
