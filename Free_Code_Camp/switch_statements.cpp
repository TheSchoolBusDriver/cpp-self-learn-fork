/*
Name: Ahmed Affaan
Title: switch_statements.cpp
Folder: CPP/Free_Code_Camp
Date: 23/06/2022
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

// This function will convert a number in to the day of the week.
string getDayOfWeek(int dayNum)
{
    // Variables to store the name of the day.
    string dayName;

    // Will check the day numbers and give back day names.
    switch(dayNum)
    {
        // Sunday.
        case 0:
        dayName = "Sunday";
        break;
        // Monday.
        case 1:
        dayName = "Monday";
        break;
        // Tuesday.
        case 2:
        dayName = "Tuesday";
        break;
        // Wednesday.
        case 3:
        dayName = "Wednesday";
        break;
        // Thursday.
        case 4:
        dayName = "Thursday";
        break;
        // Friday.
        case 5:
        dayName = "Friday";
        break;
        // Saturday.
        case 6:
        dayName = "Saturday";
        break;
        // Invalid option.
        default:
        dayName = "INVALID DAY NUMBER!";
    }

    // Returns back the day's name.
    return dayName;
}

// Main function.
int main()
{
    // Printing a message.
    cout << "Hello World!" << endl;
    return 0;
}

// Program end.
