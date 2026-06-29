#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int length = 0;
    bool palindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while(str[length] != '\0')
    {
        length++;
    }

    for(int i = 0; i < length / 2; i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "String is Palindrome";
    else
        cout << "String is Not Palindrome";

    return 0;
} 