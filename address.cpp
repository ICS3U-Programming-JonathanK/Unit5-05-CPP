// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by : Jonathan Kene
// Created on : June 7 2021
// This program prints out your address, using default function parameters

#include <iostream>

std::string FormattedAddress(std::string name, std::string streetNumber,
                             std::string streetName, std::string city,
                             std::string province, std::string postalCode,
                             std::string apartmentNum = " ") {
    // return the full formal name
    std::string canMailFormat = " ";

    canMailFormat = canMailFormat + name + "\n";
    if (apartmentNum != "") {
        canMailFormat = canMailFormat + apartmentNum + "-";
    }
    canMailFormat = canMailFormat + streetNumber + " " + streetName +"\n";
    canMailFormat = canMailFormat + city + " " + province + " " + postalCode;

    return canMailFormat;
}


main() {
    // gets a users name and prints out their formal name
    std::string userApartment;
    std::string userApartmentNum = " ";
    std::string userName;
    std::string userStreetNumber;
    std::string userStreetName;
    std::string userCity;
    std::string userProvince;
    std::string userPostalCode;
    std::string formattedString;
    std::string formattedAddress;

    // input
    std::cout << "Enter your full name: ";
    std::cin >> userName;
    std::cout << "Do you live in an apartment? (y/n): ";
    std::cin >> userApartment;
        if (userApartment == "y" || userApartment == "yes") {
            std::cout << "Enter your apartment number: ";
            std::cin >> userApartmentNum;
    }
    std::cout << "Enter your street number: ";
    std::cin >> userStreetNumber;
    std::cout << "Enter your street name: ";
    std::cin >> userStreetName;
    std::cout << "Enter your city name: ";
    std::cin >> userCity;
    std::cout << "Enter your province initials (i.e, AB, ON, MA): ";
    std::cin >> userProvince;
    std::cout << "Enter your postal code (i.e K1C 1K3): ";
    std::cin >> userPostalCode;


    // call functions
    if (userApartmentNum != " ") {
        formattedString = FormattedAddress(userName, userStreetNumber,
                                           userStreetName, userCity,
                                           userProvince, userPostalCode,
                                           userApartmentNum);
    } else {
        formattedString = FormattedAddress(userName, userStreetNumber,
                                           userStreetName, userCity,
                                           userProvince,
                                           userPostalCode);
    }
    std::cout << formattedString;
}
