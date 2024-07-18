Q4.
#include <iostream>//Preprocessor directive
using namespace std; enables use of numbers and variables
int main() {Executes within the brackets
    //Variable declaration
    int num1, num2;

    // Asking user for input
    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;

    // Calculate difference between num1 and num2
    int diff = num1 - num2;

    switch(diff > 0) {
        case true:
            cout << "The maximum number is: " << num1 << "\n";
            break;
        case false:
            switch(diff < 0) {
                case true:
                    cout << "The maximum number is: " << num2 <<"\n";
                    break;
                case false:
                    cout << "Both numbers are equal." << "\n";
                    break;
            }
            break;
    }

    return 0;
}
