#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Reverse the number
    while(num != 0) {
        digit = num % 10;                 // Get last digit
        reverse = reverse * 10 + digit;  // Build reversed number
        num = num / 10;                  // Remove last digit
    }

    // Display reversed number
    cout << "Reversed number = " << reverse;

    return 0;
}