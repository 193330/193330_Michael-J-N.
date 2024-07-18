//Q7.
#include <iostream>//Library for the use of the output/input operations
using namespace std;//Enables use of the standard library and variables

int main() {//Executes all within the curly brackets
    //  constants for fees
    const double REGULAR_FINE_RATE = 0.50;    // Fine rate applied for regular books per day.
    const double CHILDRENS_FINE_RATE = 0.25;  // Fine rate applied for children books per day.
    const double REFERENCE_FINE_RATE = 1.00;   // Fine rate applied for reference books per day.

    // Variables initialization and declaration
    int daysLate;
    char bookType;
    double fineAmount = 0.0;

    // enter input
    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    cout << "Enter the type of book (R for regular, C for children's, or F for reference): ";
    cin >> bookType;

    // Calculation of fine
    if (daysLate <= 0) {
        fineAmount = 0.0;  // No fine if not late
    } else {
        if (bookType == 'R') {
            fineAmount = daysLate * REGULAR_FINE_RATE;
        } else if (bookType == 'C') {
            fineAmount = daysLate * CHILDRENS_FINE_RATE;
        } else if (bookType == 'F') {
            fineAmount = daysLate * REFERENCE_FINE_RATE;
        } else {
            cout << "Invalid book type entered.\n";
            return 1;  // Exit program with error
        }
    }

    // Fine amount
    cout << "The fine amount for returning the book " << daysLate << " days late is: $" << fineAmount << "\n";

    return 0;
}//End of the execution.
