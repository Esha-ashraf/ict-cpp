#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    string result = (number % 2 == 0) ? "The number is Even." : "The number is Odd.";
    cout << result << endl;
    cout << "Test Cases:" << endl;
    cout << "Input: number = 4\nOutput: " << ((4 % 2 == 0) ? "The number is Even." : "The number is Odd.") << endl;
    cout << "Input: number = 7\nOutput: " << ((7 % 2 == 0) ? "The number is Even." : "The number is Odd.") << endl;
    cout << "Input: number = 0\nOutput: " << ((0 % 2 == 0) ? "The number is Even." : "The number is Odd.") << endl;
    cout << "Input: number = -8\nOutput: " << ((-8 % 2 == 0) ? "The number is Even." : "The number is Odd.") << endl;
    cout << "Input: number = -5\nOutput: " << ((-5 % 2 == 0) ? "The number is Even." : "The number is Odd.") << endl;

    return 0;
}
