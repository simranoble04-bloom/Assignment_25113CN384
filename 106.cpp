#include <iostream>
#include <vector>
using namespace std;

//Q106 Write a program to Create employee management system
struct Employee {
    int id;
    string name;
    string department;
    float salary;
};

// Add Employee
void addEmployee(vector<Employee> &emp) {
    Employee e;

    cout << "\nEnter Employee ID: ";
    cin >> e.id;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, e.name);

    cout << "Enter Department: ";
    getline(cin, e.department);

    cout << "Enter Salary: ";
    cin >> e.salary;

    emp.push_back(e);

    cout << "\nEmployee Added Successfully!\n";
}

// Display Employees
void displayEmployees(vector<Employee> &emp) {
    if (emp.empty()) {
        cout << "\nNo Employee Records Found!\n";
        return;
    }

    cout << "\n------ Employee Records ------\n";

    for (Employee e : emp) {
        cout << "ID         : " << e.id << endl;
        cout << "Name       : " << e.name << endl;
        cout << "Department : " << e.department << endl;
        cout << "Salary     : " << e.salary << endl;
        cout << "-----------------------------\n";
    }
}

// Search Employee
void searchEmployee(vector<Employee> &emp) {
    int id;
    cout << "\nEnter Employee ID to Search: ";
    cin >> id;

    for (Employee e : emp) {
        if (e.id == id) {
            cout << "\nEmployee Found!\n";
            cout << "ID         : " << e.id << endl;
            cout << "Name       : " << e.name << endl;
            cout << "Department : " << e.department << endl;
            cout << "Salary     : " << e.salary << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found!\n";
}

int main() {
    vector<Employee> emp;
    int choice;

    do {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
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