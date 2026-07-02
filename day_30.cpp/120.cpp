// Q120. Write a program to Develop complete mini project using arrays, strings and functions.

#include <iostream>
using namespace std;

const int MAX = 100;

int rollNo[MAX];
string name[MAX];
float marks[MAX];
int n = 0;

// Add Student
void addStudent() {
    cout << "\nEnter Number of Students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enter Roll Number: ";
        cin >> rollNo[i];

        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Records Added Successfully!\n";
}

// Display Students
void displayStudents() {
    if (n == 0) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n========== STUDENT RECORDS ==========\n";

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number : " << rollNo[i] << endl;
        cout << "Name        : " << name[i] << endl;
        cout << "Marks       : " << marks[i] << endl;
    }
}

// Search Student
void searchStudent() {
    if (n == 0) {
        cout << "\nNo Records Found!\n";
        return;
    }

    int searchRoll;
    bool found = false;

    cout << "\nEnter Roll Number to Search: ";
    cin >> searchRoll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == searchRoll) {
            cout << "\nStudent Found!\n";
            cout << "Roll Number : " << rollNo[i] << endl;
            cout << "Name        : " << name[i] << endl;
            cout << "Marks       : " << marks[i] << endl;

            found = true;
            break;
        }
    }

    if (!found)
        cout << "\nStudent Not Found!\n";
}

// Find Topper
void topper() {
    if (n == 0) {
        cout << "\nNo Records Found!\n";
        return;
    }

    int index = 0;

    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[index])
            index = i;
    }

    cout << "\n===== TOPPER =====\n";
    cout << "Roll Number : " << rollNo[index] << endl;
    cout << "Name        : " << name[index] << endl;
    cout << "Marks       : " << marks[index] << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== STUDENT MANAGEMENT MINI PROJECT =====\n";
        cout << "1. Add Student Records\n";
        cout << "2. Display Student Records\n";
        cout << "3. Search Student\n";
        cout << "4. Find Topper\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                topper();
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