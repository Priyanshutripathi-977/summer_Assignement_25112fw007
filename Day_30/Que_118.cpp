#include <iostream>
using namespace std;

int main()
{
    int bookId[100];
    char bookName[100][50];
    bool issued[100];

    int n = 0, choice;

    do
    {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Book ID: ";
                cin >> bookId[n];

                cin.ignore();

                cout << "Enter Book Name: ";
                cin.getline(bookName[n], 50);

                issued[n] = false;
                n++;

                cout << "Book Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Books Available!\n";
                }
                else
                {
                    cout << "\nLibrary Books:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nBook ID : " << bookId[i] << endl;
                        cout << "Book Name : " << bookName[i] << endl;

                        if(issued[i])
                            cout << "Status : Issued\n";
                        else
                            cout << "Status : Available\n";
                    }
                }
                break;

            case 3:
            {
                int id;
                bool found = false;

                cout << "Enter Book ID to Issue: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        if(!issued[i])
                        {
                            issued[i] = true;
                            cout << "Book Issued Successfully!\n";
                        }
                        else
                        {
                            cout << "Book is Already Issued!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

                break;
            }

            case 4:
            {
                int id;
                bool found = false;

                cout << "Enter Book ID to Return: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        if(issued[i])
                        {
                            issued[i] = false;
                            cout << "Book Returned Successfully!\n";
                        }
                        else
                        {
                            cout << "Book is Already Available!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Book Not Found!\n";

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