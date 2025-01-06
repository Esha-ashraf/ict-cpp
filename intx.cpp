#include <iostream>
using namespace std;

int main() {
    int x, end;

    // Asking the user for the input
    cout << "Enter a number: ";
    cin >> x;

    // Ensure x is greater than 0
    if (x > 0) {
        cout << "Enter where to end the table : ";
        cin >> end;

        cout << "Multiplication table for " << x << " up to " << end << ":\n";
        for (int i = 1; i <= end; ++i) {
            cout << x << " * " << i << " = " << x * i << endl;
        }
    } else {
        // Handle invalid input
        cout << "Please enter a number greater than 0." << endl;
    }

    return 0;
}
