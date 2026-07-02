#include <bits/stdc++.h>
using namespace std;

//Q105 Write a program to Create student record management system.
#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float marks;
};

// Add Student
void addStudent(vector<Student> &students) {
    Student s;

    cout << "\nEnter Roll Number : ";
    cin >> s.roll;

    cin.ignore();

    cout << "Enter Name : ";
    getline(cin, s.name);

    cout << "Enter Age : ";
    cin >> s.age;

    cout << "Enter Marks : ";
    cin >> s.marks;

    students.push_back(s);

    cout << "\nStudent Added Successfully!\n";
}

// Display Students
void displayStudents(const vector<Student> &students) {

    if (students.empty()) {
        cout << "\nNo Records Found!\n";
        return;
    }

    cout << "\n-------------------------------\n";

    for (const auto &s : students) {

        cout << "Roll  : " << s.roll << endl;
        cout << "Name  : " << s.name << endl;
        cout << "Age   : " << s.age << endl;
        cout << "Marks : " << s.marks << endl;

        cout << "-------------------------------\n";
    }
}

// Search Student
void searchStudent(const vector<Student> &students) {

    int roll;

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    for (const auto &s : students) {

        if (s.roll == roll) {

            cout << "\nStudent Found\n";

            cout << "Roll  : " << s.roll << endl;
            cout << "Name  : " << s.name << endl;
            cout << "Age   : " << s.age << endl;
            cout << "Marks : " << s.marks << endl;

            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

// Update Student
void updateStudent(vector<Student> &students) {

    int roll;

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    for (auto &s : students) {

        if (s.roll == roll) {

            cin.ignore();

            cout << "Enter New Name : ";
            getline(cin, s.name);

            cout << "Enter New Age : ";
            cin >> s.age;

            cout << "Enter New Marks : ";
            cin >> s.marks;

            cout << "\nRecord Updated!\n";

            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

// Delete Student
void deleteStudent(vector<Student> &students) {

    int roll;

    cout << "\nEnter Roll Number : ";
    cin >> roll;

    for (int i = 0; i < students.size(); i++) {

        if (students[i].roll == roll) {

            students.erase(students.begin() + i);

            cout << "\nRecord Deleted!\n";

            return;
        }
    }

    cout << "\nStudent Not Found!\n";
}

int main() {

    vector<Student> students;

    int choice;

    do {

        cout << "\n========== Student Record Management ==========\n";

        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";

        cout << "\nEnter Choice : ";
        cin >> choice;

        switch (choice) {

            case 1:
                addStudent(students);
                break;

            case 2:
                displayStudents(students);
                break;

            case 3:
                searchStudent(students);
                break;

            case 4:
                updateStudent(students);
                break;

            case 5:
                deleteStudent(students);
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