/*
Jessica Swan
CSCI 272 (2)
Assignment 3 : Part 3 - Case-Insensitive Comparison 
Feb 17. 2026
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Converts a string to lowercase
//We loop through each character and apply tolower()
string toLowerString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    string word1, word2;

    //Ask user for two words
    cout << "Enter first word: ";
    getline(cin, word1);

    cout << "Enter second word: ";
    getline(cin, word2);

    //Convert both words to lowercase.
    string lower1 = toLowerString(word1);
    string lower2 = toLowerString(word2);

    if (lower1 == lower2)
        cout << "Strings are equal (case-insensitive) " << endl;
    else
        cout << "Strings are NOT equal (case-insensitive) " << endl;

    return 0;
}