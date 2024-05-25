// cpp.practice_3-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int decimalToBinary(int num);
void recursiveDecimalToBin(int num);
int main()
{
    std::cout << "Hello!\n";
    std::cout << "Enter the number to convert into binary: ";
    int num;
    std::cin >> num;
    
    std::cout << "\n### result  : ";
    recursiveDecimalToBin(num);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu



void recursiveDecimalToBin(int num) {

    if (num > 0) {
        recursiveDecimalToBin(num / 2);
        std::cout<< num % 2;
    }
}

