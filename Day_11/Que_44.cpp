#include <iostream>
using namespace std;

// Function to find factorial
long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial = " << factorial(n);

    return 0;
}