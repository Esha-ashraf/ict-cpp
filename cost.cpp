#include <iostream>
using namespace std;
int main() {
    int cost;
    cout << "Enter the cost of dress: ";
    cin >> cost;
    if(cost<1500){
        cout<<"Buy the dress";
    }else{
        cout<<"Don't buy the dress";
    }
    return 0;
}

