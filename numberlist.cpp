// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: December 2019
// This program adds 10 numbers to an array then calculates the average

#include <iostream>
#include <ctime>

int main() {
    // This function adds 10 numbers to an array then calculates the average

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables and arrays
    int randomNumber;
    int sum = 0;
    float average;
    int numberArray[10];

    // Process
    for (int counter = 0; counter < 10; counter++) {
        randomNumber = rand_r(&seed) % 100;
        numberArray[counter] = randomNumber;
        std::cout << numberArray[counter] << std::endl;
        sum = sum + numberArray[counter];
    }

    average = sum/10.0;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The average of your numbers is " << average << std::endl;
}
