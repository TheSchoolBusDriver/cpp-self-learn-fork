/*
Collaborator that rewrote the variable tutorial from Bro Code: TheSchoolBusDriver
Title: variablesDataTypes.cpp
Folder: CPP/Bro_Code
Date: 11/08/2022
Code version: -
Description: In this file, several variables are made to show you the general concept of variables and data types.
Credits to: Bro Code
Original video: https://www.youtube.com/watch?v=-TkoO8Z07hI
Note: Uncomment codes to execute and comment them when not in use. Several comments have been added to help you understand the program.
*/

// Program start.

// Importing header files.
#include <iostream>

// Main function.
int main() {
    //integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    //double (number including decimal), you can also use floats but doubles have more precision
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    // fun fact: you can use integers, and according to the ASCII table the integer will be converted into a char
    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (an object that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}

// Program end.