#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;

    while (userGuess != randomNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
        }
    }

    return 0;
}
