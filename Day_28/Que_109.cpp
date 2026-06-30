#include <iostream>
using namespace std;

struct Book
{
    int bookId;
    char title[50];
    char author[50];
};

int main()
{
    Book book[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Book ID: ";
                cin >> book[n].bookId;

                cin.ignore();

                cout << "Enter Book Title: ";
                cin.getline(book[n].title, 50);

                cout << "Enter Author Name: ";
                cin.getline(book[n].author, 50);

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
                    cout << "\nBook Records:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nBook ID : " << book[i].bookId << endl;
                        cout << "Title   : " << book[i].title << endl;
                        cout << "Author  : " << book[i].author << endl;
                    }
                }
                break;

            case 3:
            {
                int id;
                bool found = false;

                cout << "Enter Book ID to Search: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(book[i].bookId == id)
                    {
                        cout << "\nBook Found!\n";
                        cout << "Book ID : " << book[i].bookId << endl;
                        cout << "Title   : " << book[i].title << endl;
                        cout << "Author  : " << book[i].author << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Book Not Found!\n";
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