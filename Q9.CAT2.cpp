//Q9.
#include <iostream>//Preprocessor directives for the use of the input/output
using namespace std;//Enables usage of names&Variables in std library

int main() {//executes within the curly brackets
//Variable declaration
    int age;
    char movieType;
    double ticketPrice;

    // Input age of the customer
    cout << "Enter your age: ";
    cin >> age;

    // Input type of movie ('R' for regular, '3' for 3D)
    cout << "Enter type of movie (R for Regular, 3 for 3D): ";
    cin >> movieType;

    // Determine ticket price based on age and movie type
    if (age < 0 || age > 120) {
        cout << "Invalid age entered.\n";
    } else if (movieType == 'R') {
        // Regular movie prices based on age
        if (age < 18) {
            ticketPrice = 8.0; // Price for under 18
        } else {
            ticketPrice = 10.0; // Price for 18 and older
        }
    } else if (movieType == '3') {
        // 3D movie prices based on age
        if (age < 18) {
            ticketPrice = 10.0; // Price for under 18
        } else {
            ticketPrice = 12.0; // Price for 18 and older
        }
    } else {
        cout << "Invalid movie type entered.\n";
        return 1; // Exit program with error
    }

    // Output the ticket price
    cout << "Ticket price: $" << ticketPrice << "\n";

    return 0;
} end of execution within the curly brackets
