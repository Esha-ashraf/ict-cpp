#include <iostream>
using namespace std;

int main() {
    // Declaring Variables
    const int maxSeats = 3; 
    const int maxMarks = 1100;
    int programChoice;
    int adminChoice;
    string studentName;
    string studentEmail;
    string studentPhoneNumber;
    string studentCNIC;
    string studentAppliedProgram;
    string studentStatus;
    string studentRejectionReason;
    string username, password;
    string program1Name = "Computer Science";
    short program1MinEligibility = 550;
    short program1AvailableSeats = maxSeats;
    string program2Name = "Electrical Engineering";
    short program2MinEligibility = 660;
    short program2AvailableSeats = maxSeats;
    string program3Name = "Business Administration";
    short program3MinEligibility = 770;
    short program3AvailableSeats = maxSeats;
    short studentPreviousMarks;
    int choice;

    // Main screen display
    cout << "University Admission Management System\n";
    cout << "1. Admin\n";
    cout << "2. Student\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: { // Admin Login
            cout << "Enter Admin Username: ";
            cin >> username;
            cout << "Enter Admin Password: ";
            cin >> password;

            if (username == "admin" && password == "password") {
                cout << "Admin Login Successful.\n";
                cout << "1. Add Program\n";
                cout << "2. View Application Status\n";
                cout << "3. Logout\n";
                cout << "Enter your choice: ";
                cin >> adminChoice;

                switch (adminChoice) {
                    case 1:
                        cout << "Enter Program Name: ";
                        cin >> program1Name;
                        cout << "Enter Minimum Eligibility Marks (out of 1100): ";
                        cin >> program1MinEligibility;
                        cout << "Program successfully added\n";
                        break;
                    case 2:
                        cout << "Viewing application status for student:\n";
                        cout << "Student Name: " << studentName << "\n";
                        cout << "Applied Program: " << studentAppliedProgram << "\n";
                        cout << "Status: " << studentStatus
                             << (studentStatus == "Rejected" ? " (" + studentRejectionReason + ")" : "") << "\n";
                        break;
                    case 3:
                        cout << "Logging out...\n";
                        break;
                    default:
                        cout << "Invalid Admin choice.\n";
                }
            } else {
                cout << "Invalid Admin credentials.\n";
            }
            break;
        }

        case 2: { // Apply as student
            cout << "Enter your Name: ";
            cin >> studentName;
            cout << "Enter your Email: ";
            cin >> studentEmail;
            cout << "Enter your Phone Number: ";
            cin >> studentPhoneNumber;
            cout << "Enter your CNIC: ";
            cin >> studentCNIC;
            cout << "Enter your Previous Marks (out of 1100): ";
            cin >> studentPreviousMarks;

            // Display available programs
            cout << "Available Programs:\n";
            cout << "1. " << program1Name << " (Eligibility: " << program1MinEligibility
                 << " marks, Seats: " << program1AvailableSeats << ")\n";
            cout << "2. " << program2Name << " (Eligibility: " << program2MinEligibility
                 << " marks, Seats: " << program2AvailableSeats << ")\n";
            cout << "3. " << program3Name << " (Eligibility: " << program3MinEligibility
                 << " marks, Seats: " << program3AvailableSeats << ")\n";
            cout << "Enter your Program Preference (1, 2, or 3): ";
            cin >> programChoice;

            // Handle program selection and application status
            switch (programChoice) {
                case 1:
                    studentAppliedProgram = program1Name;
                    if (studentPreviousMarks >= program1MinEligibility && program1AvailableSeats > 0) {
                        studentStatus = "Accepted";
                        program1AvailableSeats--;
                    } else if (studentPreviousMarks < program1MinEligibility) {
                        studentStatus = "Rejected";
                        studentRejectionReason = "Does not meet eligibility criteria.";
                    } else {
                        studentStatus = "Rejected";
                        studentRejectionReason = "No available seats.";
                    }
                    break;

                case 2:
                    studentAppliedProgram = program2Name;
                    if (studentPreviousMarks >= program2MinEligibility && program2AvailableSeats > 0) {
                        studentStatus = "Accepted";
                        program2AvailableSeats--;
                    } else if (studentPreviousMarks < program2MinEligibility) {
                        studentStatus = "Rejected";
                        studentRejectionReason = "Does not meet eligibility criteria.";
                    } else {
                        studentStatus = "Rejected";
                        studentRejectionReason = "No available seats.";
                    }
                    break;

                case 3:
                    studentAppliedProgram = program3Name;
                    if (studentPreviousMarks >= program3MinEligibility && program3AvailableSeats > 0) {
                        studentStatus = "Accepted";
                        program3AvailableSeats--;
                    } else if (studentPreviousMarks < program3MinEligibility) {
                        studentStatus = "Rejected";
                        studentRejectionReason = "Does not meet eligibility criteria.";
                    } else {
                        studentStatus = "Rejected";
                        studentRejectionReason = "No available seats.";
                    }
                    break;

                default:
                    studentStatus = "Rejected";
                    studentRejectionReason = "Invalid program choice.";
            }

            // Output student's application status
            cout << "Application Status: " << studentStatus;
            if (studentStatus == "Rejected") {
                cout << " (" << studentRejectionReason << ")";
            }
            cout << "\n";
            break;
        }

        case 3: // Exit
            cout << "Exiting the system...\n";
            break;

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
