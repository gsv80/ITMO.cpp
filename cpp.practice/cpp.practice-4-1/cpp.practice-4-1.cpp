// cpp.practice-4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int myroot(double, double, double, double&, double&);

int main()
{
    double a, b, c;
    double root1, root2;      

    std::cout << "Enter values a,b,c in eqution a*x^2+b*x+c = 0\n";

    std::cout << "\na= ";
    std::cin >> a;
    std::cout << "\nb= ";
    std::cin >> b;
    std::cout << "\nc= ";
    std::cin >> c;

    int res = myroot(a, b, c, root1, root2);

    switch (res) {
    case -1:
        std::cout << "The eqution has no solution";
        break;
    case 0:
        std::cout << "The eqution has one root";
        std::cout << "\nRoot #1  = Root #2 = " << root1;
        break;
    case 1:
        std::cout << "The eqution has two roots";
        std::cout << "\nRoot #1 = " << root1;
        std::cout << "\nRoot #2 = " << root2;
        break;
    default:std::cout << "Unknown programm error";
    }


}


int myroot(double a, double b, double c, double &root1, double &root2  ) {

    double d;

    d = b * b - 4 * a * c;

    if (d < 0) {
        return -1;
    }
    else if (d == 0) {
        root1 = -(b / 2.0 * a);
        return 0;
    }
    else {
        root1 = (sqrt(d) - b) / (2.0 * a);
        root2 = (-sqrt(d) - b) / (2.0 * a);
        return 1;
    }


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
