#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, digits = 0;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    // Count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to power 'digits'
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";

    return 0;
}