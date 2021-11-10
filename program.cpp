// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program uses quadratic formula

#include <iostream>
#include <cmath>

double QuadraticFormula(float a, float b, float c, bool add) {
    // calculates the quadratic formula

    float x1;
    float x2;

    x1 = -b / (2 * a);
    x2 = sqrt(pow(b, 2) - 4 * a * c) / (2 * a);

    if (add == true) {
        return x1 + x2;
    } else {
        return x1 - x2;
    }
}


main() {
    // This program uses quadratic formula

    std::string integer1;
    std::string integer2;
    std::string integer3;
    float a1;
    float b1;
    float c1;
    float d;
    float answer;
    float answer1;
    float answer2;

    // input
    std::cout << "Enter a: ";
    std::cin >> integer1;
    std::cout << "Enter b: ";
    std::cin >> integer2;
    std::cout << "Enter c: ";
    std::cin >> integer3;
    std::cout << std::endl;

    // process
    try {
        a1 = std::stof(integer1);
        b1 = std::stof(integer2);
        c1 = std::stof(integer3);

        d = pow(b1, 2) - 4 * a1 * c1;

        if (d < 0) {
            std::cout << "There is no answer" << std::endl;
        } else if (d == 0) {
            answer = QuadraticFormula(a1, b1, c1, true);
            std::cout << "If the quadratic equation"
            << " looks like this:" << std::endl;
            std::cout << a1 << "x² + " << b1 << "x + " << c1 << std::endl;
            std::cout << "Discriminant = " << d << std::endl;
            std::cout << "x = " << answer << std::endl;
        } else {
            answer1 = QuadraticFormula(a1, b1, c1, true);
            answer2 = QuadraticFormula(a1, b1, c1, false);
            std::cout << "If the quadratic equation"
            << " looks like this:" << std::endl;
            std::cout << a1 << "x² + " << b1 << "x + " << c1 << std::endl;
            std::cout << "Discriminant = " << d << std::endl;
            std::cout << "x = " << answer1 << " or " << answer2 << std::endl;
        }
    } catch (...) {
        std::cout << "Invalid input" << std::endl;
    }

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
