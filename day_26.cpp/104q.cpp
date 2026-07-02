#include <bits/stdc++.h>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== Quiz Application =====\n";

    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is used for C++ programming?\n";
    cout << "1. Compiler\n2. Interpreter\n3. Programming Language\n4. Database\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 3
    cout << "\n3. Which symbol is used for comments in C++?\n";
    cout << "1. //\n2. ##\n3. %%\n4. &&\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    // Question 4
    cout << "\n4. Which loop executes at least once?\n";
    cout << "1. for\n2. while\n3. do-while\n4. switch\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Question 5
    cout << "\n5. How many bits are there in one byte?\n";
    cout << "1. 4\n2. 8\n3. 16\n4. 32\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Display Result
    cout << "\n===== Result =====\n";
    cout << "Your Score: " << score << " / 5\n";

    if (score == 5)
        cout << "Excellent!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}