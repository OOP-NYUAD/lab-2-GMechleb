// Create a C++ class for a bank account following the given specifications.
// You need to complete the 'Account' class in this 'account.h' file.
// The 'Account' class should include the following:
// 1. A private member variable 'balance' of type double to store the account balance.
// 2. Public constructors:
//    a. A default constructor that initializes 'balance' to 0.
//    b. A parameterized constructor that takes an initial balance as an argument.
// 3. Public member functions:
//    a. Getter function 'getBalance' to return the current balance.
//    b. Setter function 'setBalance' to set the balance to a new value.
//    c. Function 'deposit' that takes an amount and adds it to the balance.
//    d. Function 'withdraw' that takes an amount and subtracts it from the balance.
// 4. A destructor that displays a message like "Account with balance <balance_value> is being destroyed."
 using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
private:
    // Private member variable to store the balance.
    double balance;

public:
    Account() // Default constructor.
    { balance = 0; };   // Initialize 'balance' to 0.
    // TODO: Implement the default constructor.

    // Parameterized constructor.
    Account(double initialBalance)
    { balance=initialBalance; };// Initialize 'balance' with the provided 'initialBalance'.
    // TODO: Implement the parameterized constructor.

    double getBalance() // Getter function to return the current balance.
    { return balance;   }  // TODO: Implement the 'getBalance' function.

    void setBalance(double NewBalance)  // Setter function to set the balance to a new value.
    { balance = NewBalance; } // TODO: Implement the 'setBalance' function.

    void deposit(double Amount) // Function to deposit an amount into the account.
    { balance += Amount; } // TODO: Implement the 'deposit' function.

    void withdraw(double Amount)    // Function to withdraw an amount from the account.
    {   if(Amount>balance)
        {
            cout<<"Insufficient funds!\n";
        }
        else {balance -= Amount;} 
    } // TODO: Implement the 'withdraw' function.

    ~Account()  // Destructor.
    {  cout << "Account with balance "<< balance <<" is being destroyed.\n"; }; // Display a message indicating the account is being destroyed
    // TODO: Implement the destructor.
};

#endif // ACCOUNT_H
