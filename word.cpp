#include <iostream>
using namespace std;
    int main(){
    string word1, word2;
    cout<<"Enter the first word="<<endl;
    cin>>word1;
    cout<<"Enter the second word="<<endl;
    cin>>word2;
    if(word1==word2){
        cout<<"Yes, the word are same"<<endl;
    }else{
        cout<<"No, the word are different"<<endl;
    }
    return 0;
}