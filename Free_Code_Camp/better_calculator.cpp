/*
Name: Ahmed Affaan
Title: better_calculator.cpp
Folder: CPP/Free_Code_Camp
Date: 23/06/2022
Country: Republic of Maldives
Code version: -
Description: -
Credits to: Giraffe Academy
Credits to link: https://www.youtube.com/watch?v=vLnPwxZdW4Y
Note: Uncomment codes to execute and comment them when not in use.
*/

// Program start.

// Importing libraries.
#include <iostream>
#include <cmath>

using namespace std;

// Main function.
int main()
{
    // Variables to store two numbers to be calculatd operator to be used and result.
    int num1, num2, result;
    char op;

    // Gets input from the user.
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    
    // Will check operators and conduct calculations.
    // Addition.
    if(op == '+')
    {
        result = num1 + num2;
    }
    // Subtraction.
    else if(op == '-')
    {
        result = num1 - num2;
    }
    // Division.
    else if(op == '/')
    {
        result = num1 / num2;
    }
    // Multiplication.
    else if(op == '*')
    {
        result = num1 * num2;
    }
    // Error message.
    else
    {
        cout << "INVALID OPERATOR!";
    }

    // Printing the result.
    cout << "Result = " << result;

    return 0;
}

// Program end.
