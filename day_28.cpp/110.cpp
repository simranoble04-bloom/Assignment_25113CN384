// Q110: Write a program to Create Bank Account System.

#include <bits/stdc++.h>
using namespace std;

string name;
int accountNumber;
float balance = 0;

void createAccount() {
    cin.ignore();

    cout << "\nEnter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountNumber;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "\nAccount Created Successfully!\n";
}

void depositMoney() {
    float amount;

    cout << "\nEnter Amount to Deposit: ";
    cin >> amount;

    balance += amount;

    cout << "Money Deposited Successfully!\n";
}

void withdrawMoney() {
    float amount;

    cout << "\nEnter Amount to Withdraw: ";
    cin >> amount;

    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawal Successful!\n";
    }
    else {
        cout << "Insufficient Balance!\n";
    }
}

void checkBalance() {
    cout << "\n------ Account Details ------\n";
    cout << "Name            : " << name << endl;
    cout << "Account Number  : " << accountNumber << endl;
    cout << "Current Balance : ₹" << balance << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                checkBalance();
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