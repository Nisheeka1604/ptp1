#optimal solution
#include <iostream>
#include <vector>
using namespace std;

// Function to compute GCD using Euclidean Algorithm
int gcdRecursive(int a, int b) {
    return (b == 0) ? a : gcdRecursive(b, a % b);
}

// Function to compute LCM and GCD
vector<int> lcmAndGcd(int a, int b) {
    int gcdValue = gcdRecursive(a, b);
    int lcmValue = (a / gcdValue) * b; // Avoid overflow
    return {lcmValue, gcdValue};
}
