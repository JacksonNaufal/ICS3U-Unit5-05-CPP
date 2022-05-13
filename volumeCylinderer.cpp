// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder

#include <iostream>
#include <cmath>

float VolumeConversion(float radius, float height) {
    float volume;

    volume = M_PI * (radius * radius) * height;

    return volume;
}
main() {
    std::string radiusUserString;
    std::string heightUserString;
    float radiusUser;
    float heightUser;
    float VolumeCalculation;

        // input
    std::cout << "Enter your radius! (mm): ";
    std::cin >> radiusUserString;

    std::cout << "Enter your height! (mm): ";
    std::cin >> heightUserString;

    try {
        radiusUser = std::stoi(radiusUserString);
        heightUser = std::stoi(heightUserString);
        VolumeCalculation = VolumeConversion(radiusUser, heightUser);
        std::cout << "The volume is " << VolumeCalculation  <<  "mm³" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\n Invalid integer!" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
