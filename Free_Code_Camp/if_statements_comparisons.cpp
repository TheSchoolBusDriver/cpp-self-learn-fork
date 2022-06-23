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
int getMax(int num1, int num2)
{
    // This variable stores the largest result.
    int result;
    
    // Checks which is the largest.
    if(num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    // Returns the largest integer.
    return result;
}

// Main function.
int main()
{
    // Printing the result.
    cout << getMax(2, 5);
    return 0;
}

// Program end.
