#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    int numberToGuess = rand() % 100 + 1;  // Random number between 1 and 100
    int playerGuess = 0;
    int numberOfTries = 0;

    cout << "Welcome to the Casino Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    // Main game loop
    do {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        numberOfTries++;

        if (playerGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else if (playerGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number in " << numberOfTries << " tries!" << endl;
        }
    } while (playerGuess != numberToGuess);

    cout << "Thank you for playing the Casino Number Guessing Game!" << endl;

    return 0;
}
