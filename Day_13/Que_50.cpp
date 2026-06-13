#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = (double)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}