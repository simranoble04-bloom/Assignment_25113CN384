// Q111: Write a program to Create Ticket Booking System.
// Company Tags: TCS, Accenture, Cognizant

#include <iostream>
using namespace std;

int totalSeats = 10;
int bookedSeats = 0;

void bookTicket() {
    int seats;

    cout << "\nEnter Number of Tickets: ";
    cin >> seats;

    if (seats <= (totalSeats - bookedSeats)) {
        bookedSeats += seats;
        cout << "\nTicket Booked Successfully!\n";
    }
    else {
        cout << "\nSorry! Not Enough Seats Available.\n";
    }
}

void cancelTicket() {
    int seats;

    cout << "\nEnter Number of Tickets to Cancel: ";
    cin >> seats;

    if (seats <= bookedSeats) {
        bookedSeats -= seats;
        cout << "\nTicket Cancelled Successfully!\n";
    }
    else {
        cout << "\nInvalid Number of Tickets!\n";
    }
}

void availableSeats() {
    cout << "\n------ Ticket Details ------\n";
    cout << "Total Seats     : " << totalSeats << endl;
    cout << "Booked Seats    : " << bookedSeats << endl;
    cout << "Available Seats : " << totalSeats - bookedSeats << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Check Available Seats\n";
        cout << "4. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bookTicket();
                break;

            case 2:
                cancelTicket();
                break;

            case 3:
                availableSeats();
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