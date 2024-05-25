// cpp.practice-4-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int input(int &a, int &b);

int main()
{
    int a, b;
    if (!input(a, b)) {
        std::cerr << "error";
        return 1;
    }
    int s = a + b;
    return 0;

}

int input(int &a, int &b) {

    std::cout << "Enter values a and b: \n";
    std::cin >> a ;
    std::cin >> b;
    if (a < 0 || b < 0) {
        return 0;
    }
    else {

    return 1;
    }

}

