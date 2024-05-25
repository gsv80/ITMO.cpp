// cpp.practice_3-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double treArea(double);
double treArea(double, double, double);

int main()
{
    std::cout << "Hello!\n";
    std::cout << "equal-side tre area: " << treArea(1) << '\n';
    std::cout << "three side tre area(Heron method): " << treArea(1, 1, 1) << '\n';
    std::cout << "check value for side = 1 : " << pow(3, 1.0 / 2)/4 << '\n';
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

double treArea(double side) {

    return pow(3.0 ,1.0/2)*side*side/4;
}

double treArea(double sideOne, double sideTwo, double sideThree) {

    double sidesSumHalf = (sideOne + sideTwo + sideThree)/2;

    return pow( sidesSumHalf * (sidesSumHalf-sideOne) * (sidesSumHalf - sideTwo) * (sidesSumHalf - sideThree), 1.0 / 2);
}
