// cpp.practice_3-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int sumFiveRow(int num);

int main()
{
    std::cout << "Hello\n";
    std::cout << "Enter a whole number greater than zero\n";
    int num;

    std::cin >> num;
    while (num <= 0) {
        std::cout << "Incorrect number, please repeat enter with new one\n";
        std::cin >> num;
    }

    std::cout << "A sum for row of "<<num<<" elements is: " << sumFiveRow(num);



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

int sumFiveRow(int num) {
    
    if (num == 1) {
        return 5;
    }
    else {
        return (sumFiveRow(num - 1) + num * 5);
    }
}