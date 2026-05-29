#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Count digits
    while(num != 0) {
        num = num / 10;
        count++;
    }

    // Display result
    cout << "Number of digits = " << count;

    return 0;
}