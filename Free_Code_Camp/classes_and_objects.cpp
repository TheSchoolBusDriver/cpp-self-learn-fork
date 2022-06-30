/*
Name: Ahmed Affaan
Title: classes_and_objects.cpp
Folder: CPP/Free_Code_Camp
Date: 30/06/2022
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

// Class for book data type.
class Book
{
    // Attributes for the class.
    public:
        string title; // Stores title of the book.
        string author; // Stores book authors name.
        int pages; // Stores numbers of pages in the book.        
};

// Main function.
int main()
{
    /*
    name - Stores variable for name.
    pi - Stores variable for first three digits of pi.
    favoriteLetter - Stores variable for favourite letter character.
    */
    //string name = "Affaan";
    //double pi = 3.14;
    //char favoriteLetter = 'A';

    // Creating a book object (Object 01).
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 600;

    // Creating a book object (Object 02).
    Book book2;
    book2.title = "Meditations";
    book2.author = "Marcus Aurelius";
    book2.pages = 300;

    // Accessing book object attributes (Object 01).
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Pages: " << book1.pages << endl;

    return 0;
}

// Program end.
