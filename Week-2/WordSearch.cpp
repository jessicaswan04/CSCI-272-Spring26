/*
Jessica Swan
CSCI 272 (2)
Assignment 3 : Part 2 - Word Search
Feb 17. 2026
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, word;

    //Ask user to enter a sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    //Ask user for a word to search
    cout << "Enter a word to search: ";
    getline(cin, word);

    //Use find() to search for the word
    int position = sentence.find(word);

    //If word is found, find() returns its starting index
    //If not found, it returns -1 
    if (position != -1)
    {
        cout << "Word found at index: " << position << endl;
    }
    else
    {
        cout << "Word not found" << endl;
    }

    return 0;
}