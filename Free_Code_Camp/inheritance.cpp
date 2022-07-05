/*
Name: Ahmed Affaan
Title: inheritance.cpp
Folder: CPP/Free_Code_Camp
Date: 05/07/2022
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

// Class for creating Chef objects.
class Chef
{
    // Public attributes for the class.
    public:
        // Displays specific cooking skill (Chicken).
        void makeChicken()
        {
            cout << "The Chef makes chicken" << endl;
        }

        // Displays specific cooking skill (Salad).
        void makeSalad()
        {
            cout << "The Chef makes salad" << endl;
        }

        // Displays specific cooking skill (Special Dish).
        void makeSpecialDish()
        {
            cout << "The Chef makes bbq ribs" << endl;
        }
};

// Main function.
int main()
{
    // Printing a message.
    cout << "Hello World!" << endl;
    return 0;
}

// Program end.
