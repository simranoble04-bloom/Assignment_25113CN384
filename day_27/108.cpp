#include <iostream>
#include <vector>
using namespace std;

//Q108 Write a program to Create marksheet generation system.

struct Student {
    int rollNo;
    string name;
    float marks1, marks2, marks3;
    float total, percentage;
};

// Add Student
void addStudent(vector<Student> &stu) {
    Student s;

    cout << "\nEnter Roll Number: ";
    cin >> s.rollNo;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, s.name);

    cout << "Enter Marks of Subject 1: ";
    cin >> s.marks1;

    cout << "Enter Marks of Subject 2: ";
    cin >> s.marks2;

    cout << "Enter Marks of Subject 3: ";
    cin >> s.marks3;

    s.total = s.marks1 + s.marks2 + s.marks3;
    s.percentage = s.total / 3;

    stu.push_back(s);

    cout << "\nMarksheet Generated Successfully!\n";
}

// Display Marksheet
void displayMarksheet(vector<Student> &stu) {
    if (stu.empty()) {
        cout << "\nNo Student Records Found!\n";
        return;
    }

    cout << "\n------ Student Marksheet ------\n";

    for (Student s : stu) {
        cout << "Roll No    : " << s.rollNo << endl;
        cout << "Name       : " << s.name << endl;
        cout << "Subject 1  : " << s.marks1 << endl;
        cout << "Subject 2  : " << s.marks2 << endl;
        cout << "Subject 3  : " << s.marks3 << endl;
        cout << "Total      : " << s.total << endl;
        cout << "Percentage : " << s.percentage << "%" << endl;
        cout << "-------------------------------\n";
    }
}

// Search Student
void searchStudent(vector<Student> &stu) {
    int roll;

    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (Student s : stu) {
        if (s.rollNo == roll) {
            cout << "\nStudent Found!\n";
            cout << "Roll No    : " << s.rollNo << endl;
            cout << "Name       : " << s.name << endl;
            cout << "Total      : " << s.total << endl;
            cout << "Percentage : " << s.percentage << "%" << endl;
            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main() {
    vector<Student> stu;
    int choice;

    do {
        cout << "\n===== Marksheet Generation System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Marksheet\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent(stu);
                break;

            case 2:
                displayMarksheet(stu);
                break;

            case 3:
                searchStudent(stu);
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