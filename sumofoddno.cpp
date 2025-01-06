#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter a number N: ";
    cin >> n;

    // Loop through numbers from 1 to N
    for (int i = 1; i <= n; ++i) {
        // Check if the number is odd
        if (i % 2 != 0) {
            sum += i; // Add the odd number to the sum
        }
    }

    cout << "Sum of odd numbers between 1 and " << n << " is: " << sum << endl;

    return 0;
}
 