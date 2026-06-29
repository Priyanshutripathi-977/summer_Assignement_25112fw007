#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of names: ";
    cin >> n;
    cin.ignore();

    char names[n][100], temp[100];

    cout << "Enter the names:\n";
    for(int i = 0; i < n; i++)
    {
        cin.getline(names[i], 100);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for(int i = 0; i < n; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}