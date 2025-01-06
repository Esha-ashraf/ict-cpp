#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Prompt the user to input two numbers
    cout << "Enter the starting number (a): ";
    cin >> a;
    cout << "Enter the ending number (b): ";
    cin >> b;

    // Calculate the midpoint of the range
    int midpoint = (a + b) / 2;

    cout << "Comparing numbers from " << a << " to " << b << " with midpoint " << midpoint << ":" << endl;

    // Iterate through the range using a while loop
    int current = a;
    while (current <= b) {
        if (current < midpoint) {
            cout << current << " is less than the midpoint." << endl;
        } else if (current > midpoint) {
            cout << current << " is greater than the midpoint." << endl;
        } else {
            cout << current << " is equal to the midpoint." << endl;
        }
        current++;
    }

    return 0;
}
