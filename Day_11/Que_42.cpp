#include <iostream>
using namespace std;

// Function to find maximum
int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << maximum(a, b);

    return 0;
}