/*
Name: Ahmed Affaan
Title: object_functions.cpp
Folder: CPP/Free_Code_Camp
Date: 02/06/2022
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

// Class for creating Student objects.
class Student
{
    // Attributes for the class.
    public:
        string name; // Stores students name.
        string major; // Stores students major.
        double gpa; // Stores students gpa.

        // Constructor.
        Student(string aName, string aMajor, double aGpa)
        {
            name = aName; // Name.
            major = aMajor; // Major.
            gpa = aGpa; // GPA.
        }

        // This function returns if the student has honours or not.
        bool hasHonours()
        {
            // Checks GPA is equal to or higher than 3.5.
            if(gpa >= 3.5)
            {
                return true;
            }
            // GPA lower than 3.5
            return false;
        }
};

// Main function.
int main()
{
    // Creating a student object (Student 01).
    Student student1("Ahmed Affaan", "Computer Science", 2.4);

    // Creating a student object (Student 02).
    Student student2("Mike Dan", "International Relations", 3.6);

    return 0;
}

// Program end.
