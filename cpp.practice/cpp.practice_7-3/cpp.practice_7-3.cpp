// cpp.practice_7-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <tuple>

using Tuple = std::tuple<double, double, int>;

struct equitionForm {
    double a;
    double b;
    double c;
    void showEquition() {
        std::cout << "Equiton is: " << a << " * x^2 + " << b << " * x + " << c << " = 0\n";
    }

    equitionForm() = default;

    equitionForm(double a, double b, double c)
        : a(a), b(b), c(c)
    {
    }

    bool operator==(const equitionForm& other) const
    {
        return a == other.a && b == other.b && c == other.c;
    }
};


equitionForm inputEqution() {
    equitionForm eq;

    std::cout << "Enter values a,b,c in eqution a*x^2+b*x+c = 0\n";

    std::cout << "\na= ";
    std::cin >> eq.a;
    std::cout << "\nb= ";
    std::cin >> eq.b;
    std::cout << "\nc= ";
    std::cin >> eq.c;

    return eq;
    
}



Tuple equitionSolution(equitionForm eq) {
    Tuple t;
    double d = eq.b * eq.b - 4 * eq.a * eq.c;
    if (d < 0) {
        return t = std::make_tuple(0.0000000000001, 0.0000000000001, 0);
    }
    else if (d==1) {
        auto t = std::make_tuple((-(eq.b / 2.0 / eq.a)), 0.0000000000001, 1);
        return t;
    }
    else {
        auto t = std::make_tuple((sqrt(d) - eq.b) / (2.0 * eq.a), (-sqrt(d) - eq.b) / (2.0 * eq.a), 2);        
        return t;
    }
    return t;
}



void printTuple(Tuple t) {
    if (std::get<2>(t)==0) {
        std::cout << "No roots for the equition" << std::endl;
    }
    else if (std::get<2>(t) == 1) {
        std::cout << "Only root for the equition" << std::endl;
        std::cout << "Root: " << std::get<0>(t) << std::endl;
    }
    else if (std::get<2>(t)==2){
        std::cout << "Two roots for the equition" << std::endl;
        std::cout << "Root #1: " << std::get<0>(t) << std::endl;
        std::cout << "Root #2: " << std::get<1>(t) << std::endl;
    }
}


int main()
{
    equitionForm eq = inputEqution();
    printTuple(equitionSolution(eq));

    
}