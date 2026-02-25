/*
Jessica Swan
CSCI 272 (2)
Assignment 2 : Part A Scenario 2 - Student Club Attendance
Feb 24. 2026
*/

#include <iostream>
#include <vector>
using namespace std;

//This function calculates and returns the average of all student IDs stored in the vector

double getAverage(const vector<int>& ids)
{
    int sum = 0;  //Variable to store total sum of IDs
    //Range-based for loop to go through each ID
    for (int id : ids)
    {
        sum += id;  //Add each ID to the total sum
    }
    return (double)sum / ids.size();
}

//This function finds and returns the highest student ID in the vector

int getHighest(const vector<int>& ids)
{
    //Assume the first element is the highest
    int highest = ids[0];
    //Loop through each ID
    for (int id : ids)
    {
        //If current ID is larger than highest
        //Update highest
        if (id > highest)
        {
            highest = id;
        }
    }
    return highest;  //Return the largest value found
}

int main()
{
    //Create a vector to store student IDs
    vector<int> studentIDs;

    //Add 10 student IDs using push_back()
    studentIDs.push_back(1001);
    studentIDs.push_back(1022);
    studentIDs.push_back(1011);
    studentIDs.push_back(1037);
    studentIDs.push_back(1111);
    studentIDs.push_back(1117);
    studentIDs.push_back(1056);
    studentIDs.push_back(1123);
    studentIDs.push_back(1066);
    studentIDs.push_back(1088);

    //Call the function for the average
    double avg = getAverage(studentIDs);

    //Call the function to find highest ID
    int highest = getHighest(studentIDs);

    //Print the results
    cout << "Average Student ID: " << avg << endl;
    cout << "Highest Student ID: " << highest << endl;

    return 0;
}

/*
Reflection

1) Big-O explains how the number of steps in a program changes as the input size increases. 

2) Big-O is important because programs that are fine for small input can become slow for large input. For example, checking every ID in a long list takes longer as the list grows.

3) Vector is better because it can store a changing number of IDs without needing a fixed size. Also, vectors have useful functions like size(), push_back(), and can be passed to functions easily.
*/