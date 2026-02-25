/*
Jessica Swan
CSCI 272 (2)
Assignment 2 : Part A Scenario 1 - John Jay Cafeteria Menu
Feb 24. 2026
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    //Create a vector<string> called menu
    vector<string> menu;

    //Add 5 dishes using push_back
    menu.push_back("Burger");
    menu.push_back("Salad");
    menu.push_back("Pizza");
    menu.push_back("Pasta");
    menu.push_back("Tacos");

    //Insert a new dish at the 2nd position
    //2nd position means index 1 because indexing starts at 0
    menu.insert(menu.begin() + 1, "Sushi");

    //Remove the 4th dish using erase()
    //4th dish means index 3
    menu.erase(menu.begin() + 3);

    //Print the final menu using a range-based for loop
    cout << "Final Menu: " << endl;
        for (const string& item : menu) {
        cout << item << endl;
}
    
    return 0;
}

/*
Reflection

1) Big-O shows how a program’s speed changes as the amount of data increases. It helps us understand efficiency.

2) Big-O is important because programs can slow down a lot when there is more data. For example, searching through a long class list takes longer than searching a short one.

3) A vector is better because it can grow and shrink automatically. We can easily add or remove items.
*/