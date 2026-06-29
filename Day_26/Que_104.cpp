#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    char answer;

    cout << "===== Simple Quiz Application =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\nd) Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 'b' || answer == 'B')
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programs?\n";
    cout << "a) C++\nb) HTML\nc) CSS\nd) SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A')
        score++;

    // Question 3
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "a) 365\nb) 364\nc) 366\nd) 360\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if(answer == 'c' || answer == 'C')
        score++;

    cout << "\n===== Quiz Result =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if(score == 3)
        cout << "Excellent!";
    else if(score == 2)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";

    return 0;
}