// cpp.practice9_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Time.h"

int main()
{
    int hours;
    int minutes;
    int seconds;
    Time time3;

    try {

        std::cout << "Enter first time\n";
        std::cout << "Enter hours: ";
        std::cin >> hours;
        std::cout << "Enter minutes: ";
        std::cin >> minutes;
        std::cout << "Enter seconds: ";
        std::cin >> seconds;
        Time time1(hours, minutes, seconds);
        std::cout << "First time: ";
        time1.print();

        std::cout << "\nEnter second time\n";
        std::cout << "Enter hours: ";
        std::cin >> hours;
        std::cout << "Enter minutes: ";
        std::cin >> minutes;
        std::cout << "Enter seconds: ";
        std::cin >> seconds;
        Time time2(hours, minutes, seconds);
        std::cout << "Second time: ";
        time2.print();

        time3 = time1.addTime(time2);
        std::cout << "\nSum time: ";
        time3.print();
    }
    catch (Time::TimeWrongValue& er)
    {
        std::cout << "\nError: ";
        er.printMessage();
        return 1;
    }

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
