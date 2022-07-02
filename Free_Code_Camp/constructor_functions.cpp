/*
Name: Ahmed Affaan
Title: constructor_functions.cpp
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

// Class for creating Book objects.
class Book
{
    // Attributes for the class.
    public:
        string title; // Stores title of the book.
        string author; // Stores book authors name.
        int pages; // Stores numbers of pages in the book.

        // Constructor.
        Book(string aTitle, string aAuthor, int aPages)
        {
            title = aTitle; // Title.
            author = aAuthor; // Author.
            pages = aPages; // Pages.
        }
};

// Main function.
int main()
{
    // Creating a book object (Object 01).
    Book book1("Harry Potter", "J.K Rowling", 600);

    // Creating a book object (Object 02).
    Book book2;

    // Separator.
    cout << "-------------------------" << endl;

    // Accessing book object attributes (Object 01).
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Pages: " << book1.pages << endl;

    // Separator.
    cout << "-------------------------" << endl;

    // Accessing book object attributes (Object 02).
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Pages: " << book2.pages << endl;

    // Separator.
    cout << "-------------------------" << endl;

    return 0;
}

// Program end.
