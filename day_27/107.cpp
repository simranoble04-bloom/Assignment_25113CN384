#include <iostream>
#include <vector>
using namespace std;

//Q107. Write a program to Create salary management system
struct Employee {
    int id;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;
};

// Add Employee
void addEmployee(vector<Employee> &emp) {
    Employee e;

    cout << "\nEnter Employee ID: ";
    cin >> e.id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Basic Salary: ";
    cin >> e.basicSalary;

    cout << "Enter Bonus: ";
    cin >> e.bonus;

    e.totalSalary = e.basicSalary + e.bonus;

    emp.push_back(e);

    cout << "\nSalary Record Added Successfully!\n";
}

// Display Salary Records
void displayEmployees(vector<Employee> &emp) {
    if (emp.empty()) {
        cout << "\nNo Salary Records Found!\n";
        return;
    }

    cout << "\n------ Salary Records ------\n";

    for (Employee e : emp) {
        cout << "ID           : " << e.id << endl;
        cout << "Name         : " << e.name << endl;
        cout << "Basic Salary : " << e.basicSalary << endl;
        cout << "Bonus        : " << e.bonus << endl;
        cout << "Total Salary : " << e.totalSalary << endl;
        cout << "----------------------------\n";
    }
}

// Search Employee
void searchEmployee(vector<Employee> &emp) {
    int id;

    cout << "\nEnter Employee ID: ";
    cin >> id;

    for (Employee e : emp) {
        if (e.id == id) {
            cout << "\nEmployee Found!\n";
            cout << "ID           : " << e.id << endl;
            cout << "Name         : " << e.name << endl;
            cout << "Basic Salary : " << e.basicSalary << endl;
            cout << "Bonus        : " << e.bonus << endl;
            cout << "Total Salary : " << e.totalSalary << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

int main() {
    vector<Employee> emp;
    int choice;

    do {
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Salary Record\n";
        cout << "2. Display Salary Records\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee(emp);
                break;

            case 2:
                displayEmployees(emp);
                break;

            case 3:
                searchEmployee(emp);
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