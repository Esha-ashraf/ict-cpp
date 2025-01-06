#include <iostream>
#include <string>
using namespace std;

// Define constants for limits
const int MAX_PROGRAMS = 3;
const int MAX_STUDENTS = 5;

int main() {
    string programNames[MAX_PROGRAMS];
    short programMaxSeats[MAX_PROGRAMS];
    short programMinEligibility[MAX_PROGRAMS];
    short programAvailableSeats[MAX_PROGRAMS];

    string studentNames[MAX_STUDENTS];
    string studentEmails[MAX_STUDENTS];
    string studentPhones[MAX_STUDENTS];
    string studentCNICs[MAX_STUDENTS];
    short studentMarksObtained[MAX_STUDENTS];
    short studentTotalMarks[MAX_STUDENTS];
    short studentPercentages[MAX_STUDENTS];
    string studentPreferredPrograms[MAX_STUDENTS][2];
    string studentAdmissionStatus[MAX_STUDENTS];
    string studentRejectionReason[MAX_STUDENTS];

    int programCount = 0;
    int studentCount = 0;

    int choice = 0;
    cout << "--- University Admission Management System ---\n";
    cout << "1. Login as Admin\n";
    cout << "2. Apply as Student\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        string username, password;
        cout << "\n--- Admin Login ---\n";
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == "admin" && password == "admin123") {
            cout << "Login successful!\n";

            int adminChoice;
            cout << "\n--- Admin Dashboard ---\n";
            cout << "1. Add a New Program\n";
            cout << "2. View Application Statuses\n";
            cout << "Enter your choice: ";
            cin >> adminChoice;

            if (adminChoice == 1) {
                if (programCount >= MAX_PROGRAMS) {
                    cout << "Program limit reached. Cannot add more programs.\n";
                } else {
                    cout << "\n--- Add a New Program ---\n";
                    cout << "Enter program name: ";
                    cin >> programNames[programCount];
                    cout << "Enter maximum seats: ";
                    cin >> programMaxSeats[programCount];
                    cout << "Enter minimum eligibility percentage: ";
                    cin >> programMinEligibility[programCount];

                    programAvailableSeats[programCount] = programMaxSeats[programCount];
                    programCount++;

                    cout << "Program added successfully!\n";
                }
            } else if (adminChoice == 2) {
                if (studentCount == 0) {
                    cout << "No applications to show.\n";
                } else {
                    for (int i = 0; i < studentCount; i++) {
                        cout << "\n--- Application Status ---\n";
                        cout << "Name: " << studentNames[i] << "\n";
                        cout << "Status: " << studentAdmissionStatus[i] << "\n";
                        if (studentAdmissionStatus[i] == "Rejected") {
                            cout << "Reason: " << studentRejectionReason[i] << "\n";
                        }
                    }
                }
            }
        } else {
            cout << "Invalid credentials.\n";
        }
    } else if (choice == 2) {
        if (studentCount >= MAX_STUDENTS) {
            cout << "Student limit reached. Cannot accept more applications.\n";
        } else {
            cout << "\n--- Student Application Form ---\n";
            cout << "Enter your name: ";
            cin >> studentNames[studentCount];
            cout << "Enter your email: ";
            cin >> studentEmails[studentCount];
            cout << "Enter your phone number: ";
            cin >> studentPhones[studentCount];
            cout << "Enter your CNIC: ";
            cin >> studentCNICs[studentCount];
            cout << "Enter your marks obtained: ";
            cin >> studentMarksObtained[studentCount];
            cout << "Enter total marks: ";
            cin >> studentTotalMarks[studentCount];

            studentPercentages[studentCount] = (studentMarksObtained[studentCount] * 100) / studentTotalMarks[studentCount];

            cout << "Select your preferred programs:\n";
            for (int i = 0; i < programCount; i++) {
                cout << i + 1 << ". " << programNames[i] << "\n";
            }
            cout << "Enter your 1st Preference: ";
            cin >> studentPreferredPrograms[studentCount][0];
            cout << "Enter your 2nd Preference: ";
            cin >> studentPreferredPrograms[studentCount][1];

            int admitted = 0;
            for (int i = 0; i < programCount; i++) {
                if (programNames[i] == studentPreferredPrograms[studentCount][0] &&
                    studentPercentages[studentCount] >= programMinEligibility[i] &&
                    programAvailableSeats[i] > 0) {

                    studentAdmissionStatus[studentCount] = "Accepted";
                    programAvailableSeats[i]--;
                    admitted = 1;
                    break;
                }
            }

            if (admitted == 0) {
                studentAdmissionStatus[studentCount] = "Rejected";
                studentRejectionReason[studentCount] = "Does not meet eligibility or no seats available.";
            }

            cout << "\n--- Admission Status ---\n";
            if (studentAdmissionStatus[studentCount] == "Accepted") {
                cout << "Congratulations " << studentNames[studentCount] << "! You have been accepted.";
            } else {
                cout << "Sorry " << studentNames[studentCount] << ", your application was rejected. Reason: " << studentRejectionReason[studentCount];
            }
            cout << "\n";
            studentCount++;
        }
    } else {
        cout << "Exiting the system. Goodbye!\n";
    }

    return 0;
}