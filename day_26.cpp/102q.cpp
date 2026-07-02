#include <bits/stdc++.h>
using namespace std;

// Structure
struct Citizen {
    int id;
    string name;
    int age;
    bool eligible;
};

// Add Citizen
void addCitizen(vector<Citizen> &citizens) {
    Citizen c;

    cout << "\nEnter Citizen ID: ";
    cin >> c.id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, c.name);

    cout << "Enter Age: ";
    cin >> c.age;

    if (c.age >= 18)
        c.eligible = true;
    else
        c.eligible = false;

    citizens.push_back(c);

    cout << "\nRecord Added Successfully!\n";
}

// Display Records
void displayCitizens(vector<Citizen> &citizens) {
    if (citizens.empty()) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n------ Voting Eligibility List ------\n";

    for (Citizen c : citizens) {
        cout << "ID   : " << c.id << endl;
        cout << "Name : " << c.name << endl;
        cout << "Age  : " << c.age << endl;

        if (c.eligible)
            cout << "Status : Eligible to Vote\n";
        else
            cout << "Status : Not Eligible to Vote\n";

        cout << "-----------------------------\n";
    }
}

// Search Citizen
void searchCitizen(vector<Citizen> &citizens) {
    int id;

    cout << "\nEnter Citizen ID: ";
    cin >> id;

    for (Citizen c : citizens) {
        if (c.id == id) {
            cout << "\nCitizen Found!\n";
            cout << "ID   : " << c.id << endl;
            cout << "Name : " << c.name << endl;
            cout << "Age  : " << c.age << endl;

            if (c.eligible)
                cout << "Status : Eligible to Vote\n";
            else
                cout << "Status : Not Eligible to Vote\n";

            return;
        }
    }

    cout << "\nCitizen Not Found!\n";
}

int main() {
    vector<Citizen> citizens;
    int choice;

    do {
        cout << "\n===== Voting Eligibility System =====\n";
        cout << "1. Add Citizen\n";
        cout << "2. Display Records\n";
        cout << "3. Search Citizen\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addCitizen(citizens);
                break;

            case 2:
                displayCitizens(citizens);
                break;

            case 3:
                searchCitizen(citizens);
                break;

            case 4:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}