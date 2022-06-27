/*
Name: Ahmed Affaan
Title: exponent_function.cpp
Folder: CPP/Free_Code_Camp
Date: 26/06/2022
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

// This function will raise power to two numbers given.
int power(int baseNum, int powerNum)
{
    // This will store the end result.
    int result = 1;

    // This will loop through until a power number comes.
    for(int i = 0; i < powerNum; i++)
    {
        // Increments final result.
        result = result * baseNum;
    }

    // Returns the calculated result.
    return result;
}

// Main function.
int main()
{
    // Printing a message.
    cout << "Hello World!" << endl;
    return 0;
}

// Program end.
