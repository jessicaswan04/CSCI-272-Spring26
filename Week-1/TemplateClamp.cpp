/*
Jessica Swan
CSCI 272 (2)
Assignment 2 : Problem 1 - Clamp
*/

//'Clamp' = Keep value inside a range.

#include <iostream>

using namespace std;

template <class T> 
T clampValue(T value, T low, T high)
{
    
    //If value is smaller than the low, return the low
    if (value < low)
        return low;

    //If value is larger than the high, return the high
    if (value > high)
        return high;

    //Otherwise, value is already in range
    return value;
}

int main()
{

/*
Testing with an int
int value 120 clamped [0, 100]   
*/
    int intResult = clampValue(120, 0, 100);
    cout << "Clamp int: " << intResult << endl;

/*
Testing with a double
double value -3.5 clamped to [0.0, 10.0]  
*/
    double doubleResult = clampValue(-3.5, 0.0, 10.0);
    cout << "Clamp double: " << doubleResult << endl;

/*
Testing with a char
char value 'z' clamped to ['a', 'f'] 
*/
    char charResult = clampValue('z', 'a', 'f');
    cout << "Clamp char: " << charResult << endl;

    return 0;
}