#include <iostream>
using namespace std;

int main() {
    int num, digit, sum = 0;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Find sum of digits
    while(num != 0) {
        digit = num % 10;   // Get last digit
        sum = sum + digit;  // Add digit to sum
        num = num / 10;     // Remove last digit
    }

    // Display result
    cout << "Sum of digits = " << sum;

    return 0;
}