#include <iostream>
#include <cmath>  // For sqrt() function
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;  // 0 and 1 are not prime
    if (n == 2 || n == 3) return true;  // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false;  // Eliminate even numbers & multiples of 3

    for (int i = 5; i * i <= n; i += 6) {  // Check divisibility up to sqrt(N)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
