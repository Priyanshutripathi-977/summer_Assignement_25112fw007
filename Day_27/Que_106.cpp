#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    Employee emp[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Employee ID: ";
                cin >> emp[n].id;

                cin.ignore();

                cout << "Enter Employee Name: ";
                cin.getline(emp[n].name, 50);

                cout << "Enter Salary: ";
                cin >> emp[n].salary;

                n++;
                cout << "Employee Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Employee Records Found!\n";
                }
                else
                {
                    cout << "\nEmployee Records:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nEmployee ID: " << emp[i].id << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Salary: " << emp[i].salary << endl;
                    }
                }
                break;

            case 3:
            {
                int id;
                bool found = false;

                cout << "Enter Employee ID to Search: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        cout << "\nEmployee Found!\n";
                        cout << "Employee ID: " << emp[i].id << endl;
                        cout << "Name: " << emp[i].name << endl;
                        cout << "Salary: " << emp[i].salary << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Employee Record Not Found!\n";
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