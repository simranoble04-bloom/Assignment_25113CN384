// Q117. Write a program to Create student record system using arrays and strings.

#include <iostream>
using namespace std;

int main() {
    int rollNo[100];
    string name[100];
    float marks[100];

    int n = 0;
    int choice;
    int searchRoll;

    do {
        cout << "\n===== STUDENT RECORD SYSTEM =====\n";
        cout << "1. Add Student Records\n";
        cout << "2. Display Student Records\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter number of students: ";
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
                break;

            case 2:
                if (n == 0) {
                    cout << "\nNo Records Found!\n";
                }
                else {
                    cout << "\n===== STUDENT RECORDS =====\n";

                    for (int i = 0; i < n; i++) {
                        cout << "\nStudent " << i + 1 << endl;
                        cout << "Roll Number : " << rollNo[i] << endl;
                        cout << "Name        : " << name[i] << endl;
                        cout << "Marks       : " << marks[i] << endl;
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "\nNo Records Found!\n";
                }
                else {
                    cout << "Enter Roll Number to Search: ";
                    cin >> searchRoll;

                    bool found = false;

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

                    if (!found) {
                        cout << "\nStudent Not Found!\n";
                    }
                }
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