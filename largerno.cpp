#include <iostream>
using namespace std;
    int main(){
    int number1, number2;
    cout<<"Enter your first number="<<endl;
    cin>>number1;
    cout<<"Enter your second number="<<endl;
    cin>>number2;
    if(number1>number2){
        cout<<"The largest number is"<<number1<<endl;
    }else if(number2>number1){
        cout<<"The largest number is"<<number2<<endl;
    }else{
         cout<<"both numbers are equal"<<endl;
    }
  