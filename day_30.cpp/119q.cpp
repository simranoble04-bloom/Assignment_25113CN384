// Q119. Write a program to Create mini employee management system.

#include <iostream>
#include <vector>
using namespace std;

// Structure
struct Employee {
    int empId;
    string name;
    string department;
    float salary;
};

// Add Employee
void addEmployee(vector<Employee> &employees) {
    Employee e;

    cout << "\nEnter Employee ID: ";
    cin >> e.empId;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, e.name);

    cout << "Enter Department: ";
    getline(cin, e.department);

    cout << "Enter Salary: ";
    cin >> e.salary;

    employees.push_back(e);

    cout << "\nEmployee Added Successfully!\n";
}

// Display Employees
void displayEmployees(vector<Employee> &employees) {
    if (employees.empty()) {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n========== EMPLOYEE RECORDS ==========\n";

    for (Employee e : employees) {
        cout << "Employee ID : " << e.empId << endl;
        cout << "Name        : " << e.name << endl;
        cout << "Department  : " << e.department << endl;
        cout << "Salary      : Rs. " << e.salary << endl;
        cout << "--------------------------------------\n";
    }
}

// Search Employee
void searchEmployee(vector<Employee> &employees) {
    int id;

    cout << "\nEnter Employee ID: ";
    cin >> id;

    for (Employee e : employees) {
        if (e.empId == id) {
            cout << "\nEmployee Found!\n";
            cout << "Employee ID : " << e.empId << endl;
            cout << "Name        : " << e.name << endl;
            cout << "Department  : " << e.department << endl;
            cout << "Salary      : Rs. " << e.salary << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

int main() {
    vector<Employee> employees;
    int choice;

    do {
        cout << "\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                addEmployee(employees);
                break;

            case 2:
                displayEmployees(employees);
                break;

            case 3:
                searchEmployee(employees);
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