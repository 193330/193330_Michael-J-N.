//Q10.CAT2
#include <iostream>//executes within the curly brackets
using namespace std;//Enables us names and variable use

int main() {//Executes all within the curly bracket
    // User's account details (balance and daily withdrawal limit)
    double account_balance = 1500.0;
    double daily_limit = 500.0;

    // Variables to store user input and withdrawal amount
    double withdrawal_amount;
    
    // Prompt user to enter withdrawal amount
    cout << "Enter the amount to withdraw: \n";
    cin >> withdrawal_amount;
    
    // Check if withdrawal amount exceeds daily limit
    if (withdrawal_amount > daily_limit) {
        cout << "Withdrawal amount exceeds daily limit of $" << daily_limit << "\n";
    } 
    // Check if withdrawal amount exceeds account balance
    else if (withdrawal_amount > account_balance) {
        cout << "Insufficient funds. Current balance is $" << account_balance << "\n";
    } 
    // Process withdrawal if all conditions are met
    else {
        // Deduct withdrawal amount from account balance
        account_balance -= withdrawal_amount;
        cout << "Withdrawal successful. Remaining balance is $" << account_balance << "\n";
    }
    
    return 0;
}//Executes within the curly brackets.
