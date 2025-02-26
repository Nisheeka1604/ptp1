#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;  // 0 and 1 are not prime numbers

    for (int i = 2; i < n; i++) {  // Check divisibility from 2 to n-1
        if (n % i == 0)
            return false;
    }
    return true;
}
