/*
Name: Ahmed Affaan
Title: madlibs.cpp
Folder: CPP/Free_Code_Camp
Date: 18/06/2022
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
    // Variables to store parts of Madlib.
    string colour, pluralNoun, celebrity;

    // Asks for user input.
    // Colour.
    cout << "Enter a colour: ";
    getline(cin, colour);
    // Plural Noun.
    cout << "Enter a Plural Noun: ";
    getline(cin, pluralNoun);
    // Celebrity.
    cout << "Enter a Celebrity: ";
    getline(cin, celebrity);

    // Madlibs modified messages.
    cout << "Roses are " << colour << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}

// Program end.
