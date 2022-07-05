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

// Class for creating Italian Chef objects (Inherited from Chef).
class ItalianChef : public Chef
{
    // Public attributes for the class.
    public:
        // Displays specific cooking skill (Pasta).
        void makePasta()
        {
            cout << "The Chef makes pasta" << endl;
        }

        // Displays specific cooking skill (Lasagna).
        void makeLasagna()
        {
            cout << "The Chef makes Lasagna" << endl;
        }

        // Displaying specific cooking skill (Chicken Parm).
        void makeSpecialDish()
        {
            cout << "The Chef makes Chicken Parm" << endl;
        }
};

// Class for creating Indian Chef objects (Inherited from Chef and ItalianChef).
class IndianChef : public Chef, ItalianChef
{
    // Public attributes for the class.
    public:
        // Displays specific cooking skill (Curry).
        void makeCurry()
        {
            cout << "The Chef makes Curry" << endl;
        }

        // Displays specific cooking skill (Biryani).
        void makeBiryani()
        {
            cout << "The Chef makes Biryani" << endl;
        }

        // Displays specific cooking skill.
        void makeSpecialDish()
        {
            cout << "The Chef makes Chutney" << endl;
        }
};

// Main function.
int main()
{
    // Assigning Chef, ItalianChef and Indian chef class to variables.
    Chef chef;
    ItalianChef italianchef;
    IndianChef indianchef;

    // Displays specific Chef jobs (Chef).
    chef.makeChicken();
    chef.makeSalad();
    chef.makeSpecialDish();

    // Displays specific Chef jobs (ItalianChef)
    italianchef.makePasta();
    italianchef.makeLasagna();
    italianchef.makeSpecialDish();

    return 0;
}

// Program end.
