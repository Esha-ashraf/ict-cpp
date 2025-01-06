#include <iostream>
using namespace std;
int main() {
    int scoreMaths, scoreEnglish;
    // Input marks for Maths and English with validation
    cout << "Enter student marks in Maths: ";
    cin >> scoreMaths;
    cout << "Enter student marks in English: ";
    cin >> scoreEnglish;
    // Calculate total marks and percentage
    int totalMarks = scoreMaths + scoreEnglish;
    float percentage = (totalMarks / 200) * 100; 

    if (percentage >= 90) {
        cout << "You are eligible for Scholarship." << endl;
    } else {
        cout << "You are not eligible for Scholarship." << endl;
    }
    return 0;
} 
