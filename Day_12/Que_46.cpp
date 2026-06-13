#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int n) {
    int temp = n, sum = 0;

    while (temp > 0) {
        int d = temp % 10;
        sum += pow(d, 3);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (armstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}