#include <iostream>
using namespace std;
int main() {
    int number;
    // Input the number
    cout << "Enter a number: ";
    cin >> number;
    // Use the ternary operator to check odd or even
    cout << ((number % 2 == 0) ? "The number is Even." : "The number is Odd.") << endl;
    return 0;
}