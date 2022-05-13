// Copyright (c) 2022 Paterry Baptichon All rights reserved

// Created by Paterry Baptichon
// Created on 2022-05-13
// This program can calculate the area of a triangle

#include <iostream>
#include <string>

void triangleArea(float base, float height) {
    // calculate area
    float area;

    // process and formula for area of a triangle
    area = (base * height) /2;

    // displays the area of the triangle to the user
    std::cout << "The area is " << area << "cm²" << std::endl;
}


main() {
    // this function gets base(cm) and height(cm)

    std::string baseString;
    std::string heightString;
    int baseInteger;
    int heightInteger;

    // ask the user for base and height
    std::cout << "Enter the base of a triangle (cm): ";
    std::cin >> baseString;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> heightString;
    std::cout << std::endl;
    // if user enters an invalid input, display invalid input
    try {
        baseInteger = std::stoi(baseString.c_str());
        heightInteger = std::stoi(heightString.c_str());

        if (baseInteger > 0 && heightInteger > 0) {
            // call functions
            triangleArea(baseInteger, heightInteger);
        } else {
            std::cout << "The values should be positive" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This is not an integer" << std::endl;
    }
}
