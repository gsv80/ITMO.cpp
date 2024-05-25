// practice10_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Dot.h"
#include "Triangle.h"


int main()
{
    double firstDotX;
    double firstDotY;
    double secondDotX;
    double secondDotY;
    double thirdDotX;
    double thirdDotY;

    std::cout << "Enter coordinates of the first dot:\n";
    std::cout << "x = ";
    std::cin >> firstDotX;
    std::cout << "y = ";
    std::cin >> firstDotY;

    std::cout << "\nEnter coordinates of the second dot:\n";
    std::cout << "x = ";
    std::cin >> secondDotX;
    std::cout << "y = ";
    std::cin >> secondDotY;

    std::cout << "\nEnter coordinates of the third dot:\n";
    std::cout << "x = ";
    std::cin >> thirdDotX;
    std::cout << "y = ";
    std::cin >> thirdDotY;

    Dot* firstDot = new Dot(firstDotX, firstDotY);
    Dot* secondDot = new Dot(secondDotX, secondDotY);
    Triangle* myTriangle = new Triangle(firstDot, secondDot, thirdDotX, thirdDotY);

    std::cout << "\nSides of triangle\n";
    myTriangle->printSides();
    std::cout << "Perimeter: " << myTriangle->getPerimeter() << std::endl;
    std::cout << "Area: " << myTriangle->getArea() << std::endl;
    delete myTriangle;

    std::cout << "\nPoints A and B are still alive" << std::endl;
    std::cout << "Side AB: " << firstDot->distanceTo(*secondDot) << std::endl;

    delete firstDot;
    delete secondDot;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
