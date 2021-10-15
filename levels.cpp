// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Oct 2020
// This program converts a percentage to a level mark

#include <iostream>
#include <string>

int CalculateMark(std::string level) {
    // calculate mark
    int mark;

    // process
    if (level == "4+") {
        mark = 98;
    } else if (level == "4") {
        mark = 91;
    } else if (level == "4-") {
        mark = 83;
    } else if (level == "3+") {
        mark = 78;
    } else if (level == "3") {
        mark = 75;
    } else if (level == "3-") {
        mark = 71;
    } else if (level == "2+") {
        mark = 68;
    } else if (level == "2") {
        mark = 65;
    } else if (level == "2-") {
        mark = 61;
    } else if (level == "1+") {
        mark = 58;
    } else if (level == "1") {
        mark = 55;
    } else if (level == "1-") {
        mark = 51;
    } else if (level == "R") {
        mark = 25;
    } else {
        mark = -1;
    }

    // output
    return mark;
}

int main() {
    // this function get base and height

    std::string levelFromUser;
    int calculatedMark;
    // input
    std::cout << "Enter a level you want converted to a percentage : ";
    std::cin >> levelFromUser;
    // call functions
    calculatedMark = CalculateMark(levelFromUser);
    if (calculatedMark == -1) {
        std::cout << "Invalid level entered, please try again." << std::endl;
    } else {
        std::cout << "Level " << levelFromUser <<
        " has a middle percentage of " << calculatedMark << "%." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
