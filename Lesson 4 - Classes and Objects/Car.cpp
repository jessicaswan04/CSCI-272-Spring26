/*
Jessica Swan
CSCI 272(2)
Lesson 4
Car Class
March 05. 2026
*/

#include <iostream>
#include <string>
using namespace std;

//This class is like a blueprint. It describes what data an object should have and what actions that object can perform

class Car
{
private:
    //Private data stores information about the car
    //private means they cannot be accessed directly from main()
    string brand{"Volkswagen"};
    string model{"Polo"};
    int year{2012};

public:
    //Public function to show an action of the car
    void startEngine()
    {
        cout << "start engine" << endl;
    }

    //Another public function to show a second action
    void accelerate()
    {
        cout << "accelerate engine" << endl;
    }
};

int main()
{
    //Create an object named car1 from the Car class
    Car car1;

    //Call the object's public functions
    car1.startEngine();
    car1.accelerate();

    return 0;
}

/*
Reflection:
1. What I understood:
   I understood that a class is a blueprint and an object is created from that blueprint. This class stores car information and also has functions that show what the car can do.

2. Difficulties:
   At first I was a little confused about the difference between private and public.

3. Research:
   I reviewed the Lesson 4 slides.

4. AI Usage:
   I used ChatGPT for comments and help explain the difference between a class and an object and public and private. 

5. What I learned:
   I learned how to define a simple class, create an object, use private and public.
*/