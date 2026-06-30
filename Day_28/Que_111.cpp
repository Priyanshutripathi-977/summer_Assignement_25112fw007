#include <iostream>
using namespace std;

struct Ticket
{
    int seatNo;
    char name[50];
    bool booked;
};

int main()
{
    Ticket ticket[10];
    int choice;

    // Initialize seats
    for(int i = 0; i < 10; i++)
    {
        ticket[i].seatNo = i + 1;
        ticket[i].booked = false;
    }

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. View Seat Status\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int seat;

                cout << "Enter Seat Number (1-10): ";
                cin >> seat;

                if(seat < 1 || seat > 10)
                {
                    cout << "Invalid Seat Number!\n";
                }
                else if(ticket[seat - 1].booked)
                {
                    cout << "Seat Already Booked!\n";
                }
                else
                {
                    cin.ignore();

                    cout << "Enter Passenger Name: ";
                    cin.getline(ticket[seat - 1].name, 50);

                    ticket[seat - 1].booked = true;

                    cout << "Ticket Booked Successfully!\n";
                }

                break;
            }

            case 2:
                cout << "\nSeat Status:\n";

                for(int i = 0; i < 10; i++)
                {
                    cout << "Seat " << ticket[i].seatNo << " : ";

                    if(ticket[i].booked)
                        cout << "Booked (" << ticket[i].name << ")";
                    else
                        cout << "Available";

                    cout << endl;
                }

                break;

            case 3:
                cout << "Thank You for Using the Ticket Booking System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 3);

    return 0;
}