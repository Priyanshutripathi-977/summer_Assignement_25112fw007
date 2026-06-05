#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    long long largestPrime = -1;

    // Divide by 2 while possible
    while (n % 2 == 0) {
        largestPrime = 2;
        n /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestPrime = i;
            n /= i;
        }
    }

    // If n is still greater than 2, it is prime
    if (n > 2)
        largestPrime = n;

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}