// Q118. Write a program to Create mini library system.

#include <iostream>
#include <vector>
using namespace std;

// Structure
struct Book {
    int bookId;
    string title;
    string author;
    bool available;
};

// Add Book
void addBook(vector<Book> &library) {
    Book b;

    cout << "\nEnter Book ID: ";
    cin >> b.bookId;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, b.title);

    cout << "Enter Author Name: ";
    getline(cin, b.author);

    b.available = true;

    library.push_back(b);

    cout << "\nBook Added Successfully!\n";
}

// Display Books
void displayBooks(vector<Book> &library) {
    if (library.empty()) {
        cout << "\nNo Books Available!\n";
        return;
    }

    cout << "\n========== LIBRARY ==========\n";

    for (Book b : library) {
        cout << "Book ID   : " << b.bookId << endl;
        cout << "Title     : " << b.title << endl;
        cout << "Author    : " << b.author << endl;

        if (b.available)
            cout << "Status    : Available\n";
        else
            cout << "Status    : Issued\n";

        cout << "-----------------------------\n";
    }
}

// Search Book
void searchBook(vector<Book> &library) {
    int id;

    cout << "\nEnter Book ID: ";
    cin >> id;

    for (Book b : library) {
        if (b.bookId == id) {
            cout << "\nBook Found!\n";
            cout << "Book ID : " << b.bookId << endl;
            cout << "Title   : " << b.title << endl;
            cout << "Author  : " << b.author << endl;

            if (b.available)
                cout << "Status  : Available\n";
            else
                cout << "Status  : Issued\n";

            return;
        }
    }

    cout << "\nBook Not Found!\n";
}

int main() {
    vector<Book> library;
    int choice;

    do {
        cout << "\n===== MINI LIBRARY SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addBook(library);
                break;

            case 2:
                displayBooks(library);
                break;

            case 3:
                searchBook(library);
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