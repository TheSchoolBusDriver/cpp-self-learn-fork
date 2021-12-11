/*
///////////////////////////////////////////////////
// Name: Ahmed Affaan                            //
// Title: Calculator.cpp                         //
// Date: 11/12/2021                              //
// Country: Maldives                             //
// Description: Simple calculator                //
//              using special characters.        //
///////////////////////////////////////////////////
*/

// Program start

// Initialises the header file of C++
#include <iostream>
// Stating the namespace being used will be the standard
using namespace std;

// Initialising the main class
int main()
{

    // Defining variables that will store two values that will be passed
    float a, b;

    // Message asking the user to give first input
    cout << "Enter Number 01: " << endl;
    // First input's value will be stored here
    cin  >> a;

    // Message asking the user to give the second input
    cout << "Enter Number 02: " << endl;
    // Second input's value will be stored here
    cin  >> b;

    // The answer will be calculated and printed out within this statement
    cout << "The answer is = " << a + b << "\n";
}

// Program end
