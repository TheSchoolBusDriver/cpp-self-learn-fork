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

    // Will check operator and give back result.
    switch(op)
    {
        // Addition.
        case '+':
        result = num1 + num2;
        break;
        // Subtraction.
        case '-':
        result = num1 - num2;
        break;
        // Division.
        case '/':
        result = num1 / num2;
        break;
        // Multiplication.
        case '*':
        result = num1 * num2;
        break;
        // Invalid operator.
        default:
        result = false;
    }

    // Printing the result.
    cout << "Result = " << result;

    return 0;
}

// Program end.
