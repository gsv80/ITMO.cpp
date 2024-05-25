// cpp.practice_6-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>


int main()
{
    //std::string buffTxt;

    std::string str = "result.txt";

    const int size = 10;

    double arr[size];

    for (int i = 0; i < size;i++) {
        arr[i] = (rand() % 100);
    }
    
    for (int item : arr) {
        std::cout << item << '\t';
    }
    std::cout << '\n';

    std::ofstream out(str, std::ios::out );

    if (!out) {
        std::cout << "File openning is not available";
        return 1;
    }
    out << "\nPrimary array: \n";

    for (int i{ 0 };i < size;i++) {
        out << arr[i]<<'\t';
    }

    out.close();


    int min;
    int buf;

    for (int i{ 0 };i < size;i++) {
        min = i;
        for (int j=i+1;j < size; j++) {
            min = (arr[j] < arr[min]) ? j : min;
        }
        if (i != min) {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }

    for (int item : arr) {
        std::cout << item << '\t';

    }

    
    out.open(str, std::ios::app);
    if (!out) {
        std::cout << "File openning is not available";
        return 1;
    }
    out << "\nSorted array: \n";
  
    for (int i{ 0 };i < size;i++) {
        out << arr[i] << '\t';
    }

    out.close();


}




