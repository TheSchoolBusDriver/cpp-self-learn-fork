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
    // Private attributes for the class.
    private:
        string rating; // Stores Movie's rating.

    // Attributes for the class.
    public:
        string title; // Stores Movie title.
        string director; // Stores Movie directors name.

        // Constructor.
        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle; // Title.
            director = aDirector; // Director.
            setRating(aRating); // Rating.
        }

        // Controls what ratings can be set to movies.
        void setRating(string aRating)
        {
            // Checks rating is a valid rating.
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR")
            {
                // Entered a valid rating.
                rating = aRating;
            }
            else
            {
                // Entered an invalid rating.
                rating = "NR";
            }
        }

        // Displays private attributes (Rating).
        string getRating()
        {
            return rating;
        }
};

// Main function.
int main()
{
    // Creating a Movie object (Movie 01).
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // Sets new Movie rating.
    //avengers.setRating("Dog");

    // Displays invalid rating.
    cout << avengers.getRating();

    return 0;
}

// Program end.
