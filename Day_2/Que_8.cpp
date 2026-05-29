#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, digit;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Reverse the number
    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    // Check palindrome
    if(original == reverse)
        cout << original << " is a Palindrome number";
    else
        cout << original << " is not a Palindrome number";

    return 0;
}