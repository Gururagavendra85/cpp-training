#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class NumberGuessingGame {
    int numberToGuess = 1;

    void setNumberToGuess(int number) { // for testing purposes
        numberToGuess = number;
    }

public:
    NumberGuessingGame() {
        // Set numberToGuess here to random number between 1 and 100
        // numberToGuess = random number between 1 and 100
        // For that lookup how to generate random numbers in C++
        int randomNum = rand() % 101;
        numberToGuess = randomNum;
    }

    void playGame() {
        // Write your solution here, assume that numberToGuees is already set
        // Below is incorrect solution, replace it with your solution
    
        int i = 1;
        while(i<10){
            std::cout<<"Guess the number (between 1 and 100): ";
            int guess;
            std::cin >> guess;
            if(guess<numberToGuess){
                std::cout<<"Too low!"<<"\n";
            }
            else if(guess>numberToGuess){
                std::cout<<"Too high!"<<"\n";
            }
            else if(numberToGuess == guess){
                std::cout<<"Correct! You took "<<i<<" guesses."<<"\n";
                break;
            }
            else {
            std::cout << ":(" << std::endl;
            }
            i++;
        }
    }

    friend class SolutionTest; // for testing purposes
};

