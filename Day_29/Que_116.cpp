#include <iostream>
using namespace std;

struct Item
{
    int itemId;
    char itemName[50];
    int quantity;
    float price;
};

int main()
{
    Item item[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item by ID\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter Item ID: ";
                cin >> item[n].itemId;

                cin.ignore();

                cout << "Enter Item Name: ";
                cin.getline(item[n].itemName, 50);

                cout << "Enter Quantity: ";
                cin >> item[n].quantity;

                cout << "Enter Price: ";
                cin >> item[n].price;

                n++;
                cout << "Item Added Successfully!\n";
                break;

            case 2:
                if(n == 0)
                {
                    cout << "No Items Available!\n";
                }
                else
                {
                    cout << "\nInventory Details:\n";

                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nItem ID  : " << item[i].itemId << endl;
                        cout << "Name     : " << item[i].itemName << endl;
                        cout << "Quantity : " << item[i].quantity << endl;
                        cout << "Price    : Rs. " << item[i].price << endl;
                    }
                }
                break;

            case 3:
            {
                int id;
                bool found = false;

                cout << "Enter Item ID to Search: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(item[i].itemId == id)
                    {
                        cout << "\nItem Found!\n";
                        cout << "Item ID  : " << item[i].itemId << endl;
                        cout << "Name     : " << item[i].itemName << endl;
                        cout << "Quantity : " << item[i].quantity << endl;
                        cout << "Price    : Rs. " << item[i].price << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Item Not Found!\n";

                break;
            }

            case 4:
            {
                int id;
                bool found = false;

                cout << "Enter Item ID: ";
                cin >> id;

                for(int i = 0; i < n; i++)
                {
                    if(item[i].itemId == id)
                    {
                        cout << "Enter New Quantity: ";
                        cin >> item[i].quantity;

                        cout << "Quantity Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Item Not Found!\n";

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