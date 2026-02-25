/*
Jessica Swan
CSCI 272 (2)
Assignment 2 : Part 3 - Vector Growth Experiment
Feb 24. 2026
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Create an empty vector of integers
    vector<int> v;

    /*
    size() tells us how many elements are currently stored
    capacity() tells us how much memory has been allocated
    Capacity is often larger than size because vectors grow in chunks
    */

    cout << "Tracking vector size and capacity growth: \n";

    //Store initial capacity so we can detect changes
    int lastCapacity = v.capacity();

    //Add numbers 1 through 50 into the vector
    for (int i = 1; i <= 50; i++)
    {
        //Add a new element to the end of the vector
        v.push_back(i);

        /*
        Each time we push_back(), the vector may need to increase its capacity if it runs out of space
        We check if capacity changed
        */
        if ((int)v.capacity() != lastCapacity)
        {
            cout << "After inserting " << i
                 << " -> size: " << v.size()
                 << ", capacity: " << v.capacity()
                 << endl;

            //Update lastCapacity 
            lastCapacity = v.capacity();
        }
    }

    //Final results after loop completes
    cout << "\nFinal Size: " << v.size() << endl;
    cout << "Final Capacity: " << v.capacity() << endl;

    return 0;
}

/*
Reflection 

1) Big-O describes how an algorithm’s runtime grows as the input grows. 

2) Big-O matters because a slow algorithm becomes a big problem with lots of data. For example, searching through a long roster one-by-one is slower than using a faster method as the class size increases.

3) Vectors automatically resize when they run out of space, so we don’t have to manually manage memory. The capacity growth shows how vectors expand to handle more elements efficiently.
*/