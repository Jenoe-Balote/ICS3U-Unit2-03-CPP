// Copyright (c) 2021 Jenoe Balote All rights reserved
//
// Created by Jenoe Balote
// Created on April 2021
// This program calculates the circumference of a circle
//     with dimensions inputted by the user

#include <iostream>

int main() {
    // this function calculates circumference of a circle
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter the radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // process
    std::cout << "" << std::endl;
    std::cout << "Circumference is:" << circumference << "mm." << std::endl;
}
