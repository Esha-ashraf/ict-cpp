#include <iostream>
using namespace std;
int main(){
    int vi , acceleration , time , vf;
    cout<<"vi of car"<<endl;
    cin>>vi;
    cout<<"time taken by car"<<endl;
    cin>>time;
    cout<<"acceleration of car"<<endl;
    cin>>acceleration;
    vf=vi+acceleration*time;
    cout<<"vf of car"<<vf<<endl;
    return 0;
}