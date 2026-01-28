#include <iostream>

using namespace std;

//Function that takes two numbers as parameters
double addition(double num1, double num2) {

    double sum = num1 + num2;  //Add the parameters

    return sum;                //Return the result
}

int main() {

    //Call the function and pass values
    double result = addition(10, 20);

    //Output the result
    cout << "The sum is: " << result << endl;

    return 0;
}

/*

double num1, num2;

num1 = 10;
num2 = 20;

double sum = num1 + num2;
double subtraction = num2 - num1;
<< sum << endl;
cout << "The subtraction is: " << subtraction << endl;
    
*/
    
    

