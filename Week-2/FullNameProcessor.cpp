/*
Jessica Swan
CSCI 272 (2)
Assignment 3 : Part 1 - Full Name Processing
Feb 17. 2026
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName;

    //Ask the user to enter their full name
    //We use getline() because names may contain spaces
    cout << "Enter your full name: ";
    getline(cin, fullName);

    //Print the full name exactly as entered
    cout << "\nFull Name: " << fullName << endl;

    //length() returns the total number of characters in the string
    //Including letters, spaces, and punctuation
    cout << "Total characters (including spaces): " << fullName.length() << endl;

    //Access characters using indexing
    //[0] is the first character
    //length() - 1 gives the index of the last character
    if (fullName.length() > 0)
    {
        cout << "First character: " << fullName[0] << endl;
        cout << "Last character: "
             << fullName[fullName.length() - 1] << endl;
    }

    //Use find() to locate the first space in the name
    //This helps us extract just the first name
    int spaceIndex = fullName.find(' ');

    //substr(start, length) extracts part of a string
    //Here we extract everything from index 0 up to the space
    string firstName = fullName.substr(0, spaceIndex);

    cout << "First name (using substr): " << firstName << endl;

    //Add a prefix to the beginning of the string
    fullName = "Mr./Ms. " + fullName;

    //Add a suffix to the end of the string
    fullName = fullName + "Jr. ";

    //Print the modified name
    cout << "Modified Name: " << fullName << endl;
    
    //Extra Credit

//How many vowels, consonants, and spaces are in the fullName string

int vowels = 0;      
int consonants = 0;   
int spaces = 0;       

//Loop through each character in the string
for (int i = 0; i < fullName.length(); i++)
{
    //Get the current character
    char c = fullName[i];

    //Check if the character is a space
    if (c == ' ')
    {
        spaces++;   
    }

    //Check if the character is a letter (A-Z or a-z)
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        //If the letter is uppercase, convert it to lowercase
        //Using ASCII. I had to search this part up
        if (c >= 'A' && c <= 'Z')
            c = c + 32;

        //Now check if the lowercase letter is a vowel
        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u')
        {
            vowels++;     
        }
        else
        {
            //If it's a letter but not a vowel, then it must be a consonant
            consonants++;
        }
    }

    //Any other characters are ignored and not counted
    
}

//Print the final counts after the loop finishes
cout << "Vowels: " << vowels << endl;
cout << "Consonants: " << consonants << endl;
cout << "Spaces: " << spaces << endl;

    return 0;
}