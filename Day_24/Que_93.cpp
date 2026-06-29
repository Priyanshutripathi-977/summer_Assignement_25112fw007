#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100], temp[200];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int len1 = 0, len2 = 0;

    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2)
    {
        cout << "Strings are not rotations";
        return 0;
    }

    // Concatenate str1 with itself
    for(int i = 0; i < len1; i++)
        temp[i] = str1[i];

    for(int i = 0; i < len1; i++)
        temp[len1 + i] = str1[i];

    temp[2 * len1] = '\0';

    bool found = false;

    for(int i = 0; i <= len1; i++)
    {
        int j;
        for(j = 0; j < len2; j++)
        {
            if(temp[i + j] != str2[j])
                break;
        }

        if(j == len2)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Strings are rotations of each other";
    else
        cout << "Strings are not rotations";

    return 0;
}