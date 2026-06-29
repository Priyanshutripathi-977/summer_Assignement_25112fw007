#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    int i = 0;

    while(str[i] != '\0')
    {
        int count = 1;

        while(str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
        i++;
    }

    return 0;
}