/*
Jessica Swan
CSCI 272 (2)
Assignment 3 : Part 4 - String to Number Conversion
Feb 17. 2026
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numberString;

    //Ask user to enter a number as a string
    cout << "Enter a number: ";
    getline(cin, numberString);

    //Convert string to integer
    int intValue = stoi(numberString);

    //Convert string to double
    double doubleValue = stod(numberString);

    //Multiply both values by 2
    intValue = intValue * 2;
    doubleValue = doubleValue * 2;

    //Print results
    cout << "Integer (stoi) * 2 = " << intValue << endl;
    cout << "Double (stod) * 2 = " << doubleValue << endl;

    return 0;
}