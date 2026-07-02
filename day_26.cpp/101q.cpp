#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));              // Seed for random number
    int secret = rand() % 100 + 1;   // Random number (1-100)

    int guess, attempts = 0;

    cout << " ----- Number Guessing Game-----\n";
    cout << "Guess a number between 1 and 100.\n";

    do {
        cout << "\nEnter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > secret) {
            cout << "Too High! Try Again.\n";
        }
        else if (guess < secret) {
            cout << "Too Low! Try Again.\n";
        }
        else {
            cout << "\nCongratulations! You guessed the correct number.\n";
            cout << "Total Attempts: " << attempts << endl;
        }

    } while (guess != secret);

    return 0;
}