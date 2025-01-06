#include <iostream>
using namespace std;

int main() {
    //Accept a number as input from the user
    int number;
    cout << "Enter a number: ";
    cin >> number;

    //Initialize variables for reversed number and sum of digits
    int reversedNumber = 0;
    int sumOfDigits = 0;
    int originalNumber = number;  

    // Step 3: Use a while loop to extract digits
    while (number > 0) {
        int digit = number % 10;  
        reversedNumber = reversedNumber * 10 + digit; 
        sumOfDigits += digit;  
        number /= 10; 
    }

    // Step 4: Display the reversed number and the sum of digits
    cout << "The reversed number is: " << reversedNumber << endl;
    cout << "The sum of the digits is: " << sumOfDigits << endl;
    return 0;
}

