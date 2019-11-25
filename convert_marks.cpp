// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program converts grade to percent.


#include <iostream>
#include <string>


int convert_mark(char grade[]) {
    // This function  calculates the user's grade as a percentage

    // variables
    int percentage;

    // process
    switch (grade[0]) {
        case '4' :
            if (grade[1] == '+') {
                percentage = 97;
            } else if (grade[1] == '-') {
                percentage = 83;
            } else {
                percentage = 90;
            }
            break;
        case '3' :
            if (grade[1] == '+') {
                percentage = 78;
            } else if (grade[1] == '-') {
                percentage = 71;
            } else {
                percentage = 75;
            }
            break;
        case '2' :
            if (grade[1] == '+') {
                percentage = 68;
            } else if (grade[1] == '-') {
                percentage = 61;
            } else {
                percentage = 65;
            }
            break;
        case '1' :
            if (grade[1] == '+') {
                percentage = 58;
            } else if (grade[1] == '-') {
                percentage = 51;
            } else {
                percentage = 55;
            }
            break;
        default :
            percentage = -1;
    }
    return percentage;
}

int main() {
    // this function asks for a grade and outputs the grade in a percentage

    // variables
    char userGrade[10] = "         ";
    int userPercentage;

    // input
    std::cout << "Enter your grade: ";
    std::cin >> userGrade;

    // process
    if (userGrade[1] != '+' && userGrade[1] != '-' && userGrade[1] != 0) {
        userPercentage = -1;
    } else {
        userPercentage = convert_mark(userGrade);
    }

    // output
    if (userPercentage == -1) {
        std::cout << "\n";
        std::cout << "Please isnert a valid grade.";
    } else {
        std::cout << "\n";
        std::cout << userPercentage << "%";
    }
}
