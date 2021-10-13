// Copyright (c) 2021 Michael Zagon All rights reserved

// Created by: Michael Zagon
// Created on: September 2021
// This program converts Celsius to Fahrenheit

#include <iostream>

void C2F() {
    float Tc;
    float Tf;
    std::string Celsius;

    // Input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> Celsius;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        Tc = std::stoi(Celsius);
        Tf = 1.8*Tc+32;
        std::cout << Tc << "°C is equal to " << Tf << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input." << std::endl;
    }
}
int main() {
    C2F();

    std::cout << "\nDone." << std::endl;
}
