/*
Jessica Swan
CSCI 272 (2)
Assignment 2 : Problem 3 - Receipt Calculator 
*/

#include <iostream>

using namespace std;

//Template function to calculate final receipt total
template <class T>
T receiptTotal(T amount, T taxPercent, T discountPercent, T tipPercent)
{
    
    //Start with amount
    T total = amount;

    //Add tax
    total += amount * (taxPercent / 100);

    //Subtract discount
    total -= amount * (discountPercent / 100);

    //Add tip
    total += amount * (tipPercent / 100);

    return total;
}

int main()
{
    
    //Using double for decimal
    
    //receiptTotal(100.0, 8.875, 10.0, 15.0)
    double finalTotal = receiptTotal(100.0, 8.875, 10.0, 15.0);

    //Print the result 
    cout << "Final Total: " << finalTotal << endl;

    return 0;
}