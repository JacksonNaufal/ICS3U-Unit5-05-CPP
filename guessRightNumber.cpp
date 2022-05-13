// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On March 2022
// This is a loop adder

#include <iostream>

void AreaConversion(int length, int width) {
     int area;

        area = (length * width) / 2;
        std::cout << "The area is "<< area << "! The Height = " << length <<
        " The Base = " << width << std::endl;
}
main() {
    std::string WidthUserString;
    std::string LengthUserString;
    int WidthUser;
    int LengthUser;

        // input
    std::cout << "Enter your width (mm)!: ";
    std::cin >> WidthUserString;
    std::cout << "Enter your length! (mm): ";
    std::cin >> LengthUserString;

    try {
        WidthUser = std::stoi(WidthUserString);
        LengthUser = std::stoi(LengthUserString);
        AreaConversion(WidthUser, LengthUser);
    } catch (std::invalid_argument) {
        std::cout << "\n Invalid integer!" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
