#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of words: ";
    cin >> n;

    char words[n][100], temp[100];

    cout << "Enter the words:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strlen(words[i]) > strlen(words[j]))
            {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for(int i = 0; i < n; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}