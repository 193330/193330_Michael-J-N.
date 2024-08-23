//Q2.
#include <iostream>//enables the use of the input&output
#include <string>//use the string class library

using namespace std;//for use of standard libray and variables

int main() {//executes all within the curly brackets
//Variable initialization and declaration.
    string fullName, course;
    int score;

    // Key in the student info
    cout << "Enter the full name of the student: ";
    getline(cin, fullName); // reading the full name with spaces
    cout << "Enter the course: ";
    getline(cin, course); // Read the course with spaces
    cout << "Enter the score: ";
    cin >> score; // Reading the score

    // Calculate the grade from score
    string grade;
    if (score >= 70 && score <= 100) {
        grade = "A"; // Grade A for scores between 70 and 100
    } else if (score >= 60 && score < 70) {
        grade = "B"; // Grade B for scores between 60 and 69
    } else if (score >= 50 && score < 60) {
        grade = "C"; // Grade C for scores between 50 and 59
    } else if (score >= 40 && score < 50) {
        grade = "D"; // Grade D for scores between 40 and 49
    } else if (score >= 0 && score < 40) {
        grade = "F"; // Grade F for scores below 40
    } else {
        grade = "Invalid score"; // any score outside the valid range,negative score.
    }

    // Result output
    cout << "Student Name: " << fullName << "\n";
    cout << "Course: " << course << "\n";
    cout << "Score: " << score << "\n";
    cout << "Grade: " << grade << "\n";

    return 0;
}//end of execution
