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
};

// Main function.
int main()
{
    // Creating a book object (Object 01).
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J.K Rowling";
    book1.pages = 600;

    

    return 0;
}

// Program end.
