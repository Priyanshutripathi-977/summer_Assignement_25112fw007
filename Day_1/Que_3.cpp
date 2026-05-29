#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Calculate factorial
    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    // Display result
    cout << "Factorial of " << num << " = " << factorial;

    return 0;
}