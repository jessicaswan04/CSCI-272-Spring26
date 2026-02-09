/*
Jessica Swan
CSCI 272 (2)
Assignment 2 : Problem 2 - Between Check 
*/

#include <iostream>

using namespace std;

//Function template that checks if a value is inside a range
template <class T>
bool isBetween(T value, T low, T high)
{
    
    //If the value is greater than or equal to low AND less than or equal to high
    if (value >= low && value <= high)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    
    //Test with integers
    
    cout << "7 between 1 and 10? "
    
    //isBetween(7, 1, 10)
         << (isBetween(7, 1, 10) ? "true" : "false") << endl;
    cout << "12 between 1 and 10? "
    //isBetween(12, 1, 10)
         << (isBetween(12, 1, 10) ? "true" : "false") << endl;

    //Test with characters
    
    cout << "c between a and f? "
    
    //isBetween('c', 'a', 'f')
         << (isBetween('c', 'a', 'f') ? "true" : "false") << endl;

    return 0;
}