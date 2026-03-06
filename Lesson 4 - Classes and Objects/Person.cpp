/*
Jessica Swan
CSCI 272(2)
Lesson 4
Person Class
March 05. 2026
*/

#include <iostream>
#include <string>
using namespace std;

//It stores information about one person and has a function that introduces that person


class Person
{
public:
    //This is the data for the object
    string name{"Maksi"};
    int age{29};
    char gender{'M'};

    //This function prints information about the person
    void introduce()
    {
        cout << "Hello, I'm " << name << ". I'm " << age << " years old.";

        //This if / else if / else checks the gender and prints a matching message
        if (gender == 'M')
        {
            cout << " I'm a male." << endl;
        }
        else if (gender == 'F')
        {
            cout << " I'm a female." << endl;
        }
        else
        {
            cout << " Gender unspecified." << endl;
        }
    }
};

int main()
{
    //Create an object from the Person class
    Person person1;

    //Call the introduce function using the object
    person1.introduce();

    return 0;
}

/*
Reflection:
1. What I understood:
   I understood how a class can store data such as name, age, and gender, and how a function can use that data to print a message.

2. Difficulties:
   I had to be careful with the if, else if, and else statements. I also needed to remember that gender is stored as a char value.

3. Research:
   I reviewed the Lesson 4 slides and looked over how conditional statements work in C++.

4. AI Usage:
   I used ChatGPT to explain how the if, else if and else function.

5. What I learned:
   I learned that an object can hold its own data and use a function to display that data.
*/