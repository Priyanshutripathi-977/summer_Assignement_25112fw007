#include <iostream>
using namespace std;

int main()
{
    char str1[100], str2[100];

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
        cout << "Strings are not anagrams";
        return 0;
    }

    for(int i = 0; i < len1 - 1; i++)
    {
        for(int j = i + 1; j < len1; j++)
        {
            if(str1[i] > str1[j])
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }

            if(str2[i] > str2[j])
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    bool anagram = true;

    for(int i = 0; i < len1; i++)
    {
        if(str1[i] != str2[i])
        {
            anagram = false;
            break;
        }
    }

    if(anagram)
        cout << "Strings are anagrams";
    else
        cout << "Strings are not anagrams";

    return 0;
}