#include <iostream>
#include <string>
using namespace std;

int main() {
    // Constants
    const int maxSeats = 3;
    const int maxMarks = 1000;

    // Student variables
    string studentName;
    string studentEmail;
    string studentCnic;
    string appliedProgram;
    string studentStatus;
    string studentRejectionReason;
    int studentPreviousMarks;
    bool studentApplied = false;

    // Admin credentials
    const string adminUsername = "admin";
    const string adminPassword = "password";

    // Program details
    string program1Name = "BS AI";
    int program1MinEligibility = 600, program1AvailableSeats = maxSeats;

    string program2Name = "BS SE";
    int program2MinEligibility = 700, program2AvailableSeats = maxSeats;

    string program3Name = "BS CS";
    int program3MinEligibility = 800, program3AvailableSeats = maxSeats;

    int choice;

    // Main Menu
    while (true) {
        cout << "\nUniversity Admission Management System\n";
        cout << "1. Admin login\n";
        cout << "2. Student login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        // Admin Login
        if (choice == 1) {
            string enteredUsername, enteredPassword;
            cout << "Enter Admin Username: ";
            cin >> enteredUsername;
            cout << "Enter Admin Password: ";
            cin >> enteredPassword;

            if (enteredUsername == adminUsername && enteredPassword == adminPassword) {
                cout << "Admin Login Successful.\n";
                int adminChoice;
                cout << "1. View Programs\n2. View Application Status\n3. Logout\n";
                cout << "Enter your choice: ";
                cin >> adminChoice;

                if (adminChoice == 1) {
                    cout << "\nPrograms Available:\n";
                    cout << program1Name << " (Eligibility: " << program1MinEligibility 
                         << ", Seats: " << program1AvailableSeats << ")\n";
                    cout << program2Name << " (Eligibility: " << program2MinEligibility 
                         << ", Seats: " << program2AvailableSeats << ")\n";
                    cout << program3Name << " (Eligibility: " << program3MinEligibility 
                         << ", Seats: " << program3AvailableSeats << ")\n";
                } 
                else if (adminChoice == 2) {
                    if (studentApplied) {
                        cout << "\nApplication Status:\n";
                        cout << "Student Name: " << studentName << "\n";
                        cout << "Applied Program: " << appliedProgram << "\n";
                        cout << "Status: " << studentStatus << "\n";
                        if (studentStatus == "Rejected") {
                            cout << "Reason: " << studentRejectionReason << "\n";
                        }
                    } else {
                        cout << "No applications submitted yet.\n";
                    }
                } 
                else {
                    cout << "Logging out...\n";
                }
            } else {
                cout << "Invalid credentials. Try again.\n";
            }
        } 
        // Student Login
        else if (choice == 2) {
            cout << "Enter your Name:\n";
            cin >> studentName;

            cout << "Enter your Email:\n";
            cin >> studentEmail;

            cout << "Enter your CNIC:\n";
            cin >> studentCnic;

            cout << "Enter your Previous Marks (out of 1000): ";
            cin >> studentPreviousMarks;

            cout << "\nAvailable Programs:\n";
            cout << "1. " << program1Name << " (Eligibility: " << program1MinEligibility 
                 << ", Seats: " << program1AvailableSeats << ")\n";
            cout << "2. " << program2Name << " (Eligibility: " << program2MinEligibility 
                 << ", Seats: " << program2AvailableSeats << ")\n";
            cout << "3. " << program3Name << " (Eligibility: " << program3MinEligibility 
                 << ", Seats: " << program3AvailableSeats << ")\n";

            int programChoice;
            cout << "Enter your Program Preference (1, 2, or 3): ";
            cin >> programChoice;

            // Check eligibility and seat availability
            if (programChoice == 1) {
                appliedProgram = program1Name;
                if (studentPreviousMarks >= program1MinEligibility && program1AvailableSeats > 0) {
                    studentStatus = "Accepted";
                    program1AvailableSeats--;
                } else {
                    studentStatus = "Rejected";
                    studentRejectionReason = (studentPreviousMarks < program1MinEligibility)
                                             ? "Does not meet eligibility criteria."
                                             : "No seats available.";
                }
            } 
            else if (programChoice == 2) {
                appliedProgram = program2Name;
                if (studentPreviousMarks >= program2MinEligibility && program2AvailableSeats > 0) {
                    studentStatus = "Accepted";
                    program2AvailableSeats--;
                } else {
                    studentStatus = "Rejected";
                    studentRejectionReason = (studentPreviousMarks < program2MinEligibility)
                                             ? "Does not meet eligibility criteria."
                                             : "No seats available.";
                }
            } 
            else if (programChoice == 3) {
                appliedProgram = program3Name;
                if (studentPreviousMarks >= program3MinEligibility && program3AvailableSeats > 0) {
                    studentStatus = "Accepted";
                    program3AvailableSeats--;
                } else {
                    studentStatus = "Rejected";
                    studentRejectionReason = (studentPreviousMarks < program3MinEligibility)
                                             ? "Does not meet eligibility criteria."
                                             : "No seats available.";
                }
            } 
            else {
                appliedProgram = "Invalid Program";
                studentStatus = "Rejected";
                studentRejectionReason = "Invalid program choice.";
            }

            // Output result
            studentApplied = true;
            cout << "\nApplication Status: " << studentStatus << "\n";
            if (studentStatus == "Rejected") {
                cout << "Reason: " << studentRejectionReason << "\n";
            }
        } 
        else if (choice == 3) {
            cout << "Exiting the system.\n";
            break;
        } 
        else {
            cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}