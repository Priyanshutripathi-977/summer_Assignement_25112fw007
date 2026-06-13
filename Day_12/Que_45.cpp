#include <iostream>
using namespace std;

// Function to check palindrome
bool isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return original == reverse;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}