// Q115. Write a program to Create menu-driven string operations system.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        cout << "\n===== STRING OPERATIONS MENU =====\n";
        cout << "1. Enter String\n";
        cout << "2. Find Length\n";
        cout << "3. Copy String\n";
        cout << "4. Concatenate Strings\n";
        cout << "5. Compare Strings\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch (choice) {

            case 1:
                cout << "Enter String: ";
                cin.getline(str1, 100);
                break;

            case 2:
                cout << "Length = " << strlen(str1) << endl;
                break;

            case 3:
                strcpy(str2, str1);
                cout << "Copied String: " << str2 << endl;
                break;

            case 4:
                cout << "Enter another String: ";
                cin.getline(str2, 100);

                strcat(str1, str2);

                cout << "Concatenated String: " << str1 << endl;
                break;

            case 5:
                cout << "Enter another String: ";
                cin.getline(str2, 100);

                if (strcmp(str1, str2) == 0)
                    cout << "Both Strings are Equal.\n";
                else
                    cout << "Strings are Not Equal.\n";

                break;

            case 6:
                cout << "\nThank You!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}