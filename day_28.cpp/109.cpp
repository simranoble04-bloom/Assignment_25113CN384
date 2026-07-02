// Q109: Write a program to Create Library Management System.

#include <bits/stdc++.h>
using namespace std;

int id[100];
string title[100];
string author[100];
bool issued[100];

int totalBooks = 0;

void addBook() {
    cout << "\nEnter Book ID: ";
    cin >> id[totalBooks];
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title[totalBooks]);

    cout << "Enter Author Name: ";
    getline(cin, author[totalBooks]);

    issued[totalBooks] = false;
    totalBooks++;

    cout << "\nBook Added Successfully!\n";
}

void displayBooks() {
    if (totalBooks == 0) {
        cout << "\nNo Books Available!\n";
        return;
    }

    cout << "\n------ Library Books ------\n";

    for (int i = 0; i < totalBooks; i++) {
        cout << "\nBook " << i + 1 << endl;
        cout << "ID     : " << id[i] << endl;
        cout << "Title  : " << title[i] << endl;
        cout << "Author : " << author[i] << endl;

        if (issued[i])
            cout << "Status : Issued\n";
        else
            cout << "Status : Available\n";
    }
}

void issueBook() {
    int bookId;
    cout << "\nEnter Book ID to Issue: ";
    cin >> bookId;

    for (int i = 0; i < totalBooks; i++) {
        if (id[i] == bookId) {
            if (issued[i])
                cout << "Book is Already Issued!\n";
            else {
                issued[i] = true;
                cout << "Book Issued Successfully!\n";
            }
            return;
        }
    }

    cout << "Book Not Found!\n";
}

void returnBook() {
    int bookId;
    cout << "\nEnter Book ID to Return: ";
    cin >> bookId;

    for (int i = 0; i < totalBooks; i++) {
        if (id[i] == bookId) {
            if (!issued[i])
                cout << "Book was not Issued!\n";
            else {
                issued[i] = false;
                cout << "Book Returned Successfully!\n";
            }
            return;
        }
    }

    cout << "Book Not Found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Issue Book\n";
        cout << "4. Return Book\n";
        cout << "5. Exit\n";

        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                issueBook();
                break;

            case 4:
                returnBook();
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