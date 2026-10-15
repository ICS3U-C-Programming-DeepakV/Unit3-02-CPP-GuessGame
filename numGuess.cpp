// Copyright (c) 2026 Deepak V rights reserved
// Created by: Deepak V
// Date: Oct. 15, 2026
// This program is about guessing numbers.
#include <iostream>
int const CORRECT_NUM = 3;

int main() {
    // Necessary variable
    int guessedNumber;
    // This will be displayed when the code ran
    std::cout << "Guess a random number in the range from, 0-9: ";
    std::cin >> guessedNumber;
    // If the guess is correct, this will be displayed
    if (guessedNumber == CORRECT_NUM) {
        std::cout << "Good job, you got it correct!\n";
    }
    // If the guess is incorrect, this will be displayed
    if (guessedNumber != CORRECT_NUM) {
        std::cout
        << "The guess is incorrect, try again. The correct number was:"
        << CORRECT_NUM << "\n";
    }
}
