#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt the user to input a number
    cout << "Enter a number (n): ";
    cin >> n;
    // Checking no n is divisible by 3 or not
    if (n <= 0) {
        cout << "No numbers to process." << endl;
    } else {
        int count = 0;

        cout << "Numbers divisible by 3 between 1 and " << n << ":" << endl;
        for (int i = 1; i <= n; ++i) {
            if (i % 3 == 0) {
                cout << i << " ";
                ++count;
            }
        }

        cout << endl << "Count = " << count << endl;
    }

    return 0;
}
