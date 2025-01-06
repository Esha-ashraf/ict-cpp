#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main()
{
    srand(time(0)); // Seed the random number generator with the current time

    int winningNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int userGuess;
    int attemptsCounter = 0;

    cout << "Welcome to the Lottery Game!" << endl;
    cout << "Try to guess the winning number between 1 and 100." << endl;

    // Game loop
    while (true)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attemptsCounter++;

        if (userGuess < winningNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > winningNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You've guessed the winning number " << winningNumber << " in " << attemptsCounter << " attempts." << endl;
            break; // Exit the loop on correct guess
        }
    }

    return 0;
}
