/*
Jessica Swan
CSCI 272(2)
Lesson 4
Constructors and Destructor
March 05. 2026
*/

#include <iostream>
#include <string>
using namespace std;

/*
This class shows:
1. Default constructor
2. Parameterized constructor
3. Copy constructor
4. Destructor

Constructors run when objects are created. The destructor runs when an object is destroyed
*/

class Car
{
private:
    string brand{"Volkswagen"};
    string model{"Polo"};
    int year{2012};

public:
    //Default constructor
    //This runs when an object is created with no arguments
    Car()
    {
    }

    //Parameterized constructor
    //This runs when values are passed while creating the object.
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }

    //Copy constructor
    //This creates a new object by copying another object
    Car(const Car& other)
    {
        brand = other.brand;
        model = other.model;
        year = other.year;
    }

    //Destructor
    //This runs automatically when the object goes out of scope
    ~Car()
    {
        cout << "Object is destroyed" << endl;
    }

    //Function to display a simple message
    void startEngine()
    {
        cout << "start engine "
             << "{brand:" << brand << "|model:" << model << "}"
             << endl;
    }
};

int main()
{
    //Uses the default constructor
    Car car1;

    //Uses the parameterized constructor
    Car car2("Tesla", "X", 2022);

    //Uses the copy constructor
    Car car3(car2);

    //Call the member function for each object
    car1.startEngine();
    car2.startEngine();
    car3.startEngine();

    return 0;
}

/*
Reflection:
1. What I understood:
   I understood that constructors are functions that initialize objects. I also understood that the destructor runs automatically when the object is destroyed.

2. Difficulties:
   I was confused about the difference between the parameterized constructor
   and the copy constructor.

3. Research:
   I reviewed the Lesson 4 slides and had to look up the different types of constructors. I'm still struggling with this a bit...

4. AI Usage:
   I used ChatGPT to simplify and with comments and explain when each constructor and the destructor run. This was my hardest file so I really needed to use Ai.

5. What I learned:
   I learned how objects can be created in different ways and how C++ automatically calls the destructor when an object goes out of scope.
*/