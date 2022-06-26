/*
Name: Ahmed Affaan
Title: guessing_game.cpp
Folder: CPP/Free_Code_Camp
Date: 26/06/2022
Country: Republic of Maldives
Code version: -
Description: User guesses secret number.
Credits to: Giraffe Academy
Credits to link: https://www.youtube.com/watch?v=vLnPwxZdW4Y
Note: Uncomment codes to execute and comment them when not in use.
*/

// Program start.

// Importing libraries.
#include <iostream>

using namespace std;

// Main function.
int main()
{
    /*
      secretNum - Stores secret number.
      guess - Stores user guess.
      guessCount - Stores the amount of user guesses.
      guessLimit - Stores user guess limit.
      outOfGuesses - Displays any guesses left.
    */
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = false;

    // Iterates until user guesses correct number.
    while(secretNum != guess && !outOfGuesses)
    {
        // Lets user guess until guess limit.
        if(guessCount < guessLimit)
        {
            // Asks for user input.
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        }
        // Ran out of guesses.
        else
        {
            outOfGuesses = true;
        }

    }

    // Win or Lose messages.
    // Win
    if(outOfGuesses)
    {
        cout << "You Lost!";
    }
    // Lose.
    else
    {
        cout << "Your guess is: " << guess << ". You Win!";
    }

    return 0;
}

// Program end.
