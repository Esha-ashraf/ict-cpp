#include <iostream>
using namespace std;

int main() {
    int largest; // Variable to store the largest number
    int num; // Variable to store user input

    cout << "Enter 5 numbers:" << endl;

    // Accept the first number to initialize the largest variable
    cin >> largest;

    // Loop to accept 4 more numbers
    for (int i = 1; i < 5; ++i) {
        cin >> num;

        // If-else block to keep track of the largest number
        if (num > largest) {
            largest = num; // Update largest if num is greater
        }
    }

    cout << "Largest is " << largest << "." << endl;

    return 0;
}
