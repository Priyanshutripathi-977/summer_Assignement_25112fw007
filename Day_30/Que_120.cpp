#include <iostream>
using namespace std;

int patientId[100];
char patientName[100][50];
int age[100];
char disease[100][50];
int totalPatients = 0;

void addPatient()
{
    cout << "\nEnter Patient ID: ";
    cin >> patientId[totalPatients];

    cin.ignore();

    cout << "Enter Patient Name: ";
    cin.getline(patientName[totalPatients], 50);

    cout << "Enter Age: ";
    cin >> age[totalPatients];

    cin.ignore();

    cout << "Enter Disease: ";
    cin.getline(disease[totalPatients], 50);

    totalPatients++;

    cout << "\nPatient Added Successfully.\n";
}

void displayPatients()
{
    if(totalPatients == 0)
    {
        cout << "\nNo Patient Records Found.\n";
        return;
    }

    cout << "\n------ Patient Records ------\n";

    for(int i = 0; i < totalPatients; i++)
    {
        cout << "\nPatient ID : " << patientId[i];
        cout << "\nName       : " << patientName[i];
        cout << "\nAge        : " << age[i];
        cout << "\nDisease    : " << disease[i] << endl;
    }
}

void searchPatient()
{
    int id;
    bool found = false;

    cout << "\nEnter Patient ID: ";
    cin >> id;

    for(int i = 0; i < totalPatients; i++)
    {
        if(patientId[i] == id)
        {
            cout << "\nPatient Found\n";
            cout << "Name : " << patientName[i] << endl;
            cout << "Age : " << age[i] << endl;
            cout << "Disease : " << disease[i] << endl;

            found = true;
            break;
        }
    }

    if(!found)
        cout << "Patient Not Found.\n";
}

void deletePatient()
{
    int id;
    bool found = false;

    cout << "\nEnter Patient ID to Delete: ";
    cin >> id;

    for(int i = 0; i < totalPatients; i++)
    {
        if(patientId[i] == id)
        {
            for(int j = i; j < totalPatients - 1; j++)
            {
                patientId[j] = patientId[j + 1];
                age[j] = age[j + 1];

                int k = 0;

                while(patientName[j + 1][k] != '\0')
                {
                    patientName[j][k] = patientName[j + 1][k];
                    k++;
                }
                patientName[j][k] = '\0';

                k = 0;

                while(disease[j + 1][k] != '\0')
                {
                    disease[j][k] = disease[j + 1][k];
                    k++;
                }
                disease[j][k] = '\0';
            }

            totalPatients--;
            found = true;

            cout << "Patient Record Deleted Successfully.\n";
            break;
        }
    }

    if(!found)
        cout << "Patient Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== HOSPITAL MANAGEMENT ==========\n";
        cout << "1. Add Patient\n";
        cout << "2. Display Patients\n";
        cout << "3. Search Patient\n";
        cout << "4. Delete Patient\n";
        cout << "5. Exit\n";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                deletePatient();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice.\n";
        }

    } while(choice != 5);

    return 0;
}