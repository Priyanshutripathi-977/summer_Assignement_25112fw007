#include <iostream>
using namespace std;

int main() {
    int num, digit, product = 1;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Find product of digits
    while(num != 0) {
        digit = num % 10;        // Get last digit
        product = product * digit;
        num = num / 10;          // Remove last digit
    }

    // Display result
    cout << "Product of digits = " << product;

    return 0;
}