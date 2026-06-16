#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    bool found = false;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the required sum: ";
    cin >> sum;

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                cout << "Pair found: " << arr[i] << " and " << arr[j];
                found = true;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
    {
        cout << "No pair found";
    }

    return 0;
}