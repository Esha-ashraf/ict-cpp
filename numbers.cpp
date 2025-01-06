#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, num4, num5;
    int num6, num7, num8, num9, num10;
    int num11, num12, num13, num14, num15;
    cout << "Enter 15 numbers:" << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cin >> num6 >> num7 >> num8 >> num9 >> num10;
    cin >> num11 >> num12 >> num13 >> num14 >> num15;
    int sum = num1 + num2 + num3 + num4 + num5;
    int product = num6 * num7 * num8 * num9 * num10;
    int subtraction = num11 - num12 - num13 - num14 - num15;
    int finalResult = (sum + product) - subtraction;
    cout << "The final result is: " << finalResult << endl;
    return 0;
}