// Q112: Write a program to Create Contact Management System.

#include <iostream>
using namespace std;

string name[100];
string phone[100];
int totalContacts = 0;

void addContact() {
    cin.ignore();

    cout << "\nEnter Contact Name: ";
    getline(cin, name[totalContacts]);

    cout << "Enter Phone Number: ";
    getline(cin, phone[totalContacts]);

    totalContacts++;

    cout << "\nContact Added Successfully!\n";
}

void displayContacts() {
    if (totalContacts == 0) {
        cout << "\nNo Contacts Available!\n";
        return;
    }

    cout << "\n------ Contact List ------\n";

    for (int i = 0; i < totalContacts; i++) {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name  : " << name[i] << endl;
        cout << "Phone : " << phone[i] << endl;
    }
}

void searchContact() {
    cin.ignore();
    string searchName;

    cout << "\nEnter Contact Name to Search: ";
    getline(cin, searchName);

    for (int i = 0; i < totalContacts; i++) {
        if (name[i] == searchName) {
            cout << "\nContact Found!\n";
            cout << "Name  : " << name[i] << endl;
            cout << "Phone : " << phone[i] << endl;
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

void deleteContact() {
    cin.ignore();
    string deleteName;

    cout << "\nEnter Contact Name to Delete: ";
    getline(cin, deleteName);

    for (int i = 0; i < totalContacts; i++) {
        if (name[i] == deleteName) {

            for (int j = i; j < totalContacts - 1; j++) {
                name[j] = name[j + 1];
                phone[j] = phone[j + 1];
            }

            totalContacts--;

            cout << "\nContact Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nContact Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                deleteContact();
                break;

            case 5:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}