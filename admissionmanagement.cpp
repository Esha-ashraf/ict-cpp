#include <iostream>
using namespace std;
int main(){
    // Declaring Varaibles
    int maxSeats = 3;
    int maxMarks = 1000;
    string studentName;
    cout << "Enter your name: ";
    cin >> studentName;
    string studentEmail;
    cout << "Enter your email: ";
    cin >> studentEmail;
    int studentNumber;
    cout << "Enter your phone number: ";
    cin >> studentNumber;
    string studentCnic;
    cout << "Enter your cnic number: ";
    cin >> studentCnic;
    string appliedProgram;
    cout << "Enter the name of program you want to apply: ";
    cin >> appliedProgram;
    string studentStatus;
    string studentRejectionReason;
    // enter username and password
    string username;
    cout << "Enter your username: ";
    cin >> username;
    string password;
    cout << "Enter your password: ";
    cin >> password;
    // enter program preference
    string program1Name = "Program 1";
    short program1MinEligibility = 600;
    short program1AvailableSeats = maxSeats;
    string program2Name = "Program 2";
    short program2MinEligibility = 700;
    short program2AvailableSeats = maxSeats;
    string program3Name = "Program 3";
    short program3MinEligibility = 850;
    short program3AvailableSeats = maxSeats;
    short studentPreviousMarks;
    int choice;
    // Main screen display
    cout << "University Admission Management System\n";
    cout << "1. Admin login\n";
    cout << "2. Student login\n";
    cout << "3. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    // Admin Login
    
    if (choice == 1){
        cout << "Enter Admin Username: ";
        cin >> username;
        cout << "Enter Admin Password: ";
        cin >> password;
        if (username == "admin" && password == "password"){
            cout << "Admin Login Successful.\n";
            cout << "1. Add Program\n";
            cout << "2. View Applicatition Status\n";
            cout << "3. Logout\n";
            cout << "Enter your choice: ";
            string adminChoice;
            cin >> adminChoice;
            if (adminChoice == program1Name){
                cout << "Enter Program Name: ";
                cin >> program1Name;
                cout << "Enter Minimum Eligibility Marks (out of 1000): ";
                cin >> program1MinEligibility;
                cout << "Program successfully added";
            }
            else if (adminChoice == program2Name) {
            string studentStatus = "Pending"; 
            cout << "Viewing application status for student:\n";
            cout << "Student Name: " << studentName << "\n";
            cout << "Applied Program: " << appliedProgram << "\n";
            cout << "Status: " << studentStatus;
            if (studentStatus == "Rejected") {
            cout << "Reason: Marks below minimum eligibility" << studentRejectionReason <<"\n";
            }
            }
        }
        else{
            cout << "Invalid Admin credentials.\n";
 // Apply as student
        }
    }else if (choice == 2)
        {
            cout << "Enter your Name: ";
            cin >> studentName;
            cout << "Enter your Email: ";
            cin >> studentEmail;
            cout << "Enter your Phone Number: ";
            cin >> studentNumber;
            cout << "Enter your CNIC: ";
            cin >> studentCnic;
            cout << "Enter your Previous Marks (out of 1000): ";
            cin >> studentPreviousMarks;
            // Display available programs manually
            cout << "Available Programs:\n";
            cout << "1. " << program1Name << "\n   Eligibility: " << program1MinEligibility << " marks\n   Seats: " << program1AvailableSeats << "\n";
            cout << "2. " << program2Name << "\n   Eligibility: " << program2MinEligibility << " marks\n   Seats: " << program2AvailableSeats << "\n";
            cout << "3. " << program3Name << "\n   Eligibility: " << program3MinEligibility << " marks\n   Seats: " << program3AvailableSeats << "\n";
            cout << "Enter your Program Preference (1, 2, or 3): ";
            cin >> choice;
            // Handle program selection and application status
            if (choice == 1)
            {
                appliedProgram = program1Name;
                if (studentPreviousMarks >= program1MinEligibility && program1AvailableSeats > 0){
                    studentStatus = "Accepted";
                    program1AvailableSeats--;
                }
                else if (studentPreviousMarks < program1MinEligibility)
                {
                    studentStatus = "Rejected";
                    studentRejectionReason = "Does not meet eligibility criteria.";
                }
                else
                {
                    studentStatus = "Rejected";
                    studentRejectionReason = "Seats are not available.";
                }
            }
            else if (choice == 2)
            {
                appliedProgram = program2Name;
                if (studentPreviousMarks >= program2MinEligibility && program2AvailableSeats > 0)
                {
                    studentStatus = "Accepted";
                    program2AvailableSeats--;
                }
                else if (studentPreviousMarks < program2MinEligibility)
                {
                    studentStatus = "Rejected";
                    studentRejectionReason = "Does not meet eligibility criteria.";
                }
                else
                {
                    studentStatus = "Rejected";
                    studentRejectionReason = "Seats are not available.";
                }
            }
            else if (choice == 3)
            {
                appliedProgram = program3Name;
                if (studentPreviousMarks >= program3MinEligibility && program3AvailableSeats > 0)
                {
                    studentStatus = "Accepted";
                    program3AvailableSeats--;
                }
                else if (studentPreviousMarks < program3MinEligibility)
                {
                    studentStatus = "Rejected";
                    studentRejectionReason = "Does not meet eligibility criteria.";
                }
                else
                {
                    studentStatus = "Rejected";
                    studentRejectionReason = "Seats are not available.";
                }
            }
            else
            {
                studentStatus = "Rejected";
                studentRejectionReason = "Invalid program choice.";
            }
            // Output student's application status
            cout << "Application Status: " << studentStatus;
            if (studentStatus == "Rejected"){
                cout << " " << studentRejectionReason << "\n";
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting the system.\n";
        }
        else
        {
            cout << "Invalid choice.\n";
        }
        return 0;
    }