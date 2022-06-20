/*
Name: Ahmed Affaan
Title: functions.cpp
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

// Function stub for "sayHi".
void sayHi(string name, int age);

// Main function.
int main()
{
    // Calling the function.
    sayHi("Affaan", 23);
    sayHi("Ahmed", 24);
    sayHi("Mohamed", 25);
    sayHi("Ibrahim", 26);
    return 0;
}

// This function will print a simple message.
void sayHi(string name, int age)
{
    // Print statement.
    cout << "Hello " << name << ". You are " << age << "." << endl;
}

// Program end.
