/*
Name: Ahmed Affaan
Title: data_types.cpp
Folder: CPP/Free_Code_Camp
Date: 11/06/2022
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
    // Variable declarations.
    char grade = 'A'; // Data type to store a character.
    string phrase = "Giraffe Academy"; // Data type to store strings of character.
    int age = 23; // Data type to store an integer.
    int negative_age = -23; // Data type to store an integer(negative numbers).
    double gpa = 120.00; // Data type to store decimal numbers.
    bool isMale = true; // Data type to store True or False statements.
    bool isFemale = false; // Data type to store True or False statements.

    // Printing data type variables.
    cout << "This year I got a " << grade << " in Computer Science." << endl;
    cout << "I did a C++ Tutorial for Beginners by " << phrase << endl;
    cout << "I am now " << age << " years old." << endl;
    cout << "The current temperature is now " << negative_age << endl;
    cout << "My overall gpa is " << gpa << endl;
    cout << "Are you Male or Female(M/F): " << isMale << endl;
    cout << "Are you Male or Female(M/F): " << isFemale << endl;
    
    return 0;

}

// Program end.
