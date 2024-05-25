// cpp.practice_7-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct equitionForm {
    double a;
    double b;
    double c;
    void showEquition() {
        std::cout << "Equiton is: " << a << "*x^2+" << b << "*x+" << c << " = 0\n";
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

struct quadEqSolution {
    double root1;
    double root2;

    void showRoots() {
        std::cout << "\nRoot #1 = " << root1;
        std::cout << "\nRoot #2 = " << root2;
    }

    quadEqSolution() = default;

    quadEqSolution(double root1, double root2)
        : root1(root1), root2(root2)
    {
    }    

    bool operator==(const quadEqSolution& other) const
    {
        return root1 == other.root1 && root2 == other.root2;
    }
};


 equitionForm equitionInput() {
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

 quadEqSolution eqSolution(equitionForm eq) {

     quadEqSolution solution;

     double d=eq.b*eq.b-4*eq.a*eq.c;
     try {
         if (d < 0) throw 0;
         if(d == 0) {
             std::cout << "Only solution for equition\n";
             solution.root1 = -(eq.b /2.0 / eq.a);
             return solution;
         }
         else {
             solution.root1 = (sqrt(d) - eq.b) / (2.0 * eq.a);
             solution.root2 = (-sqrt(d) - eq.b) / (2.0 * eq.a);
             return solution;
         }
     }

     catch (...) {
         std::cout << "No solution for equition\n";
         solution.root1 = 0.0000000001;
         solution.root2 = 0.0000000001;
         return solution;
     }

 }



int main()
{
    equitionForm eq = equitionInput();
    eq.showEquition();
        
    quadEqSolution sol1 = eqSolution(eq);
    sol1.showRoots();

}


