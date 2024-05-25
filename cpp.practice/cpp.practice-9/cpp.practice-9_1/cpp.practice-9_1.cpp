// cpp.practice-9_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Triangle.h"

int main()
{
    double a, b, c;
    double area;
    Triangle myTriangle;

    std::cout << "Enter sides of triangle\n";
    std::cout << "A = ";
    std::cin >> a;
    std::cout << "B = ";
    std::cin >> b;
    std::cout << "C = ";
    std::cin >> c;

    try
    {
        myTriangle = Triangle(a, b, c);
    }
    catch (Triangle::WrongSideOfTriangle& ex)
    {
        std::cout << "\nError: ";
        ex.printMessage();
        return 1;
    }

    area = myTriangle.getArea();
    std::cout << "\nArea of the triangle is " << area;

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
