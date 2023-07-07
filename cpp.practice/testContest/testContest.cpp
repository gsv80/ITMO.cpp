// testContest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class A {
private:
        int* arr[size];
public:
   const int size;

    A(int s) {
        arr = new int[size];
        std::fill(arr, arr + s, 0);

    }
    ~A() {
        delete[]arr;
    }
    int size() {
        return sizeof(arr) / sizeof(arr[0]);
    }

};



int main()
{
    int arr[10];
    
    
    
    std::fill(arr, arr + 5, 9);
    std::cout << arr[0];
    //A a1;
    //A a2(10); //10 – array size
    //std::cout << a2;
   /* A a3 = a2;
    a1 = a3;
    a2 = A(20);
    */
    //const A a4(5);
    //for (int i = 0; i < a2.size(); i++)
    //{
    //    //cout << a4[i];
    //    std::cout << a2[i];
    //}
    

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
