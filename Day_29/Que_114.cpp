#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice;

    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter the array elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    do
    {
        cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Largest Element\n";
        cout << "3. Find Smallest Element\n";
        cout << "4. Calculate Sum\n";
        cout << "5. Calculate Average\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Array Elements: ";
                for(int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 2:
            {
                int largest = arr[0];

                for(int i = 1; i < n; i++)
                {
                    if(arr[i] > largest)
                    {
                        largest = arr[i];
                    }
                }

                cout << "Largest Element = " << largest << endl;
                break;
            }

            case 3:
            {
                int smallest = arr[0];

                for(int i = 1; i < n; i++)
                {
                    if(arr[i] < smallest)
                    {
                        smallest = arr[i];
                    }
                }

                cout << "Smallest Element = " << smallest << endl;
                break;
            }

            case 4:
            {
                int sum = 0;

                for(int i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                cout << "Sum = " << sum << endl;
                break;
            }

            case 5:
            {
                int sum = 0;

                for(int i = 0; i < n; i++)
                {
                    sum += arr[i];
                }

                float average = (float)sum / n;

                cout << "Average = " << average << endl;
                break;
            }

            case 6:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 6);

    return 0;
}