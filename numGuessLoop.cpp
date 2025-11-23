// Copyright (c) 2025 Yoma Ozoh All rights reserved
//
// Created By : Yoma Ozoh
// Date : November, 2025
// This program checks if package can be accepter or not
// Copyright (c) 2025 Yoma Ozoh All rights reserved.
//
#include <cstdlib>
#include <iostream>
#include <string>

int main(){
    std::string userNum;
    int userGuess;
    int correctNumber;
    size_t pos;

    // generate random number between 0 and 9
    srand((unsigned)time(NULL));
    correctNumber = rand() % 10 + 0;
    while (true){
        // get user input as a string
        std::cout << "Welcome! Guess a number between 0 and 9: ";
        std::cin >> userNum;

        try {
            int userGuess = std::stoi(userNum, &pos);
            if (userNum.length() != pos) {
                std::cout << userNum << " is not a valid integer.";
            } else {
                if (userGuess < 0) {
                    std::cout << "Please enter a positive integer." << std::endl;
                } else {
                        if (userGuess == correctNumber) {
                        std::cout << "You guessed correctly" << std::endl;
                    } else {
                            std::cout << "You guessed incorrectly, try again." << std::endl;
                        }
                    }
                }
        } catch (...) {
            std::cout << "Please enter a valid integer." 
            << std::endl;
        }
    }
    // display ending message
    std::cout << "Thanks for playing!" << std::endl;
}