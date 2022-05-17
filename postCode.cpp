// Copyright (c) 2022 Jackson Naufal All rights reserved
// Created By Jackson Naufal
// Created On May 2022
// This is a canadian post address program

#include <iostream>
#include <cmath>
#include <algorithm>

std::string PostFunction(
    std::string fullName,
    std::string streetNum,
    std::string street,
    std::string city,
    std::string province,
    std::string postCode,
    std::string apartmentNum = ""
    ) {
    // this function formats a postal address
    std::string postCodeAddress;

    // process
    if (apartmentNum != "") {
            postCodeAddress = fullName + "\n" + apartmentNum + "-";
            postCodeAddress += streetNum + " " + street + "\n" + city;
            postCodeAddress += " " + province + "  " + postCode;
        } else {
            postCodeAddress = fullName + "\n";
            postCodeAddress += streetNum + " " + street + "\n" + city;
            postCodeAddress += " " + province + "  " + postCode;
        }
    std::transform(
        postCodeAddress.begin(),
        postCodeAddress.end(),
        postCodeAddress.begin(),
        ::toupper
);

    return postCodeAddress;
}


int main() {
    // this function gets input, calls a function, gives output

    std::string fullName;
    std::string question;
    std::string apartmentNum;
    std::string streetNum;
    std::string street;
    std::string city;
    std::string province;
    std::string postCode;
    int apartmentTry;
    int streetTry;
    std::string postCodeAddress;

    // input
    std::cout << "Enter your fullname! (first, middle, last): ";
    std::getline(std::cin, fullName);
    std::cout << "Do you live in an apartment?(y/n): ";
    std::getline(std::cin, question);
    if (question == "Y" || question == "y") {
        std::cout << "Enter your apartment number!: ";
        std::getline(std::cin, apartmentNum);
    }
    std::cout << "Enter your street number: ";
    std::getline(std::cin, streetNum);
    std::cout << "Enter your street name AND type!: ";
    std::getline(std::cin, street);
    std::cout << "Enter your city!: ";
    std::getline(std::cin, city);
    std::cout << "Enter your province!: ";
    std::getline(std::cin, province);
    std::cout << "Enter your postal code (LNL NLN): ";
    std::getline(std::cin, postCode);

    try {
        if (apartmentNum != "") {
            apartmentTry = std::stoi(apartmentNum);
        }
        streetTry = std::stoi(streetNum);

        // function calls
        if (apartmentNum != "") {
            postCodeAddress = PostFunction(fullName,
            streetNum,
            street,
            city,
            province,
            postCode,
            apartmentNum);
        } else {
            postCodeAddress = PostFunction(
            fullName,
            streetNum,
            street,
            city,
            province,
            postCode);
        }

        // output
        std::cout << postCodeAddress;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid Input" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
