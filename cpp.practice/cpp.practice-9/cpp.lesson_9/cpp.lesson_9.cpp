// cpp.lesson_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class DivideByZeroError
{
public:
    DivideByZeroError() : message("Dividing by ZERO error") { }
    void printMessage() const { std::cout << message << std::endl; }
private:
    std::string message;
};
float quotient(int numl, int num2)
{
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)numl / num2;
}

int main()
{
    std::cout << "Enter a number which is used as numerator for denominators from -10 to 10:\n";
    int number1;
    std::cin >> number1;

    for (int i = -10;i <= 10;i++) 
    {
        try
        {
            float result = quotient(number1, i);
            std::cout << "Quotient is " << result << std::endl;
        }
        catch (DivideByZeroError& error) 
        {
            std::cout << "ERROR: ";
            error.printMessage();
            
        }

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
