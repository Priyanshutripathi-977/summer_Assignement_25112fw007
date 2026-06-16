#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n - 1];

    cout << "Enter " << n - 1 << " elements: ";
    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    int totalSum = n * (n + 1) / 2;
    int missing = totalSum - sum;

    cout << "Missing number = " << missing;

    return 0;
}