//  Q3.CAT 2 Assignment.
#include <iostream>  // Library for input/output operations
#include <string>    // Library for using the string class

using namespace std;

int main() {
    string fullName, course;
    float score;

    // Input student information
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);  // Get the full name of the student
    cout << "Enter the course: ";
    getline(cin, course);  // Get the course name
    cout << "Enter the score: ";
    cin >> score;  // Get the score

    // Convert score to an integer for switch case
    int scoreInt = static_cast<int>(score) / 10;  // Convert score to an integer and divide by 10

    // Determine the grade based on the score
    string grade;
    switch(scoreInt) {
        case 0:   // If the score is between 0 and 9
        case 1:   // If the score is between 10 and 19
        case 2:   // If the score is between 20 and 29
        case 3:   // If the score is between 30 and 39
            if (score >= 0) {
                grade = "F";  // Assign grade F
            } else {
                grade = "Invalid score";  // Handle negative scores
            }
            break;
        case 4:   // If the score is between 40 and 49
            grade = "D";  // Assign grade D
            break;
        case 5:   // If the score is between 50 and 59
            grade = "C";  // Assign grade C
            break;
        case 6:   // If the score is between 60 and 69
            grade = "B";  // Assign grade B
            break;
        case 7:   // If the score is between 70 and 79
        case 8:   // If the score is between 80 and 89
        case 9:   // If the score is between 90 and 99
        case 10:  // If the score is between 100 and 100
            grade = "A";  // Assign grade A
            break;
        default:
            grade = "Invalid score";  // Handle scores above 100
            break;
    }

    // Output the result
    cout << "Student Name: " << fullName << "\n";
    cout << "Course: " << course << "\n";
    cout << "Score: " << score << "\n";
    cout << "Grade: " << grade << "\n";

    return 0;
}
