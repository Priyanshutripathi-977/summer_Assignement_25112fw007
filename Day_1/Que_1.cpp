#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "enter the number upto which we have to calculate the sum : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum of first natural number upto "<< n << " is " << sum << endl;
    return 0;
}