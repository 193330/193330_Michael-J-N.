Q8.
#include <iostream>//Preprocessor directive enables use of input&output.
using namespace std;//Enables use of variables in the std library.

int main() {//Function executes allm within the curly brackets.

    //Variable initialization and declaration
    double purchaseAmount;
    double totalCost = 0.0;
    double discount = 0.0;

    // Entering the amount purchased
    cout << "Enter amount of purchase: KES ";
    cin >> purchaseAmount;

    // Discount on the amount purchased
    if (purchaseAmount >= 100 && purchaseAmount < 500) {
        discount = 0.1; // 10% discount applied
    } else if (purchaseAmount >= 500 && purchaseAmount < 1000) {
        discount = 0.2; // 20% discount applied
    } else if (purchaseAmount >= 1000) {
        discount = 0.3; // 30% discount applied
    } else {
        discount = 0.0; // No discount appplicable
    }

    // Calculation of the total cost after applying discount
    totalCost = purchaseAmount - (purchaseAmount * discount);

    // Display total cost of the purchase
    cout << "Total cost after discount: KES " << totalCost << "\n";

    return 0;
}Execution ended