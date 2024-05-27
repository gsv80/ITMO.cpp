// cpp.test_solution_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;

class A {
public:
    A(int len) : length(len) {
        arr = new int[len];
        for (int i = 0; i < len; i++) {
            arr[i] = i;
        }
    }
    A() : arr(nullptr), length(0)
    {}
    ~A() {
        delete arr;
    }
    int size() const {
        return length;
    }
    int& operator[](int idx) const {
        if (idx < 0 || idx >= length) {
            cout << "Array is out of range\n" << endl;
            exit(1);
        }
        return arr[idx];
    }
private:
    int* arr;
    int length;
};

int main()

{

    A a1;
    A a2(10);
    A a3 = a2;
    a1 = a3;
    a2 = A(20);
    const A a4(5);
    for (int i = 0; i < a2.size(); i++)
    {
        cout << a4[i];
    }
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
