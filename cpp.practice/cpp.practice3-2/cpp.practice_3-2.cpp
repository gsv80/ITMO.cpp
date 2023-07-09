// cpp.practice3-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <cmath>

double cubeRootStd(double num);
double cubeRoot(double num);

int main()
{
    std::cout << "Hello !\n";

    double num;
    std::cout << "enter a number to find it's cube root\n";
    std::cin >> num;

    std::cout<< cubeRoot(num);
    std::cout << cubeRootStd(num);
}

double cubeRootStd(double num) {
    
    std::cout << "\nbuild-in library cube root calculation:  ";
    return pow(num, 1.0 / 3);
}

double cubeRoot(double num) {

    double xi0 = num;
    double xi1 = 0;
    while(1) {
        
        xi1 = 1.0 / 3 * ( num / (xi0*xi0) + 2 * xi0 );
        
        if (abs(xi1 - xi0) < 0.00001) {

            std::cout << "\nitteration cube root calculation:  ";
            return xi1;
        }
        
        xi0 = xi1;
    } 
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
