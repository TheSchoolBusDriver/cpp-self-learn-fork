/*
Name: Ahmed Affaan
Title: if_statements.cpp
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

// Main function.
int main()
{
    // Variable to store options.
    bool isMale = true;
    //bool isMale = false;
    bool isTall = true;

    // This will check if the user is a male or not.
    if(isMale && isTall)
    {
        // Printing a success message.
        cout << "You are a tall male!" << endl;
    }
    // Checks if user is not tall.
    else if(isMale && !isTall)
    {
        // Prints an error message.
        cout << "You are a short male!";
    }
    // Checks if user is not a tall male.
    else if(!isMale && isTall)
    {
        // Prints an error message.
        cout << "You are tall but not male!" << endl; 
    }
    else
    {
        // Printing an error message.
        cout << "You are not a male and tall." << endl;
    }

    return 0;
}

// Program end.
