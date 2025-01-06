#include <iostream>
using namespace std;
int main() {
    string studentName;
    int subject1, subject2, subject3, subject4, subject5;
    int totalMarks = 500;
    int obtainedMarks;
    float percentage;
    cout << "Enter the student's name (single word): ";
    cin >> studentName;
    cout << "Enter subject 1 marks: ";
    cin >> subject1;
    cout << "Enter subject 2 marks: ";
    cin >> subject2;
    cout << "Enter subject 3 marks: ";
    cin >> subject3;
    cout << "Enter subject 4 marks: ";
    cin >> subject4;
    cout << "Enter subject 5 marks: ";
    cin >> subject5;
    obtainedMarks = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (float(obtainedMarks) / totalMarks) * 100;
    cout << "Total Obtained Marks: " << obtainedMarks << " out of " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    return 0;
}