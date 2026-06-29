#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    Student s[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Student Record Management System =====\n";
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
                cin >> s[n].rollNo;

                cin.ignore();

                cout << "Enter Name: ";
                cin.getline(s[n].name, 50);

                cout << "Enter Marks: ";
                cin >> s[n].marks;

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
                        cout << "\nRoll No: " << s[i].rollNo << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
                    }
                }
                break;

            case 3:
            {
                int roll;
                bool found = false;

                cout << "Enter Roll Number to Search: ";
                cin >> roll;

                for(int i = 0; i < n; i++)
                {
                    if(s[i].rollNo == roll)
                    {
                        cout << "\nStudent Found!\n";
                        cout << "Roll No: " << s[i].rollNo << endl;
                        cout << "Name: " << s[i].name << endl;
                        cout << "Marks: " << s[i].marks << endl;
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