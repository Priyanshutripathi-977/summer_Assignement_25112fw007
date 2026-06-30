#include <iostream>
using namespace std;

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    Contact contact[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cin.ignore();

                cout << "Enter Name: ";
                cin.getline(contact[n].name, 50);

                cout << "Enter Phone Number: ";
                cin.getline(contact[n].phone, 15);

                n++;
                cout << "Contact Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Contacts Available!\n";
                }
                else
                {
                    cout << "\nContact List:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nName  : " << contact[i].name << endl;
                        cout << "Phone : " << contact[i].phone << endl;
                    }
                }
                break;

            case 3:
            {
                char searchName[50];
                bool found = false;

                cin.ignore();

                cout << "Enter Name to Search: ";
                cin.getline(searchName, 50);

                for(int i = 0; i < n; i++)
                {
                    int j = 0;

                    while(contact[i].name[j] == searchName[j] &&
                          contact[i].name[j] != '\0' &&
                          searchName[j] != '\0')
                    {
                        j++;
                    }

                    if(contact[i].name[j] == '\0' &&
                       searchName[j] == '\0')
                    {
                        cout << "\nContact Found!\n";
                        cout << "Name  : " << contact[i].name << endl;
                        cout << "Phone : " << contact[i].phone << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Contact Not Found!\n";
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