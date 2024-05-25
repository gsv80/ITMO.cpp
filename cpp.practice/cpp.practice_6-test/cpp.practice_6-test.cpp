// cpp.practice_6-test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int main()
{
    double sum;
    int const num = 100;
    double nums[num];

    for (int i{ 0 };i < num;i++) {
        nums[i] = (rand() % 100);
    }

    std::ofstream out;
    out.open("testN.txt", std::ios::binary | std::ios::out | std::ios::app);

    if (!out) {
        std::cout << "Openning file is not available";
        return 1;
    }

    for (int i{ 0 }; i < num;i++) {
        out<<nums[i]<<'\t';
    }

    out.close();

}
