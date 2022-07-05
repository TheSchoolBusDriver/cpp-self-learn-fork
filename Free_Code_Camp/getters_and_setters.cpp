/*
Name: Ahmed Affaan
Title: getters_and_setters.cpp
Folder: CPP/Free_Code_Camp
Date: 04/07/2022
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

// Class for creating Movie objects.
class Movie
{
    // Attributes for the class.
    public:
        string title; // Stores Movie title.
        string director; // Stores Movie directors name.
        string rating; // Stores Movie's rating.

        // Constructor.
        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle; // Title.
            director = aDirector; // Director.
            rating = aRating; // Rating.
        }
};

// Main function.
int main()
{
    // Creating a Movie object (Movie 01).
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // Accessing Movie object attributes (Movie 01).
    cout << "Rating: " << avengers.rating << endl;

    return 0;
}

// Program end.
