#include <iostream>
using namespace std;

struct Account
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    Account acc[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Display Accounts\n";
        cout << "3. Deposit Money\n";
        cout << "4. Withdraw Money\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Account Number: ";
                cin >> acc[n].accountNo;

                cin.ignore();

                cout << "Enter Account Holder Name: ";
                cin.getline(acc[n].name, 50);

                cout << "Enter Initial Balance: ";
                cin >> acc[n].balance;

                n++;
                cout << "Account Created Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Accounts Available!\n";
                }
                else
                {
                    cout << "\nAccount Details:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nAccount No : " << acc[i].accountNo << endl;
                        cout << "Name       : " << acc[i].name << endl;
                        cout << "Balance    : Rs. " << acc[i].balance << endl;
                    }
                }
                break;

            case 3:
            {
                int accNo;
                float amount;
                bool found = false;

                cout << "Enter Account Number: ";
                cin >> accNo;

                for(int i = 0; i < n; i++)
                {
                    if(acc[i].accountNo == accNo)
                    {
                        cout << "Enter Deposit Amount: ";
                        cin >> amount;

                        acc[i].balance += amount;

                        cout << "Deposit Successful!\n";
                        cout << "Updated Balance: Rs. " << acc[i].balance << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 4:
            {
                int accNo;
                float amount;
                bool found = false;

                cout << "Enter Account Number: ";
                cin >> accNo;

                for(int i = 0; i < n; i++)
                {
                    if(acc[i].accountNo == accNo)
                    {
                        cout << "Enter Withdrawal Amount: ";
                        cin >> amount;

                        if(amount <= acc[i].balance)
                        {
                            acc[i].balance -= amount;
                            cout << "Withdrawal Successful!\n";
                            cout << "Remaining Balance: Rs. " << acc[i].balance << endl;
                        }
                        else
                        {
                            cout << "Insufficient Balance!\n";
                        }

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 5:
                cout << "Thank You for Using the Bank Account System!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}