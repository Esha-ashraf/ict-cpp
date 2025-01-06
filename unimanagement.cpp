#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX_SEATS = 3;    // Max seats for each program
    const int MAX_STUDENTS = 5; // Maximum number of students

    // Student data arrays
    string studentNames[MAX_STUDENTS];
    string studentEmails[MAX_STUDENTS];
    int studentNumbers[MAX_STUDENTS];
    string studentCnics[MAX_STUDENTS];
    short studentMarks[MAX_STUDENTS];
    string appliedPrograms[MAX_STUDENTS];
    string studentStatuses[MAX_STUDENTS];
    string studentRejectionReasons[MAX_STUDENTS];

    // Program data
    string programs[3] = {"Program 1", "Program 2", "Program 3"};
    short programEligibilities[3] = {600, 700, 850};
    short programSeats[3] = {MAX_SEATS, MAX_SEATS, MAX_SEATS};

    // Display program information
    cout << left << setw(20) << "Programs" << setw(10) << "Seats" << endl;
    for (int i = 0; i < 3; i++) {
        cout << left << setw(20) << programs[i] << setw(10) << programSeats[i] << endl;
    }

    int choice, studentIndex = 0; 
   
    while (true)
    {
        cout << "\nUniversity Admission Management System\n";
        cout << "1. Admin login\n";
        cout << "2. Student login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            // Admin Login
            string username, password;
            cout << "Enter Admin Username: ";
            cin >> username;
            cout << "Enter Admin Password: ";
            cin >> password;

            if (username == "admin" && password == "password")
            {
                cout << "Admin Login Successful.\n";
                cout << "Programs Information:\n";
                for (int i = 0; i < 3; i++)
                {
                    cout << i + 1 << ". " << programs[i]
                         << " (Eligibility: " << programEligibilities[i]
                         << ", Seats: " << programSeats[i] << ")\n";
                }
            }
            else
            {
                cout << "Invalid Admin credentials.\n";
            }
        }
        else if (choice == 2)
        {
            if (studentIndex >= MAX_STUDENTS)
            {
                cout << "Maximum student capacity reached.\n";
                continue;
            }

            // Student Login
            cout << "Enter your Name: ";
            cin >> studentNames[studentIndex];
            cout << "Enter your Email: ";
            cin >> studentEmails[studentIndex];
            cout << "Enter your Phone Number: ";
            cin >> studentNumbers[studentIndex];
            cout << "Enter your CNIC: ";
            cin >> studentCnics[studentIndex];
            cout << "Enter your Previous Marks (out of 1000): ";
            cin >> studentMarks[studentIndex];

            // Display available programs
            cout << "Available Programs:\n";
            for (int i = 0; i < 3; i++)
            {
                cout << i + 1 << ". " << programs[i]
                     << " (Eligibility: " << programEligibilities[i]
                     << ", Seats: " << programSeats[i] << ")\n";
            }

            cout << "Enter your Program Preference (1, 2, or 3): ";
            cin >> choice;

            if (choice >= 1 && choice <= 3)
            {
                appliedPrograms[studentIndex] = programs[choice - 1];
                if (studentMarks[studentIndex] >= programEligibilities[choice - 1] && programSeats[choice - 1] > 0)
                {
                    studentStatuses[studentIndex] = "Accepted";
                    programSeats[choice - 1]--;
                }
                else if (studentMarks[studentIndex] < programEligibilities[choice - 1])
                {
                    studentStatuses[studentIndex] = "Rejected";
                    studentRejectionReasons[studentIndex] = "Does not meet eligibility criteria.";
                }
                else
                {
                    studentStatuses[studentIndex] = "Rejected";
                    studentRejectionReasons[studentIndex] = "Seats are not available.";
                }
            }
            else
            {
                studentStatuses[studentIndex] = "Rejected";
                studentRejectionReasons[studentIndex] = "Invalid program choice.";
            }

            // Output student's application status
            cout << "Application Status: " << studentStatuses[studentIndex];
            if (studentStatuses[studentIndex] == "Rejected")
            {
                cout << " (" << studentRejectionReasons[studentIndex] << ")\n";
            }

            studentIndex++;
        }
        else if (choice == 3)
        {
            cout << "Exiting the system.\n";
            break;
        }
        else   
        {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
