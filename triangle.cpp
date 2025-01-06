#include <iostream>
using namespace std;
int main() {
    double a, b, c; 
    // Prompt user for input
    cout << "Insert the length of Side A of the triangle: ";
    cin >> a;
    cout << "Insert the length of Side B of the triangle: ";
    cin >> b;
    cout << "Insert the length of Side C of the triangle: ";
    cin >> c;
    // Check for invalid input
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid Triangle. Sides must be greater than 0." << endl;
    } 
    // Check the type of triangle
    else if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    } 
    // Check Invalid triangle
    else {
        cout << "Invalid Triangle. The sides do not satisfy the triangle inequality theorem." << endl;
    }
    return 0;
}
