#include <iostream>
using namespace std;
int main() {
    // Declare the variable n
    int n;
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Check if the number is even or odd using an if-else statement
        if (i % 2 == 0) {
            cout << i << " is even." << endl;
        } else {
            cout << i << " is odd." << endl;
        }
    }

    return 0;
}
