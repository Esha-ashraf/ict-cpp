#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter number1=";
    cin>>a;
    cout << "Enter number2=";
    cin>>b;
    cout << "Enter number3=";
    cin>>c;
    b = b + c;
    b = a * b;
    a = a + c;
    a = c * a;
    cout << "answer is ="<<c;
    return 0;
}
