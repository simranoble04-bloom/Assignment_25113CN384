#include <bits/stdc++.h>
using namespace std;

int main() {
    int choice;
    float balance = 10000.0, amount;

    do {
        cout << "\n===== ATM Simulation =====\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "\nCurrent Balance: Rs. " << balance << endl;
                break;

            case 2:
                cout << "\nEnter Deposit Amount: Rs. ";
                cin >> amount;

                balance += amount;

                cout << "Amount Deposited Successfully!\n";
                cout << "Updated Balance: Rs. " << balance << endl;
                break;

            case 3:
                cout << "\nEnter Withdrawal Amount: Rs. ";
                cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    cout << "Please Collect Your Cash.\n";
                    cout << "Remaining Balance: Rs. " << balance << endl;
                }
                else {
                    cout << "Insufficient Balance!\n";
                }
                break;

            case 4:
                cout << "\nThank You for Using the ATM!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}