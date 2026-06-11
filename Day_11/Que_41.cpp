#include <iostream>
using namespace std;

// Function to find sum
int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Sum = " << sum(x, y);

    return 0;
}