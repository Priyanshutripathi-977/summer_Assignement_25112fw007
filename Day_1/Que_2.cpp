#include <iostream>
using namespace std;

int main() {
    int num;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    // Print multiplication table
    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}