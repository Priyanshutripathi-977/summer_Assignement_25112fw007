#include <iostream>
using namespace std;

int main()
{
    int roll[100];
    char name[100][50];
    float marks[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Student Record System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Roll Number: ";
                cin >> roll[n];

                cin.ignore();

                cout << "Enter Student Name: ";
                cin.getline(name[n], 50);

                cout << "Enter Marks: ";
                cin >> marks[n];

                n++;
                cout << "Student Record Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Records Found!\n";
                }
                else
                {
                    cout << "\nStudent Records:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nRoll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                    }
                }
                break;

            case 3:
            {
                int searchRoll;
                bool found = false;

                cout << "Enter Roll Number to Search: ";
                cin >> searchRoll;

                for(int i = 0; i < n; i++)
                {
                    if(roll[i] == searchRoll)
                    {
                        cout << "\nStudent Found!\n";
                        cout << "Roll Number : " << roll[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Student Record Not Found!\n";
                }

                break;
            }

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}