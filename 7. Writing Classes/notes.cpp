#include <iostream>
using std::cout;
using std::cin;

// object oriented programming

// objects are instances of a class

// keeping attributes in a class makes it easier to ensure that all attributes are changed/assigned

////////////////////////////////
// example
////////////////////////////////

//bank account: keep balance, vector of transations, deposit/withdraw functions, report functions to print info

// make a header file per class
// one cpp file per class
//  any code that uses the clas uses the header

class Account
{
    private: //private variables only used from member functions

        int balance;
        std::vector<Transaction> log;
    
    public:
        Account(); //Account is a constructor for the class

        std::vector<std::string> Report(); // report takes no parameters, returns a vector of strings

        bool Deposit(int amount); //Deposit and withdraw each take an integer and return a bool
        bool Withdraw(int amount);

        int GetBalance() {return balance;} //get balance is implemented inline
        

};
//report function
Account::Account() : balance(0){}
vector<string> Account::Report()
{
    vector<string> report;

    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");

    for (auto t:log)
    {
        report.push_bach(t.Report());
    }
    report.push_back("-----------------");
    return report;
}

bool Account::Deposit(int amount)
{
    if (amount <=0)
    {
        return false;
    }
    balance += amount;
    log.push_back(Transaction(amount, "Deposit"));
    return true;
}

bool Account::Withdraw(int amount)
{
    if (amount <=0)
    {
        return false;
    }
    if (balance >=amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        return true;
    }
    return false
}

//creating instances

