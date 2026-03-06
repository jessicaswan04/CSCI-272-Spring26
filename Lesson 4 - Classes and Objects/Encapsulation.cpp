/*
Jessica Swan
CSCI 272(2)
Lesson 4
Encapsulation
March 05. 2026
*/

#include <iostream>
#include <string>
using namespace std;

/*
The username and password are private, so they cannot be accessed directly outside the class. Public functions are used to work with private data.
*/

class User
{
private:
    string username;
    string password;

public:
    //Constructor to give starting values
    User(const string& uname, const string& pwd)
    {
        username = uname;
        password = pwd;
    }

    //This function checks if the login information matches
    bool login(const string& inputUser, const string& inputPwd) const
    {
        return (inputUser == username) && (inputPwd == password);
    }

    //This function changes the password
    void updatePassword(const string& newPwd)
    {
        password = newPwd;
    }
};

/*
This class also shows encapsulation

The balance is private, so it must be changed through public functions such as deposit and withdraw.
*/

class BankAccount
{
private:
    double balance{0};

public:
    //Adds money to the balance
    void deposit(double amount)
    {
        balance += amount;
    }

    //Removes money only if there is enough balance
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
    }

    //Displays the current balance
    void displayBalance()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    User user1("jessica", "1234");

    if (user1.login("jessica", "1234"))
    {
        cout << "Login successful" << endl;
    }
    else
    {
        cout << "Login failed" << endl;
    }

    user1.updatePassword("abcd");

    if (user1.login("jessica", "abcd"))
    {
        cout << "Password updated successfully" << endl;
    }
    else
    {
        cout << "Password update failed" << endl;
    }

    cout << endl;

    BankAccount account1;

    account1.deposit(500);
    account1.displayBalance();

    account1.withdraw(200);
    account1.displayBalance();

    return 0;
}

/*
Reflection:
1. What I understood:
   I understood that encapsulation means keeping data and the functions that work with that data together. I also understood that private members protect important data from outside access.

2. Difficulties:
   At first I had to think carefully about why private variables cannot be used directly in main().

3. Research:
   I reviewed the Lesson 4 slides on encapsulation.

4. AI Usage:
   I used ChatGPT for comments and the private and public.

5. What I learned:
   I learned that encapsulation improves safety and organization and how class data is accessed and changed.
*/