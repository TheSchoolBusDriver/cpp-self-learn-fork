/*
Name: Ahmed Affaan
Title: pointers.cpp
Folder: CPP/Free_Code_Camp
Date: 29/06/2022
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
    /*
    age - Stores age.
    *pAge - Stores pointer variable for age.
    gpa - Stores gpa.
    *pGpa - Stores pointer variable for gpa.
    name - Stores name.
    *pName - Stores pointer variable for name.
    */
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    string name = "Affaan";
    string *pName = &name;

    /*
    // Accessing memory addresses using normal variables.
    cout << "Age: " << &age << endl; // age.
    cout << "GPA: " << &gpa << endl; // gpa.
    cout << "Name: " << &name << endl; // name.
    */

    // Accessing memory addresses using pointer variables.
    cout << "Age: " << pAge << endl; // age.
    cout << "GPA: " << pGpa << endl; // gpa.
    cout << "Name: " << pName << endl; // name.


    return 0;
}

// Program end.
