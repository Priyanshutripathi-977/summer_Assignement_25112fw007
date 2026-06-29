#include <iostream>
using namespace std;

int main()
{
    char str[100];
    bool visited[100] = {false};

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(visited[i] || str[i] == ' ')
            continue;

        int count = 1;

        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << str[i] << " = " << count << endl;
    }

    return 0;
}