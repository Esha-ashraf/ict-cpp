#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int number, digit, totalDigits = 0, evenDigits = 0, oddDigits = 0;
    
    // Prompt user to input a number
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if the number is negative, and make it positive if so
    if (number < 0) {
        number = -number;
    }
    
    // Use a while loop to extract and analyze each digit
    while (number > 0) {
        digit = number % 10;  // Get the last digit
        totalDigits++;        // Increment total digit count
        
        if (digit % 2 == 0) {
            evenDigits++;     // Increment even digit count
        } else {
            oddDigits++;      // Increment odd digit count
        }
        
        number = number / 10;  // Remove the last digit
    }
    
    // Output the results
    cout << "Total: " << totalDigits << endl;
    cout << "Even: " << evenDigits << endl;
    cout << "Odd: " << oddDigits << endl;

    return 0;
}

