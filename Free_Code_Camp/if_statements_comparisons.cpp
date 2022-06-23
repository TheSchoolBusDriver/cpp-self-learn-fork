/*
Name: Ahmed Affaan
Title: if_statements_comparisons.cpp
Folder: CPP/Free_Code_Camp
Date: 22/06/2022
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

// This function will give back the largest of two integers.
int getMax(int num1, int num2, int num3)
{
    // This variable stores the largest result.
    int result;
    
    // Checks which is the largest.
    // Number 1.
    if(num1 >= num2 && num1 >= num3)
    {
        // Integer 1 is the largest.
        result = num1;
    }
    // Number 2
    else if(num2 >= num1 && num2 >= num3)
    {
        // Integer 2 is the largest.
        result = num2;
    }
    // Number 3
    else
    {
        // Integer 3 is the largest.
        result = num3;
    }

    // Returns the largest integer.
    return result;
}

// Main function.
int main()
{
    // Printing the result.
    cout << getMax(2, 5, 10);
    return 0;
}
 
// Program end.
