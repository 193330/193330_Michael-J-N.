//simple C++ application to check if a customer is qualified for a loan.
#include <iostream>//Header file which enables us work with output&input
#include <string>//string file that enables us to input text 
using namespace std;//Enables usage of names&Variables in std library.

int main() //Its a function that executes all inside the curly brackets.
{
    //Variable declaration and initialization
    int age;
    double bankBalance;
    bool goodCRB;
    int monthsAsCustomer;
    string name;

    //Customer inputs
    cout<<"Please enter the customer name\n";
    getline(cin,name);
    cout<<"Enter customer age\n";
    cin>>age;
    cout<<"Enter your bank balance\n";
    cin>>bankBalance;
    cout<<"Whats your CRB status? (1 for good,0 for not good)\n";
    cin>>goodCRB;
    cout<<"Enter months as customer\n";
    cin>>monthsAsCustomer;
    
    //Check customer loan qualification.
    if(age > 22 && bankBalance > 50000 && goodCRB && monthsAsCustomer > 6)
    {
    cout<<name <<"Congratulation loan applcation was successfull\n";
    }
    else
    {
        cout << name <<"Loan Application unsuccessful\n";
    }
        
return 0;
}