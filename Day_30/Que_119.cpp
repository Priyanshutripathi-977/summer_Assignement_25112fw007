#include <iostream>
using namespace std;

int main()
{
    int empId[100];
    char empName[100][50];
    float salary[100];

    int n = 0, choice;

    do
    {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Update Salary\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Employee ID: ";
                cin >> empId[n];

                cin.ignore();

                cout << "Enter Employee Name: ";
                cin.getline(empName[n], 50);

                cout << "Enter Salary: ";
                cin >> salary[n];

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
                        cout << "\nEmployee ID : " << empId[i] << endl;
                        cout << "Name        : " << empName[i] << endl;
                        cout << "Salary      : Rs. " << salary[i] << endl;
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
                    if(empId[i] == id)
                    {
                        cout << "\nEmployee Found!\n";
                        cout << "Employee ID : " << empId[i] << endl;
                        cout << "Name        : " << empName[i] << endl;
                        cout << "Salary      : Rs. " << salary[i] << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Employee Not Found!\n";
                }

                break;
            }

            case 4:
            {
                int id;
                bool found = false;

                cout << "Enter Employee ID: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        cout << "Enter New Salary: ";
                        cin >> salary[i];

                        cout << "Salary Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Employee Not Found!\n";
                }

                break;
            }

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}