/*
Name: Ahmed Affaan
Title: return_statement.cpp
Folder: CPP/Free_Code_Camp
Date: 20/06/2022
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

using namespace std;

// This function will cube a number.
double cube(double num)
{
    // This will return the cube value.
    double result = num * num * num;
    return result;
}

// Main function.
int main()
{
    // Variable to store cubed number.
    double answer = cube(5.0);
    // Prints the cubed number.
    cout << "The answer is: " << answer << endl;

    return 0;
}

// Program end.
