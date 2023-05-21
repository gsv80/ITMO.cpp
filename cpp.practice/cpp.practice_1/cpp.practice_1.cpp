// cpp.practice_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<cmath>

double polygon_area(int, double, double);

int main()
{


    //-------------------- task-1 ----------------------------
    // 
    //string name;
    //std::cout << "What's your name?\n";
    //getline(cin, name);
    //std::cin >> name;
    //std::cout << "Hello, " << name << "!\n";
    // 
    //=========================================================

    //--------------------- task-2 ----------------------------
    std::cout.precision(3);

    /*   double a, b;
    std::cout << "Input variables 'a' and 'b': \n";
    std::cin >> a;
    std::cin >> b;
    double x = a / b;
    std::cout << "\nx = " << x << std::endl;
    std::cout << sizeof(a / b)<<" " << ends << sizeof(x) << std::endl;
    return 0;*/

    // ===========================================================
    // 
    // ----------------- Control task  1----------------------------

  
    int vertices{5};
    double area{0};
    double x_array[6]{};
    double y_array[6]{};

    for (int i{0}; i < 5;i++) {
        std::cout << "Input vertex " <<i + 1 << " coordinate x " << std::endl;
        std::cin >> x_array[i];
        std::cout << "Input vertex " << i + 1 << " coordinate y " << std::endl;
        std::cin >> y_array[i];

    }
    x_array[5] = x_array[0];
    y_array[5] = y_array[0];

    for (int j{ 1 };j < 6;j++) {
        //std::cout << area << std::endl;
        area += 0.5* abs(x_array[j-1]*y_array[j]- x_array[j] * y_array[j-1]);
        //std::cout << area << std::endl;

    }
    std::cout << "finally, total area is: " << area << std::endl;

 
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
