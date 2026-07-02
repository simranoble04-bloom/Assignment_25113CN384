// Q114. Write a program to Create menu-driven array operations system.

#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, key, i;

    do {
        cout << "\n===== ARRAY OPERATIONS MENU =====\n";
        cout << "1. Enter Array Elements\n";
        cout << "2. Display Array\n";
        cout << "3. Search an Element\n";
        cout << "4. Find Maximum Element\n";
        cout << "5. Find Minimum Element\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter " << n << " elements:\n";
                for (i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                cout << "Array Stored Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "Array is Empty!\n";
                } else {
                    cout << "Array Elements: ";
                    for (i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "Array is Empty!\n";
                } else {
                    cout << "Enter element to search: ";
                    cin >> key;

                    bool found = false;

                    for (i = 0; i < n; i++) {
                        if (arr[i] == key) {
                            cout << "Element found at index " << i << endl;
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        cout << "Element not found.\n";
                    }
                }
                break;

            case 4:
                if (n == 0) {
                    cout << "Array is Empty!\n";
                } else {
                    int max = arr[0];

                    for (i = 1; i < n; i++) {
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                    }

                    cout << "Maximum Element = " << max << endl;
                }
                break;

            case 5:
                if (n == 0) {
                    cout << "Array is Empty!\n";
                } else {
                    int min = arr[0];

                    for (i = 1; i < n; i++) {
                        if (arr[i] < min) {
                            min = arr[i];
                        }
                    }

                    cout << "Minimum Element = " << min << endl;
                }
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