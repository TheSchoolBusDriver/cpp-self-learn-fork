/*
Name: Ahmed Affaan
Title: arrays_nested_loops.cpp
Folder: CPP/Free_Code_Camp
Date: 27/06/2022
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

// Main function.
int main()
{
    // Stores a 2D array of numbers.
    int numberGrid[3][2] =
    {
        {1, 2}, // Element one.
        {3, 4}, // Element two.
        {5, 6}  // Element three.
    };

    /*
    // Accessing array contents.
    cout << numberGrid[0][1] << endl;
    cout << numberGrid[2][0] << endl;
    */

    // Displays all elements of 2D array.
    for(int i = 0; i < 3; i++)
    {
        // Loops through individual element.
        for(int j = 0; j < 2; j++)
        {
            // Prints out all the elements.
            cout << numberGrid[i][j];
        }
        // New line.
        cout << endl;
    }
    
    return 0;
}

// Program end.
