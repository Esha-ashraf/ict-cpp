#include <iostream>
using namespace std;
int main(){
    string name;
    cout<<"Student name"<<endl;
    cin>>name;

    string email;
    cout<<"Student email address"<<endl;
    cin>>email;

    string programPreference;
    cout<<"Student program preference"<<endl;
    cin>>programPreference;

    int previousRecord;
    cout<<"Student previous record"<<endl;
    cin>>previousRecord;

    if (previousRecord >= 50){
        cout << "You are eligible for a seat"<<endl;
        
        float Preference1;
        cout << "Enter your marks for BSCS criteria (Minimum 90 required):"<<endl;
        cin >> Preference1;
        
        if (Preference1 >= 90) {
            cout << "Admission status: Allocated in BSCS"<<endl;
        }else {
            cout << "Not allocated in BSCS due to merit"<<endl;
            
            float Preference2;
            cout << "Enter your marks for SE criteria (Minimum 80 required): ";
            cin >> Preference2;
            
            if (Preference2 >= 80) {
                cout << "Admission status: Allocated in BSSE."<<endl;
            } else {
                cout << "Not allocated in BSSE due to merit"<<endl;;
                
                float Preference3;
                cout << "Enter your marks for IT criteria (Minimum 70 required): "<<endl;
                cin >> Preference3;
                
                if (Preference3 >= 70) {
                    cout << "Admission status: Allocated in BSIT"<<endl;
                } else {
                    cout << "Not allocated in BSIT due to merit."<<endl;;
                }
            }
        }
    } else {
        cout << "You are not eligible for a seat due to low merit";
    }
    
return 0;
}