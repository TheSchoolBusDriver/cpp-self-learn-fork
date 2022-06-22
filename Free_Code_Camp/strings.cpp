/*
Name: Ahmed Affaan
Title: strings.cpp
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
    // Normal string.
    cout << "Giraffe Academy" << endl;

    // Prints to a new line.
    cout << "Giraffe\nAcademy" << endl;

    // Prints out a single quotation mark.
    cout << "Giraffe\"Academy" << endl;

    // Printing a string variable.
    string phrase = "Giraffe Academy";
    cout << phrase << endl;

    // String concatenation.
    cout << phrase << " is bald." << endl;

    // Finds length of characters.
    cout << phrase.length() << endl;

    // Prints exact index character from string.
    cout << phrase[0] << endl;

    // Finding a specific character inside a string.
    cout << phrase.find("Academy", 0) << endl;

    // Gives back characters according to index and count.
    cout << phrase.substr(8, 3) << endl;

    return 0;
}

// Program end.
