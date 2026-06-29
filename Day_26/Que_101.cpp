#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int secret = rand() % 100 + 1;
    int guess, attempts = 0;

    cout << "Guess the number between 1 and 100.\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if(guess > secret)
        {
            cout << "Too High!\n";
        }
        else if(guess < secret)
        {
            cout << "Too Low!\n";
        }
        else
        {
            cout << "Congratulations! You guessed the number in "
                 << attempts << " attempts.";
        }

    } while(guess != secret);

    return 0;
}